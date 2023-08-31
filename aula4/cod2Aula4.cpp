#include <iostream>

using namespace std;

int main(void) {

    int quantidade;
    cout << "Quantos alunos há na turma? ";
    cin >> quantidade;
    cout << "Há " << quantidade << " de alunos na turma.\n";
    cout << "O tipo short int ocupa: " << sizeof(short int) << " bytes na memória.\n";
    cout << "O tipo int ocupa: " << sizeof(int) << " bytes na memória.\n";
    cout << "O tipo long int ocupa: " << sizeof(long int) << " bytes na memória.\n";
    cout << "O tipo long long int ocupa: " << sizeof(long long int) << " bytes na memória.\n";
    cout << "O tipo short int ocupa: " << sizeof(short int) << " bytes na memória.\n";

    return 0;
}
