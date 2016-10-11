#include <iostream>
using namespace std;

int main(){
	double payAmount = 2200;
	double payPeriods = 26;
	
	double annualPay = payAmount * payPeriods;
	
	cout << "$" << annualPay;
	return 0;
}
