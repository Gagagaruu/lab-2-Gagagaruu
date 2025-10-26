#include <iostream>
using namespace std;

int main () {
    int n1, n2;
    cout << "Ingrese 2 números enteros ";
    cin >> n1 >> n2;

    if ( n1 % n2 == 0 ) {
        cout << n1 << " es un múltiplo de " << n2 << endl;

    } else {
        cout << n1 << " no es un múltiplo de " << n2 << endl;

    } return 0;

}

