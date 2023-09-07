#include <iostream>

using namespace std;

int main() {
    int numero;

    // Solicita ao usuário que digite um número entre 1 e 10
    cout << "Digite um número entre 1 e 10: ";
    cin >> numero;

    char nota;

    // Verifica o número e atribui uma nota de "A" a "F"
    if (numero >= 9 && numero <= 10) {
        nota = 'A';
    } else if (numero >= 7) {
        nota = 'B';
    } else if (numero >= 5) {
        nota = 'C';
    } else if (numero >= 3) {
        nota = 'D';
    } else if (numero >= 0 && numero <= 3) {
        nota = 'F';
    } else {
        cout << "Número fora do intervalo válido." << endl;
        return 1; // Encerra o programa com código de erro
    }

    cout << "Nota: " << nota << endl;

    return 0;
}
