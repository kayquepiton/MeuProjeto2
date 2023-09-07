#include <iostream>

using namespace std;

int main() {
    int contador = 0; // Inicializa a variável contador com 0

    do {
        cout << "O contador é: " << contador << endl;
        contador++; // Incrementa o contador em 1 a cada iteração
    } while (contador <= 5); // Verifica a condição no final

    cout << "O loop do-while terminou." << endl;

    return 0;
}
