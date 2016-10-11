#include <iostream>
using namespace std;

int main(){
	double mealcost = 88.67;
	double tax = 0.0675;
	double tip = 0.2;
	
	long double total1 = mealcost + mealcost * tax;
	long double total2 = total1 + total1 * tip;
	
	cout << "$" << total2;
	return 0;
	
}
