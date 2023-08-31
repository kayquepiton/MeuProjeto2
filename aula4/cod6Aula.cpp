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
    double val = 1.0/3.0;
    long double erro = 1.0/1234556789.0;
    cout << "O valor de val é: " << val << "\n";
    cout << "O valor de erro é: " << erro << "\n";
    double val = 0.33333;   //O literal é um double
    val = 33333e-5;  //Notação ciêntifica
    float average = 7.3f;  //O literal é um float
    double erro = 0.12345L; //O literal long double

    return 0;
}
