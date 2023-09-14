#include <iostream>

using namespace std;

int main() {
    // Este programa em C++ demonstra o uso de variáveis do tipo 'char'.

    char letra = 'a'; // Inicialização da variável 'letra' com o caractere 'a'.

    // Imprime o valor da letra e o valor numérico correspondente.
    cout << "A letra '" << letra << "' corresponde ao valor " << int(letra) << endl;

    // Imprime o tamanho em bytes do tipo 'char' na memória.
    cout << "O tipo 'char' ocupa " << sizeof(char) << " bytes na memória." << endl;

    return 0;
}
