#include <iostream>

using namespace std;

int main() {
    double num1, num2;
    char operacao;

    // Solicita ao usuário que insira dois números
    cout << "Digite o primeiro número: ";
    cin >> num1;
    cout << "Digite o segundo número: ";
    cin >> num2;

    // Solicita ao usuário que escolha uma operação
    cout << "Escolha uma operação: + (adição), - (subtração), * (multiplicação), / (divisão): ";
    cin >> operacao;

    double resultado;

    // Realiza a operação com base na escolha do usuário
    switch (operacao) {
        case '+':
            resultado = num1 + num2;
            break;
        case '-':
            resultado = num1 - num2;
            break;
        case '*':
            resultado = num1 * num2;
            break;
        case '/':
            if (num2 != 0) {
                resultado = num1 / num2;
            } else {
                cout << "Erro: Divisão por zero." << endl;
                return 1; // Encerra o programa com código de erro
            }
            break;
        default:
            cout << "Operação inválida." << endl;
            return 1; // Encerra o programa com código de erro
    }

    cout << "Resultado da operação: " << resultado << endl;

    return 0;
}
