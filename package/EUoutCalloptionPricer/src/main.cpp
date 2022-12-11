#include<Rcpp.h>
#include<iostream>
#include<vector>
#include<ctime>
#include<cstdlib>
#include"EuropeanUpOutCall.h"

using namespace Rcpp;
using std::vector;

// [[Rcpp::export]]
int getEuropeanUpOutCallPrice(int nInt,
                              double strike,
                              double barrier,
                              double spot,
                              double vol,
                              double r,
                              double expiry,
                              int nReps = 1000){

	// set the seed
	srand( time(NULL) );

	//create a new instance of class
	EuropeanUpOutCall myOption(nInt, strike, barrier, spot, vol, r, expiry);

  // call the method to get option price
	double price = myOption.getEuropeanUpOutCallPrice(nReps);

	// return option price
	return price;
}
