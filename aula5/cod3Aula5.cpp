#include <iostream>

using namespace std;

int main() {
    // Este programa em C++ demonstra operações aritméticas em variáveis de ponto flutuante.

    double x = 3.14, y, z;

    // Imprime o valor atual de 'x'.
    cout << "x = " << x << endl;

    // Realiza operação de adição e imprime o resultado.
    y = x + 1.0; 
    cout << "y = x + 1.0 = " << y << endl;

    // Realiza operação de subtração (com operador unário) e imprime o resultado.
    x = x + -2; 
    cout << "x = x + -2.0 = " << x << endl;

    // Realiza operação de divisão real e imprime o resultado.
    y = y / 2.0; 
    cout << "y = y / 2.0 = " << y << endl;

    // Realiza operação de divisão inteira e imprime o resultado.
    y = 5 / 2; 
    cout << "y = 5 / 2 = " << y << endl;

    // Demonstração da ordem de precedência dos operadores.
    x = ++x + 2 * --y - z / 4.3 + 6.1 * 3.2; 
    cout << "x = ++x + 2 * --y - z / 4.3 + 6.1 * 3.2 = " << x << endl;

    // Demonstração do uso de parênteses para controlar a ordem das operações.
    x = (++x + 2) * (--y - z) / (4.3 + 6.1 * 3.2); 
    cout << "x = (++x + 2) * (--y - z) / (4.3 + 6.1 * 3.2) = " << x << endl;

    return 0;
}
