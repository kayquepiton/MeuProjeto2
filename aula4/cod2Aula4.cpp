#include <iostream>

using namespace std;

int main(void) {
    // Este programa em C++ demonstra o uso de diferentes tipos de dados inteiros e seus tamanhos.

    int quantidade;
    
    // Solicita ao usuário o número de alunos na turma e armazena na variável 'quantidade'.
    cout << "Quantos alunos há na turma? ";
    cin >> quantidade;

    // Imprime a quantidade de alunos na turma.
    cout << "Há " << quantidade << " alunos na turma." << endl;

    // Imprime os tamanhos em bytes dos diferentes tipos de dados inteiros.
    cout << "O tipo short int ocupa: " << sizeof(short int) << " bytes na memória." << endl;
    cout << "O tipo int ocupa: " << sizeof(int) << " bytes na memória." << endl;
    cout << "O tipo long int ocupa: " << sizeof(long int) << " bytes na memória." << endl;
    cout << "O tipo long long int ocupa: " << sizeof(long long int) << " bytes na memória." << endl;
    cout << "O tipo short int ocupa: " << sizeof(short int) << " bytes na memória." << endl;

    return 0;
}
