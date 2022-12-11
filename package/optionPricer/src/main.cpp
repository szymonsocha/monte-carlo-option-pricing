#include<Rcpp.h>
#include<iostream>
#include<vector>
#include<ctime>
#include<cstdlib>
#include"EuropeanUpOutCall.h"

using namespace Rcpp;
using std::vector;
using std::cout;
using std::cin;

int main(){

	// set the seed
	srand( time(NULL) );

	//create a new instance of class
	EuropeanUpOutCall myOption(126, 100, 105, 95, 0.2, 0.06, 0.5);

	// Iterate over all the elements.
	// myAsian.printPath();


		//get last price of underlying
	cout << "Last price of underlying = " << myOption.thisPath.back() << "\n";

	//run Monte Carlo to obtain theoretical price of Asian options
	cout << "Price of European Up-and-Out Call = " << myOption.getEuropeanUpOutCallPrice(10000) << "\n";

	//call Monte Carlo via overloaded () operator
	cout << "calling functions via operator() \n";
	cout << "Price of European Up-and-Out Call = " <<  myOption(10000) << "\n";

	//check whether the Data Generating Process runs correctly
	//(is the expected price and volatility of underlying close to option parameters?)
	vector<double> myVec2;
	for(int i = 0; i < 1000; i++){
	  myOption.generatePath();
		myVec2.push_back(myOption.thisPath.back());
	}

	//cout << "\nPress Enter to continue...";
	//cin.get();
	return 0;
}
