#include <iostream>;
using std::cout;                        // 1 pastaba
using std::endl;
using namespace std;

int main() {

    int a, b;

    cout << "Iveskite du skaicius: ";
    cin >> a >> b;

    int c = a + b;
    cout << " a = " << a << endl;
    cout << " b = " << b << endl;
    cout << "Rezultatas " << c << endl;

    return 0;
}
