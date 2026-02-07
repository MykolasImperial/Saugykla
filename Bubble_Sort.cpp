#include <iostream>

using namespace std;

int main() {
    // Sukuriame 5 skaièiø masyvà (tavo rezultatus)
    int skaiciai[5] = {45, 12, 89, 5, 23};
    int n = 5;

    cout << "Pradiniai skaiciai: ";
    for(int i = 0; i < n; i++) cout << skaiciai[i] << " ";
    cout << endl;

    // BURBULO RUĞIAVIMO ALGORITMAS
    for(int i = 0; i < n-1; i++) {
        for(int j = 0; j < n-i-1; j++) {
            if(skaiciai[j] > skaiciai[j+1]) {

                // Sukeiciame vietomis, jei skaicius didesnis uz sekanti
                int temp = skaiciai[j];
                skaiciai[j] = skaiciai[j+1];
                skaiciai[j+1] = temp;
            }
        }
    }

    cout << "Surusiuoti skaiciai: ";
    for(int i = 0; i < n; i++) cout << skaiciai[i] << " ";
    cout << endl;

    return 0;
}
