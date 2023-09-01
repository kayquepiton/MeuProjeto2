#include <iostream>
#include <limits>

using namespace std;

int main() {
    unsigned long int uli = std::numeric_limits<unsigned long int>::max(); // Maior valor representável por unsigned long int
    long int li; // Variável de tipo long int

    // Atribuir o valor de uli a li
    // Há perda de dados ao atribuir o valor de uli a li, por li não comportar o valor de uli
    li = uli;

    // Tentar atribuir o valor de li de volta a uli
    uli = li;

    // Imprimir os valores
    cout << "Valor original de uli: " << std::numeric_limits<unsigned long int>::max() << endl;
    cout << "Valor de li: " << li << endl;
    cout << "Valor de uli após a atribuição de li: " << uli << endl;

    long int menor_valor_long_int = std::numeric_limits<long int>::min();
    long int maior_valor_long_int = std::numeric_limits<long int>::max();

    cout << "Menor valor representável por long int: " << menor_valor_long_int << endl;
    cout << "Maior valor representável por long int: " << maior_valor_long_int << endl;

    return 0;
}
