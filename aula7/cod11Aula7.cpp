#include <iostream>

using namespace std;

int main() {
    char conceito;
    int contadorA = 0, contadorB = 0, contadorC = 0, contadorD = 0, contadorF = 0;
    char continuar;
    do {
        cout << "Digite o conceito (A, B, C, D ou F): ";
        cin >> conceito;

        // Verifica o conceito inserido e atualiza o contador apropriado
        switch (conceito) {
            case 'A':
                contadorA++;
                break;
            case 'B':
                contadorB++;
                break;
            case 'C':
                contadorC++;
                break;
            case 'D':
                contadorD++;
                break;
            case 'F':
                contadorF++;
                break;
            default:
                cout << "Conceito inválido. Tente novamente." << endl;
                break;
        }

        
        cout << "Deseja continuar? (S para sim, qualquer outra tecla para sair): ";
        cin >> continuar;
    } while (continuar == 'S' || continuar == 's');

    // Exibe a quantidade de alunos para cada conceito
    cout << "Relatório de notas dos alunos:" << endl;
    cout << "A: " << contadorA << " aluno(s)" << endl;
    cout << "B: " << contadorB << " aluno(s)" << endl;
    cout << "C: " << contadorC << " aluno(s)" << endl;
    cout << "D: " << contadorD << " aluno(s)" << endl;
    cout << "F: " << contadorF << " aluno(s)" << endl;

    return 0;
}
