#include <iostream>
using namespace std;
int main()
{
	int x,y,z;
	cout << "3 basamakli bir sayi giriniz:"<< endl;
	int sayi;
	cin>> sayi;
	x=sayi/100;
	y=(sayi%100)/10;
	z=sayi%10;
	cout << "sayinin basamaklari toplami= "<< x+y+z <<"" << endl;
	return 0;
	
}
