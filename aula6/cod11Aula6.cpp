#include <iostream>

using namespace std;

int main() {
    int informacaoGenetica;
    
    // Solicita ao usuário a entrada da informação genética da planta como um caractere sem sinal
    cout << "Digite a informação genética da planta (um valor entre 0 e 255): ";
    cin >> informacaoGenetica;
    
    // Inicialização de uma variável para contar os genes presentes
    int genesPresentes = 0;
    
    // Contagem dos genes presentes usando operadores bit a bit
    for (int i = 0; i < 8; i++) {
        if (informacaoGenetica & (1 << i)) {
            genesPresentes++;
        }
    }
    
    // Exibe o número de genes presentes na planta
    cout << "Número de genes presentes na planta: " << genesPresentes << endl;
    
    // Solicita ao usuário a entrada do número do gene desejado para verificar sua presença
    int geneDesejado;
    cout << "Digite o número do gene que você deseja verificar (1 a 8): ";
    cin >> geneDesejado;
    
    // Verifica se o número do gene desejado é válido (entre 1 e 8)
    if (geneDesejado >= 1 && geneDesejado <= 8) {
        // Verifica se o gene desejado está presente na planta usando operadores bit a bit
        if (informacaoGenetica & (1 << (geneDesejado - 1))) {
            cout << "O gene " << geneDesejado << " está presente na planta." << endl;
        } else {
            cout << "O gene " << geneDesejado << " não está presente na planta." << endl;
        }
    } else {
        cout << "Número de gene inválido. Deve ser um valor entre 1 e 8." << endl;
    }
    
    return 0;
}
