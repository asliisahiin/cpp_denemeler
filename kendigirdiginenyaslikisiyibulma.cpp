#include <iostream>
#include <vector>
#include <string>
using namespace std;

struct ogrenci{
	string isim;
	int yas;
};
	
	void enyasli (ogrenci ogr[], int x){
		int enyasli=0;
		
		for (int i=1;i<x;i++){
		if (ogr[i].yas> ogr[enyasli].yas){
		enyasli=i;
}
	}
	

    cout<< "en yasli ogrenci:\n";
    cout<< ogr[enyasli].isim;
    cout<< "\n("<<ogr[enyasli].yas<<")\n";
    
}

int main() {
    int k;
    cout << "Kac ogrenci var: ";
    cin >> k;

    ogrenci ogr[k];

    for (int i = 0; i < k; i++) {
        cout << i+1 << ". ogrencinin ismi: ";
        cin >> ogr[i].isim;

        cout << i+1 << ". ogrencinin yasi: ";
        cin >> ogr[i].yas;
    }
	enyasli(ogr, k );
}
