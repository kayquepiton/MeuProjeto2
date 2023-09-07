#include <iostream>
#include <limits>

using namespace std;

int main() {
    unsigned long int uli = std::numeric_limits<unsigned long int>::max(); // Maior valor representável por unsigned long int
    long int li; // Variável do tipo long int

    // Atribuindo o valor de uli a li
    // Há perda de dados ao atribuir o valor de uli a li, pois li não comporta o valor de uli
    li = uli;

    // Tentando atribuir o valor de li de volta a uli
    uli = li;

    // Imprimindo os valores
    cout << "Valor original de uli: " << std::numeric_limits<unsigned long int>::max() << endl;
    cout << "Valor de li: " << li << endl;
    cout << "Valor de uli após a atribuição de li: " << uli << endl;

    long int menor_valor_long_int = std::numeric_limits<long int>::min(); // Menor valor representável por long int
    long int maior_valor_long_int = std::numeric_limits<long int>::max(); // Maior valor representável por long int

    cout << "Menor valor representável por long int: " << menor_valor_long_int << endl;
    cout << "Maior valor representável por long int: " << maior_valor_long_int << endl;

    return 0;
}
