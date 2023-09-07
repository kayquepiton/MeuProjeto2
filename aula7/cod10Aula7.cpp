#include <iostream>

using namespace std;

int main() {
    int numero;

    cout << "Digite um número para calcular a tabuada: ";
    cin >> numero;

    cout << "Tabuada de " << numero << ":" << endl;

    for (int i = 1; i <= 10; i++) {
        int resultado = numero * i;
        cout << numero << " x " << i << " = " << resultado << endl;
    }

    return 0;
}
