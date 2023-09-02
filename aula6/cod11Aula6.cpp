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
        if ((infoGenetica & (1 << i)) != 0) {
            genesPresentes++;
        }
    }

    // Imprima a quantidade de genes presentes
    cout << "Número de genes presentes nesta planta: " << genesPresentes << endl;

    
    return 0;
}
