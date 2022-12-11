#include<iostream>
#include<cmath>
#include"getOneGaussianByBoxMueller.h"
#include"EuropeanUpOutCall.h"


//definition of constructor
EuropeanUpOutCall::EuropeanUpOutCall(
	int nInt_,
	double strike_,
	double barrier_,
	double spot_,
	double vol_,
	double r_,
	double expiry_){
		nInt = nInt_;
		strike = strike_;
		barrier = barrier_;
		spot = spot_;
		vol = vol_;
		r = r_;
		expiry = expiry_;
		generatePath();
}

//method definition
void EuropeanUpOutCall::generatePath(){
	double thisDrift = (r * expiry - 0.5 * vol * vol * expiry) / double(nInt);
	double cumShocks = 0;
	thisPath.clear();

	for(int i = 0; i < nInt; i++){
		cumShocks += (thisDrift + vol * sqrt(expiry / double(nInt)) * getOneGaussianByBoxMueller());
		thisPath.push_back(spot * exp(cumShocks));
	}
}


//method definition
double EuropeanUpOutCall::getEuropeanUpOutCallPrice(int nReps){

	double rollingSum = 0.0;

	for(int i = 0; i < nReps; i++){
		generatePath();
	  if(thisPath[i] < barrier) rollingSum += (thisPath[i] > strike) ? (thisPath[i] - strike) : 0;
	}

	return exp(-r*expiry)*rollingSum/double(nReps);

}


//overloaded operator ();
double EuropeanUpOutCall::operator()(int nReps){
	return getEuropeanUpOutCallPrice(nReps);
}
