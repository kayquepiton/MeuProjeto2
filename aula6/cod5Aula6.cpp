#include <iostream>
#include <limits>
#include <iomanip>

using namespace std;

int main() {

    float menor_valor_float = std::numeric_limits<float>::min();
    float maior_valor_float = std::numeric_limits<float>::max();

    cout << "Menor valor representável por int: " << menor_valor_float << endl;
    cout << "Maior valor representável por int: " << maior_valor_float << endl;

    float pif = 3.14159265358979323846f;

    cout << std::fixed << std::setprecision(20);

    cout << "Valor de pif: " << pif << endl;

    return 0;

}
