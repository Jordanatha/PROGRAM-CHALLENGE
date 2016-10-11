#include <iostream>
using namespace std;
int main() {
	
    int rows, star, spaces;
    int Jumlahstar = 5; 
    int Jumlahrow = Jumlahstar;
    for (rows=1; rows <= Jumlahrow; rows++) {

         for (spaces=1; spaces <= Jumlahstar ; spaces++) {
            cout<<" ";
         }
         for (star=1; star <= rows; star++) {
             cout<<"*";
            cout<<" ";
         }
        cout<<"\n";
        Jumlahstar = Jumlahstar - 1; 
   } 
   			
  return 0;
}
