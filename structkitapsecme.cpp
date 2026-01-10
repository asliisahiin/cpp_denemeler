#include <iostream>
using namespace std;

struct Kitap {
    string kitapismi;
    string yazar;
    int yil;
};

int main() {
    Kitap kitaplar[10];
    int sec;

   
    for (int i = 0; i < 10; i++) {
        cout << i+1 << ". kitabin ismi: ";
        cin >> kitaplar[i].kitapismi;

        cout << "Yazari: ";
        cin >> kitaplar[i].yazar;

        cout << "Basim yili: ";
        cin >> kitaplar[i].yil;
    }

    do {
        cout << "\n Asagidaki seceneklerden birini giriniz:\n";
        cout << "1. Kitap ismi \n 2. Yazar \n 3. Bitir\n";
        cout << "Secenek: ";
        cin >> sec;

        if (sec == 1) {
            string isim;
            cout << "Kitap ismi giriniz: ";
            cin >> isim;

            for (int i = 0; i < 10; i++) {
                if (kitaplar[i].kitapismi == isim) {
                    cout << "Yazar: " << kitaplar[i].yazar << endl;
                    cout << "Basim yili: " << kitaplar[i].yil << endl;
                }
            }
        }

        else if (sec == 2) {
            string y;
            cout << "Yazar soyadi giriniz: ";
            cin >> y;

            cout << "Kitaplari:\n";
            for (int i = 0; i < 10; i++) {
                if (kitaplar[i].yazar == y) {
                    cout << kitaplar[i].kitapismi << endl;
                }
            }
        }

    } while (sec != 3);

    cout << "Hoscalanin!!";
    return 0;
}



