#include <iostream>
#include <cmath>

using namespace std;

int main() {
    double x, y;

    // Solicita ao usuário para inserir dois números de ponto flutuante
    cout << "Digite o valor de x: ";
    cin >> x;
    cout << "Digite o valor de y: ";
    cin >> y;

    // Calcula o valor da função f(x) = 5x + 2
    double resultado = 5 * x + 2;

    // Compara o valor de y com o resultado da função
    if (y < resultado) {
        cout << "O ponto (" << x << ", " << y << ") está à esquerda da curva f(x) = 5x + 2." << endl;
    } else if (y > resultado) {
        cout << "O ponto (" << x << ", " << y << ") está à direita da curva f(x) = 5x + 2." << endl;
    } else {
        cout << "O ponto (" << x << ", " << y << ") está na curva f(x) = 5x + 2." << endl;
    }

    double z = sqrt(pow(x, 2) + pow(y, 2));

    cout << "Distância Euclidiana: " << z << endl;

    return 0;
}
