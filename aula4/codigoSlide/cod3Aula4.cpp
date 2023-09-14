#include <iostream>

using namespace std;

int main(void) {
    // Este programa em C++ demonstra o uso de diferentes tipos de dados em ponto flutuante e seus tamanhos.

    float average;
    
    // Solicita ao usuário a média do aluno e armazena na variável 'average'.
    cout << "Qual a média do aluno? ";
    cin >> average;

    // Imprime a média do aluno.
    cout << "A média do aluno é: " << average << "\n";

    // Imprime os tamanhos em bytes dos diferentes tipos de dados em ponto flutuante.
    cout << "O tipo float ocupa: " << sizeof(float) << " bytes na memória." << endl;
    cout << "O tipo double ocupa: " << sizeof(double) << " bytes na memória." << endl;
    cout << "O tipo long double ocupa: " << sizeof(long double) << " bytes na memória." << endl;

    return 0;
}
