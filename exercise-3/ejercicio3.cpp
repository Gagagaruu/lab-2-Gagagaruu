#include <iostream>
using namespace std;

int main () {
    int n = 0;
    cout << "Introduzca un numero entero de 5 digitos ";
    cin >> n;

    int absn = n < 0 ? -n : n;

    int n1 = absn / 10000;
    int n2 = (absn / 1000) % 10;
    int n3 = (absn / 100) % 10;
    int n4 = (absn / 10) % 10;
    int n5 = absn % 10;

    cout << "Digitos separados: ";
    cout << n1 << "   " << n2 << "   " << n3 << "   " << n4 << "   " << n5 << endl;

    return 0;

}