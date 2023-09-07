#include <iostream>
#include <limits>

using namespace std;

int main() {
    // Encontrando os limites de representação para int e unsigned long int.
    int menor_valor_int = std::numeric_limits<int>::min(); // Menor valor representável por int
    int maior_valor_int = std::numeric_limits<int>::max(); // Maior valor representável por int

    unsigned long int uli = std::numeric_limits<unsigned long int>::max(); // Maior valor representável por unsigned long int

    // Imprimindo os valores encontrados.
    cout << "Menor valor representável por int: " << menor_valor_int << endl;
    cout << "Maior valor representável por int: " << maior_valor_int << endl;
    cout << "Maior valor representável por unsigned long int: " << uli << endl;

    return 0;
}
