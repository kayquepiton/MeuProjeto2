#include <iostream>
#include <limits>
#include <iomanip>

using namespace std;

int main() {

    float menor_valor_float = numeric_limits<float>::min();
    float maior_valor_float = numeric_limits<float>::max();

    cout << "Menor valor representável por int: " << menor_valor_float << endl;
    cout << "Maior valor representável por int: " << maior_valor_float << endl;

    float pif = 3.14159265358979323846f;

    for(int i = 2; i <= 16; i *= 2){
        cout << fixed << setprecision(i);
        cout << "Valor de pif: " << pif << endl;
    }

    double pid = 3.14159265358979323846L;
    cout << fixed << setprecision(70);
    cout << "Valor de pid: " << pid << endl;

    long double lpid = 3.14159265358979323846L;
    cout << fixed << setprecision(70);
    cout << "Valor de lpid: " << lpid << endl;

    return 0;

}
