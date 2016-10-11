#include <iostream>
using namespace std;

int main (){
	double Item1 = 15.95,
		   Item2 = 24.95,
		   Item3 = 6.95,
		   Item4 = 12.95,
		   Item5 = 3.95,
		   bruto,
		   tax,
		   nett;
	cout<<"A customer is purchasing 5 items with the price : \n";
	cout<<"Item 1 = $15.95\n";
	cout<<"Item 2 = $24.95\n";
	cout<<"Item 3 = $6.95\n";
	cout<<"Item 4 = $12.95\n";
	cout<<"Item 5 = $3.95\n";
	cout<<"When the tax it 7% of the total, how much the total spend of this guy?\n";
	
	bruto = Item1+Item2+Item3+Item4+Item5;
	tax = bruto * 7 / 100;
	nett = bruto + tax;
	
	cout<<"Total of his spending is :\n";
	cout<<"Subtotal   : "<<"$"<<bruto<<"\n";
	cout<<"Tax        : "<<"$"<<tax<<"\n";
	cout<<"Total nett : "<<"$"<<nett<<"\n";
	
	return 0;
}
