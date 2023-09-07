#include <iostream>
#include <string>
#include <cctype>

using namespace std;

int main() {
    int a, b, c = 0;

    // Solicita ao usuário que insira o valor de 'a'.
    cout << "Entre com o valor de a: ";
    cin >> a;

    // Solicita ao usuário que insira o valor de 'b'.
    cout << "Entre com o valor de b: ";
    cin >> b;

    // Calcula a soma de 'a' e 'b' e armazena em 'c'.
    c = a + b;

    // Imprime o valor de 'c' em hexadecimal.
    cout << "Valor de c em hexadecimal: " << hex << c << endl;

    // Calcula o produto de 'a' e 'b' e atualiza 'c'.
    c = a * b;

    // Imprime o valor de 'c' em decimal.
    cout << "Valor de c + a * b: " << dec << c << endl;

    // Calcula o módulo da diferença entre 'a' e 'b' usando abs() e atualiza 'c'.
    c = abs(a - b);

    // Imprime o valor do módulo da diferença entre 'a' e 'b' em decimal.
    cout << "Módulo da diferença entre a e b: " << dec << c << endl;

    if (b > 0) {
        // Calcula o quociente entre 'a' e 'b' e atualiza 'c'.
        c = a / b;

        // Imprime o valor do quociente entre 'a' e 'b' em decimal.
        cout << "Valor do quociente entre a e b: " << dec << c << endl;

        float resto = a % b;

        if (resto == 0) {
            // Verifica se a divisão é exata e exibe a mensagem apropriada.
            cout << "Divisão exata" << endl;
        } else {
            // Imprime o valor do resto da divisão.
            cout << "Resto da divisão: " << resto << endl;
        }
    } else {
        // Se 'b' for igual a zero, imprime que a divisão não é possível.
        cout << "Não é possível realizar a divisão." << endl;
    }

    return 0;
}
