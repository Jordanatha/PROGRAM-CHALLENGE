#include <iostream>
using namespace std;

int main (){
	float totalCustomer = 16500;
	float energyDrink = 0.15;
	float flavoredDrink = 0.58;
	
	float totalEnergyDrink = totalCustomer + totalCustomer * energyDrink;
	float totalFlavoredDrink = totalCustomer + totalCustomer * flavoredDrink;
	
	cout << "Energy Drink   : " << totalEnergyDrink << endl;
	cout << "Flavored Drink : " << totalFlavoredDrink << endl;
	
	return 0;
}
