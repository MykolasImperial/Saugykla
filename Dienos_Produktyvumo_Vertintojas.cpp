#include <iostream>
#include <string>

using namespace std;

int main() {
    int sportas, kodas, scroll;

    cout << "--- DIENOS ANALIZE ---" << endl;

    cout << "Ar siandien sportavai? (1 - Taip, 0 - Ne): ";
    cin >> sportas;

    cout << "Kiek programu siandien parasei? ";
    cin >> kodas;

    cout << "Kiek valandu praleidai beprasmiskai scrolindamas? ";
    cin >> scroll;

    cout << "\n--- REZULTATAS ---" << endl;

    if (sportas == 1 && kodas >= 1 && scroll < 1) {
        cout << "Sveikinu. Siandien tu buvai nugaletojas! Taip ir toliau." << endl;
    }
    else if (scroll >= 2) {
        cout << "Per daug laiko praleidai ziuredamas i svetimus gyvenimus. Rytoj telefonas i sona!" << endl;
    }
    else {
        cout << "Galejo buti geriau. Nepamirsk savo tikslu." << endl;
    }

    return 0;
}
