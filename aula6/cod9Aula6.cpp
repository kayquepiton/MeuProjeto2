#include <iostream>
#include <string>
#include <cctype>
#include <cmath>

using namespace std;

int main() {
    int valor_i;

    // Solicita ao usuário que insira um valor a ser lido.
    cout << "Digite um valor a ser lido: ";
    cin >> valor_i;

    // Verifica se o valor está fora do intervalo de um 'short int'.
    if (valor_i > pow(2, 15) || valor_i < -pow(2, 15)) {
        cout << "O valor é maior que um 'short int' ou menor que o seu limite negativo." << endl;
    } else {
        cout << "Este valor pertence ao intervalo dos 'short int'." << endl;
    }

    return 0;
}
