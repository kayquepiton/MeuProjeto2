#include <iostream>

using namespace std;

int main() {
    // Este programa em C++ demonstra operações aritméticas e operadores de incremento/decremento.

    int i = 0, j, k;

    // Imprime o valor atual de 'i'.
    cout << "i = " << i << endl;

    // Realiza operação de adição e imprime o resultado.
    j = i + 1;    
    cout << "j = i + 1: " << j << endl;

    // Realiza operação de subtração e imprime o resultado.
    k = 7 - 1;    
    cout << "7 - 1 = " << k << endl;

    // Realiza operação de multiplicação (com operador unário) e imprime o resultado.
    i = i * -2;  
    cout << "i = i * -2 = " << i << endl;

    // Realiza operação de divisão e imprime o resultado.
    j = j / 2;    
    cout << "j = j / 2 = " << j << endl;

    // Realiza operação de resto e imprime o resultado.
    k = k % 2;    
    cout << "k = k % 2: " << k << endl;

    // Demonstração dos operadores de decremento.
    cout << "Operador de decremento: " << endl;
    cout << "i = " << i << endl;
    cout << "i--: " << i-- << endl; // Imprime o valor atual de 'i' e depois decrementa.
    cout << "i = " << i << endl;
    cout << "--i: " << --i << endl; // Decrementa 'i' e depois imprime o novo valor.
    cout << "i = " << i << endl;

    // Demonstração dos operadores de incremento.
    cout << "Operador de incremento: " << endl;
    cout << "i = " << i << endl;
    cout << "i++: " << i++ << endl; // Imprime o valor atual de 'i' e depois incrementa.
    cout << "i = " << i << endl;
    cout << "++i: " << ++i << endl; // Incrementa 'i' e depois imprime o novo valor.
    cout << "i = " << i << endl;

    // Demonstração da ordem de precedência dos operadores.
    i = ++i + 2 * --j - k / 4 + 6 % 3;
    cout << "++i + 2 * --j - k / 4 + 6 % 3 = " << i << endl;

    // Demonstração do uso de parênteses para controlar a ordem das operações.
    i = (++i + 2) * (--j - k) / ((4 + 6) % 3);
    cout << "(++i + 2) * (--j - k) / ((4 + 6) % 3) = " << i << endl;

    return 0;
}
