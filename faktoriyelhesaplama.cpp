#include <iostream>
using namespace std;

int main(){
	
	int number,i=1, fakt=1;
	cout<< "bir sayi giriniz:";
	cin>> number;
    	

    for (i=1; i<=number; i++)
    fakt=fakt*i;
    
	cout<<"sayinin faktoriyeli:"<< fakt;
   
    return 0;
 
}
