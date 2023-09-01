#include <iostream>

using namespace std;

int main(){

    double x = 3.14, y, z;
    cout << "x = " << x << endl;
    y = x + 1.0; //Operador de adição
    cout << "y = x + 1.0 = " << z << endl;
    x = x + -2; // Operador multiplicação operador unário
    cout << "x = x + -2.0 = " << x << endl;
    y = y / 2.0; //Operador de divisão real;
    cout << "y = y / 2.0 = " << y << endl;
    y = 5 / 2; //Operador de divisão inteira;
    cout << "y = 5 / 2; = " << y << endl;
    x = ++x + 2 * --y - z / 4.3 + 6.1 * 3.2; //Ordem de precedênciados operadores
    cout << "x = ++x + 2 * --y - z / 4.3 + 6.1 * 3.2 = " << x << endl;
    x = (++x + 2) * (--y - z) / (4.3 + 6.1 * 3.2); //Usando parênteses
    cout << "x = (++x + 2) * (--y - z) / (4.3 + 6.1 * 3.2) = " << x << endl;
    
    return 0;
}