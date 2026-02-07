#include <iostream>

using namespace std;

int main() {
    int kiekis; // Èia saugosime tavo atsispaudimø skaièiø

    cout << "Kiek atsispaudimu padarei siandien? ";
    cin >> kiekis; // Kompiuteris laukia, kol tu árağysi skaièiø

    // Èia prasideda logika (tavo sprendimai):
    if (kiekis < 50) {
        cout << "Silpnumas nepasiteisinimas. Eik ant grindu!" << endl;
    }
    else if (kiekis >= 50 && kiekis <= 100) {
        cout << "Geras darbas. Tu kelyje i virsune." << endl;
    }
    else {
        cout << "Tikras lyderis. Dominuok toliau!" << endl;
    }

    return 0;
}
