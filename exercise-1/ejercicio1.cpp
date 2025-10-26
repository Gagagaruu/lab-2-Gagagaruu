#include <iostream>
using namespace std;

int main () {
    int n1, n2, n3;
    
    cout << "Ingresa 3 numeros enteros: ";
    cin >> n1 >> n2 >> n3;

    int suma = n1 + n2 + n3;
    double promedio = suma / 3;
    int producto = n1 * n2 * n3;

    int minimo = n1;
    if ( n2 < minimo ) minimo = n2;
    if ( n3 < minimo) minimo = n3;

    int maximo = n1;
    if ( n2 > maximo ) maximo = n2;
    if ( n3 > maximo ) maximo = n3;

    cout << "La suma es " << suma << endl;
    cout << "El promedio es " << promedio << endl;
    cout << "El producto es " << producto << endl;
    cout << "El más pequeño es " << minimo << endl;
    cout << "El más grande es " << maximo << endl;

    return 0; 
    
 
}