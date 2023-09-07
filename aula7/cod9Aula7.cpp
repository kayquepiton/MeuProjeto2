#include <iostream>

using namespace std;

int main() {
    int numero;
    int soma = 0; // Variável para rastrear a soma

    cout << "Digite uma sequência de números (insira 0 para sair):" << endl;

    while (true) {
        cin >> numero;

        if (numero == 0) {
            cout << "Você inseriu 0. Saindo do loop." << endl;
            break; // Sai do loop se o número for 0
        }

        soma += numero; // Adiciona o número à soma
    }

    cout << "A soma total dos números inseridos é: " << soma << endl;

    return 0;
}
