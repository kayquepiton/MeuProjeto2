#include <iostream>

using namespace std;

int main(void) {

    float average;
    cout << "Qual a média do aluno? ";
    cin >> average;
    cout << "A média do aluno é: " << average << "\n";
    cout << "O tipo float ocupa: " << sizeof(float) << " bytes na memória.\n";
    cout << "O tipo double ocupa: " << sizeof(double) << " bytes na memória.\n";
    cout << "O tipo long double ocupa: " << sizeof(long double) << " bytes na memória.\n";

    return 0;
}
