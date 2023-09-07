#include <iostream>

using namespace std;

int main() {
    char continuar; // Variável para armazenar a escolha do usuário

    do {
        int numero; // Variável para armazenar o número inserido pelo usuário
        
        // Solicita ao usuário que digite um número
        cout << "Digite um número positivo ou negativo (para sair, digite 's'): ";
        cin >> numero;

        if (numero < 0) {
            cout << "Você digitou um número negativo. Saindo do loop." << endl;
            break; // Sai do loop se o número for negativo
        }

        // Faça algo com o número positivo aqui (você pode adicionar seu código aqui)

        // Pergunta se o usuário deseja continuar
        cout << "Deseja continuar? (s/n): ";
        cin >> continuar;

    } while (continuar == 's' || continuar == 'S'); // Continua enquanto o usuário digitar 's' ou 'S'

    cout << "Programa encerrado." << endl;

    return 0;
}
