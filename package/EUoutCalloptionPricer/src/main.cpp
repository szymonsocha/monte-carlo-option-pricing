#include<Rcpp.h>
#include<iostream>
#include<vector>
#include<ctime>
#include<cstdlib>
#include"EuropeanUpOutCall.h"

using namespace Rcpp;
using std::vector;

// [[Rcpp::export]]
double getEuropeanUpOutCallPrice(int nInt = 126,
                              double strike = 100,
                              double barrier = 130,
                              double spot = 95,
                              double vol = 0.24,
                              double r = 0.07,
                              double expiry = 0.75,
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
