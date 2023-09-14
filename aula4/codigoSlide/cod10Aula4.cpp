#include <iostream>
#include <limits>
#include <iomanip>

using namespace std;

int main(void) {
    // Este programa em C++ explora tipos de dados em ponto flutuante, limites e precisão.

    float valorMaximo = numeric_limits<float>::max(); // Valor máximo para o tipo float.

    float pif = 3.141592653589793238462643383279502884197169;
    double pid = 3.141592653589793238462643383279502884197169;

    // Imprime o valor máximo de casas decimais que o tipo float pode representar.
    cout << "Valor máximo de casas decimais de float: " << valorMaximo << endl;

    // Define a precisão e formatação para imprimir 'pif' e 'pid' com casas decimais.
    cout << "Casas pif: " << fixed << setprecision(numeric_limits<float>::digits10 + 1) << pif << endl;
    cout << "Casas pid: " << fixed << setprecision(numeric_limits<double>::digits10 + 1) << pid << endl;

    return 0;
}
