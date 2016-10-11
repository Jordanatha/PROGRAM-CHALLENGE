#include <iostream>
using namespace std;

int main (){
	float purchase = 95;
	float salestax = 0.04;
	float countytax= 0.02;
	
	float total1 = purchase + (purchase * salestax);
	float total2 = total1 + (total1 * countytax);
	
	cout << "$" << total2;
	return 0 ;
}
