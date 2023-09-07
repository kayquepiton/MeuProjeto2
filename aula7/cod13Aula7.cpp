#include <iostream>
#include <cmath>

using namespace std;

int main() {
    double principal = 1000.0;  // Quantia investida originalmente
    double taxaDeJuros = 0.05;  // Taxa de juros anual (5%)
    
    cout << "Ano\tQuantia na Conta" << endl;

    for (int ano = 1; ano <= 10; ano++) {
        double quantia = principal * pow(1 + taxaDeJuros, ano);
        cout << ano << "\t" << quantia << " reais" << endl;
    }

    return 0;
}
