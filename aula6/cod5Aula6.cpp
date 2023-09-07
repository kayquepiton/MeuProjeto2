#include <iostream>
#include <limits>
#include <iomanip>

using namespace std;

int main() {
    // Obtém o menor e o maior valor representável por um float.
    float menor_valor_float = std::numeric_limits<float>::min();
    float maior_valor_float = std::numeric_limits<float>::max();

    // Imprime os valores mínimo e máximo representáveis por um float.
    cout << "Menor valor representável por float: " << menor_valor_float << endl;
    cout << "Maior valor representável por float: " << maior_valor_float << endl;

    // Define o valor de pif como uma aproximação de pi com alta precisão.
    float pif = 3.14159265358979323846f;

    // Configura a saída para exibir pif com alta precisão.
    cout << std::fixed << std::setprecision(20);

    // Imprime o valor de pif com alta precisão.
    cout << "Valor de pif (pi): " << pif << endl;

    return 0;
}
