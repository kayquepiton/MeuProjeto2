#include <iostream>
#include <string>

using namespace std;

int main(void) {
    // Este programa em C++ solicita a idade do usuário e a imprime.

    int idade;

    // Solicita a idade do usuário e armazena na variável 'idade'.
    cout << "Qual a sua idade? ";
    cin >> idade;

    // Imprime a idade do usuário.
    cout << "Você tem " << idade << " anos." << endl;

    return 0;
}
