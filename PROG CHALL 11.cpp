#include <iostream>
using namespace std;

int main (){
	float townMiles = 23.5;
	float highwayMiles = 28.9;
	float gallons = 15;
	
	float distanceTown = gallons * townMiles;
	float distanceHighway = gallons * highwayMiles;
	
	cout << "The distance traveled if the car goes in town 	 : " << distanceTown << "miles" << endl;
	cout << "The distance traveled if the car goes in highway : " << distanceHighway << "miles" << endl;
	
	return 0;
}
