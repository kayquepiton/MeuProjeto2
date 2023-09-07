#include <iostream>
#include <iomanip>

#define NLIN 5 // 5 alunos
#define NCOL 3 // 3 notas por aluno

using namespace std;

int main() {
    
    float notas [NLIN][NCOL] = {{5.3, 8.3, 7.1},
                                {4.2, 6.8, 7.3},
                                {6.0, 5.4, 1.0},
                                {9.7, 10.0, 9.6},
                                {2.1, 5.8, 7.9}};

    float mediaAluno[NLIN] = {0.0}, mediaAvaliacao[NCOL] = {0.0};

    cout << fixed;
    cout << setprecision(1);

    for (int i = 0; i < NLIN; i++){
        cout << "Nota do aluno " <<  i+1 << ": ";
        for (int j = 0; j < NCOL; j++){
            cout << notas[i][j] << "\t";
            mediaAluno[i] += notas[i][j]; 
            mediaAvaliacao[i] += notas[i][j];
        }
        mediaAluno[i] /= NCOL;
        cout << "Media do aluno " << i+1 << ": " << mediaAluno[i] << endl;
    }

    cout << endl;

    for (int j = 0; j < NCOL; j++){
        mediaAluno[j] /= NLIN;
        cout << "Media da turma na avaliação "<< j+1 << ": " << mediaAvaliacao[j] << endl;
    }

    return 0;

}
