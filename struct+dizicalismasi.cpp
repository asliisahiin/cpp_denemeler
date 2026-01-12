#include <iostream>
#include <string>
using namespace std;

struct sinif{
	string ad;
	string soyad;
	int notu;
};

int main (){
	sinif ogr[45];
	
	for (int i=0;i<45;i++){
		cout<< i+1<< ".ogrencinin;\n";
		cout<< "Adini giriniz:";
		cin>> ogr[i].ad;
		cout << "soyadini giriniz:";
		cin >> ogr[i].soyad;
		cout<< "notunu giriniz:";
		cin>> ogr[i].notu;
	}
	
	string arananAd;
	cout<<"istediginiz ogrencinin adini giriniz:";
	cin>> arananAd;
	
	for (int i=0;i<45;i++){
		if (arananAd==ogr[i].ad){
		cout<< arananAd<< "'in notu:"<< ogr[i].notu;
		break;
		}
	}
	
	int max = ogr[0].notu;
	int index=0;
	
	for (int i=0;i<45;i++){
		if (ogr[i].notu>max){
			max= ogr[i].notu;
			index= i;
		}
	}
	
	cout <<ogr[index].ad<<" "<<ogr[index].soyad<< "en yuksek notu almistir! Notu:"<< max;
	    return 0;
}
