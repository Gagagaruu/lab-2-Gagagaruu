#include <iostream>
using namespace std;

int main () {
    int n1;
    int n2;
    int n3;

    cout << "Ingrese tres números diferentes: ";
    cin >> n1 >> n2 >> n3;

    int minimo = n1;
    if (n2 < minimo) minimo = n2;
    if (n3 < minimo ) minimo = n3;

    int maximo = n1;
    if (n2 > maximo) maximo = n2;
    if (n3 > maximo) maximo = n3;

    int medio;
    if (n1 != minimo && n1 != maximo) medio = n1;
    else if (n2 != minimo && n2 != maximo) medio = n2;
    else medio = n3;

    cout << "El numero del medio es " << medio  << endl;

    return 0;

}