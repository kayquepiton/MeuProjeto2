#include <iostream>

using namespace std;

int main() {
    // Leia a informação genética de uma planta na forma de um unsigned char
    unsigned char infoGenetica;
    cout << "Digite a informação genética da planta (um número de 0 a 255): ";
    cin >> infoGenetica;

    // Utilize operadores bit a bit para identificar quantos genes estão presentes
    int genesPresentes = 0;
    for (int i = 0; i < 8; i++) {
        // Verifica cada bit individualmente
        if ((infoGenetica & (1 << i)) != 0) {
            genesPresentes++;
        }
    }

    // Imprima a quantidade de genes presentes
    cout << "Número de genes presentes nesta planta: " << genesPresentes << endl;

    /*// Solicite do usuário qual gene específico ele quer informações
    int geneDesejado;
    cout << "Digite o número do gene que você deseja verificar (1 a 8): ";
    cin >> geneDesejado;

    // Verifique se o gene específico está presente
    if (geneDesejado >= 1 && geneDesejado <= 8) {
        // Desloca o bit apropriado para verificar a presença do gene
        bool presente = ((infoGenetica & (1 << (geneDesejado - 1))) != 0);
        if (presente) {
            cout << "O gene " << geneDesejado << " está presente nesta planta." << endl;
        } else {
            cout << "O gene " << geneDesejado << " não está presente nesta planta." << endl;
        }
    } else {
        cout << "Número de gene inválido. Deve ser entre 1 e 8." << endl;
    }*/

    return 0;
}
