#include <iostream>

using namespace std;

int main(){

    int i = 0, j, k;
    cout << "i = " << i << endl;
    j = i + 1;    //Operação de adição
    cout << "j = i + 1" << j << endl;
    k = 7 - 1;    //Operador de subtração
    cout << "7 - i = " << k << endl;
    i = i * - 2;  //Operador de multiplicação, operador unário
    cout << "i = i * -2 = " << i << endl;
    j = j / 2;    //Operador de divisão
    cout << "j = j / 2 = " << j << endl;
    k = k % 2;    //Operador de resto
    cout << "k = k % 2" << k << endl;
    cout << "Operador de decremento: " << endl;
    cout << "i = " << i << endl;
    cout << "i--" << i-- << endl;
    cout << "i = " << i << endl;
    cout << "--i" << --i << endl;
    cout << "i = " << i << endl;
    cout << "Operador de incremento: " << endl;
    cout << "i = " << i << endl;
    cout << "i++" << i++ << endl;
    cout << "i = " << i << endl;
    cout << "++i" << ++i << endl;
    cout << "i = " << i << endl;
    i = ++i + 2 * --j - k / 4 + 6 % 3; // Ordem de precedênciados operadores
    cout << "++i + 2 * --j - k / 4 + 6 % 3" << i << endl;
    i = (++i + 2) * (--j - k) / ((4 + 6) % 3); // Utilizando parênteses
    cout << "(++i + 2) * (--j - k) / ((4 + 6) % 3) = " << i << endl;
    
    return 0;
}