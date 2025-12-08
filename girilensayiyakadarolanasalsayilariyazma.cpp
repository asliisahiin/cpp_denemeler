#include <iostream>
#include <cmath>
using namespace std;

int main(){
    int number, i, j, control;
    cout << "Bir sayi giriniz: ";
    cin >> number;

    for (i = 2; i <= number; i++) {
        control = 1; 

        for (j = 2; j <= sqrt(i); j++) {
            if (i % j == 0) {
                control = 0; 
                break;
            }
        }

        if (control == 1)
            cout << i << " ";
    }

    return 0;
}

