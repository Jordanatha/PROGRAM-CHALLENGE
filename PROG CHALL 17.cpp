#include <iostream>
using namespace std;

int main (){
	float realPrice = 35;
	float amount = 750;
	float commission = 0.02;
	
	
	float total = realPrice * amount + realPrice * commission * amount;
	
	cout << "Amount paid without commission : " << realPrice * amount << endl;
	cout << "Commission: " << realPrice * amount * commission << endl;
	cout << "Total : " << total << endl;
	
	return 0;
}
