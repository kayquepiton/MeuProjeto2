#include <iostream>
#include <string>

using namespace std;

int main() {
    // Declaração e inicialização das variáveis de entrada
    int numero1 = 5;
    int numero2 = 3;

    // Verificar se o segundo número é zero para evitar divisão por zero
    if (numero2 == 0) {
        cerr << "Erro: Divisão por zero não é permitida." << endl;
        return 1; // Sair do programa com código de erro
    }

    // Realizar cálculos
    int soma = numero1 + numero2;
    int subtracao = numero1 - numero2;
    int multiplicacao = numero1 * numero2;
    float divisao = static_cast<float>(numero1) / numero2; // Converter um dos operandos para float
    int resto = numero1 % numero2;

    // Exibir resultados
    cout << "Soma = " << soma << endl;
    cout << "Subtração = " << subtracao << endl;
    cout << "Multiplicação = " << multiplicacao << endl;
    cout << "Divisão = " << divisao << endl;
    cout << "Resto = " << resto << endl;

    return 0;
}
