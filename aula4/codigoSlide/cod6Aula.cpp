#include <iostream>

using namespace std;

int main(void) {
    // Este programa em C++ explora diferentes tipos de dados em ponto flutuante e seus tamanhos.

    // Solicita ao usuário a média do aluno e armazena em 'average'.
    float average;
    cout << "Qual a média do aluno? ";
    cin >> average;

    // Imprime a média do aluno.
    cout << "A média do aluno é: " << average << "\n";

    // Imprime os tamanhos em bytes dos tipos de dados em ponto flutuante.
    cout << "O tipo float ocupa: " << sizeof(float) << " bytes na memória." << endl;
    cout << "O tipo double ocupa: " << sizeof(double) << " bytes na memória." << endl;
    cout << "O tipo long double ocupa: " << sizeof(long double) << " bytes na memória." << endl;

    // Declara e inicializa variáveis 'val' e 'erro'.
    double val = 1.0 / 3.0;
    long double erro = 1.0 / 1234556789.0;

    // Imprime os valores de 'val' e 'erro'.
    cout << "O valor de val é: " << val << "\n";
    cout << "O valor de erro é: " << erro << "\n";

    // Declara e inicializa novas variáveis 'val' e 'erro'.
    double val2 = 0.33333;   // O literal é um double
    val2 = 33333e-5;         // Notação científica
    float average2 = 7.3f;   // O literal é um float
    double erro2 = 0.12345L; // O literal é long double

    return 0;
}
