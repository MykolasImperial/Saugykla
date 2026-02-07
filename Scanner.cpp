#include <iostream>
#include <fstream>
using namespace std;
int main() {

    double Quantity[5];
    double Sum = 0;

    ifstream Read("Safe.txt");

    if (Read.is_open()) {

        for (int i = 0; i < 5; i++) {
                Read >> Quantity[i];
        }
        Read.close();

        cout << " --- Inventory scanner --- " << endl;

        for (int i = 0; i < 5; i ++) {
            cout << i +1  << " - Item: " << Quantity[i] << endl;
            Sum = Sum + Quantity[i];
        }
        cout << "_________________________" << endl;
        cout << "The whole Sum is: " << Sum << endl;
    }
        else {

            cout << " ERROR 404 " << endl;
        }

            return 0;
}
