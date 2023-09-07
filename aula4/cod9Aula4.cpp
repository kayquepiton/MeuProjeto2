#include <iostream>

using namespace std;

int valorGlobal = 10; // Variável global

int main(void) {
    // Este programa em C++ explora variáveis globais e locais.

    int valorLocal = 20; // Variável local
    cout << "Valor local: " << valorLocal << endl;

    // cout e endl são nomes do namespace std
    cout  << "Valor global: " << valorGlobal << endl;

    return 0;
}
