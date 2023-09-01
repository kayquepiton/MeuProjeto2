#include <iostream>

using namespace std;

int main() {
    // Loop de '0' a '9'
    for (char c = '0'; c <= '9'; ++c) {
        // Imprime o caractere como caractere
        cout << "Caractere: " << c;

        // Imprime o caractere como número usando static_cast
        int valor_numerico = static_cast<int>(c);
        cout << " (Valor numérico: " << valor_numerico << ")\n";
    }

    return 0;
}
