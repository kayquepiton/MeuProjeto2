#include <iostream>
#include <limits>
#include <iomanip>

using namespace std;

int main() {
    // Obtém o menor e o maior valor representável por um float.
    float menor_valor_float = numeric_limits<float>::min();
    float maior_valor_float = numeric_limits<float>::max();

    // Imprime os valores mínimo e máximo representáveis por um float.
    cout << "Menor valor representável por float: " << menor_valor_float << endl;
    cout << "Maior valor representável por float: " << maior_valor_float << endl;

    // Define o valor de pif como uma aproximação de pi com alta precisão.
    float pif = 3.14159265358979323846f;

    // Loop para ajustar a precisão de saída de pif e imprimir os valores.
    for (int i = 2; i <= 16; i *= 2) {
        cout << fixed << setprecision(i);
        cout << "Valor de pif: " << pif << endl;
    }

    // Define o valor de pid como uma aproximação de pi com precisão dupla.
    double pid = 3.14159265358979323846;

    // Configura a saída para exibir pid com alta precisão.
    cout << fixed << setprecision(70);
    cout << "Valor de pid: " << pid << endl;

    // Define o valor de lpid como uma aproximação de pi com precisão long double.
    long double lpid = 3.14159265358979323846L;

    // Configura a saída para exibir lpid com alta precisão.
    cout << fixed << setprecision(70);
    cout << "Valor de lpid: " << lpid << endl;

    return 0;
}
