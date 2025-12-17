#include <iostream>
using namespace std;

void faktoriyel (int sayi){
	int faktoriyel=1;
	
	for (int i=1; i<=sayi; i++){
	faktoriyel = faktoriyel*i;
}

cout << "sayinin faktoriyeli:"<< faktoriyel;
}

int main(){
	int sayi;
	cout<< "lutfen sayiyi giriniz:";
	cin >> sayi;
	while (sayi>=0){
	faktoriyel (sayi);
	cout << "\n";
	cin >> sayi;
}
	
	return 0;
}
	


