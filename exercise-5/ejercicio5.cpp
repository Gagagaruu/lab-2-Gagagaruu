#include <iostream>
using namespace std;

int main () {

    cout << "***********" << endl;
    cout << "x  f(x)" << endl;
    cout << "***********" << endl;

    for (int x = 0; x <= 5; x++) {
        int cubo = x * x * x;
        int cuadrado = x * x;
        int fx = cubo - cuadrado + 5;

        cout << x << "  " << fx << endl;

    }
    cout << "***********" << endl;

    return 0;


}

