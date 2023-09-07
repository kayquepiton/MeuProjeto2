#include <iostream>

using namespace std;

int main() {
    int contador = 0; // Inicializa a variável contador com 0

    while (contador <= 5) { // Enquanto contador for menor que 5
        cout << "O contador é: " << contador << endl;
        contador++; // Incrementa o contador em 1 a cada iteração
    }

    cout << "O loop while terminou." << endl;

    return 0;
}
