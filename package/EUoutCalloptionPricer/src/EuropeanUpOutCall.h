#include<vector>

class EuropeanUpOutCall{
public:

	//constructor
	EuropeanUpOutCall(
		int nInt_,
		double strike_,
		double barrier_,
		double spot_,
		double vol_,
		double r_,
		double expiry_
		);

	//destructor
	~EuropeanUpOutCall(){};

	//methods
	void generatePath();
	double getMaxValue();
	void printPath();
	double getEuropeanUpOutCallPrice(int nReps);
	double operator()(int nReps);

	//members
	std::vector<double> thisPath;
	int nInt;
	double strike;
	double barrier;
	double spot;
	double vol;
	double r;
	double expiry;

};
