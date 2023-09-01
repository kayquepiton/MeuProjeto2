#include <iostream>
#include <limits>

using namespace std;

int main() {
    int menor_valor_int = std::numeric_limits<int>::min();
    int maior_valor_int = std::numeric_limits<int>::max();

    unsigned long int uli = std::numeric_limits<unsigned long int>::max();

    cout << "Menor valor representável por int: " << menor_valor_int << endl;
    cout << "Maior valor representável por int: " << maior_valor_int << endl;
    cout << "Maior valor representável por unsigned long int: " << uli << endl;

    return 0;
}
