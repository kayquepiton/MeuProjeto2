#include <iostream>
#include <random>

using namespace std;

int main() {
    
    int numero_aletaorio = 1 + rand() % 20;
    cout << "Número aletório: " << numero_aletaorio << endl;

    int vetor_aleatorio[100];
    int MAX = 20;
    int vetor_aleatorio2[MAX];
    int repetidos = 0;
    int controle = 0;

    // Gera um vetor de 100 números pseudoaleatorios entre 1 e 20
    for(int i = 0; i < 100; i++){
        vetor_aleatorio[i] = 1 + rand() % 20;
    }

    // Faz um copida de 20 elementos do vetor de 100 números pseudoaleatorios entre 1 e 20

    cout << "Números gerados: ";
    
    for(int i = 0; i < MAX; i++){
        vetor_aleatorio2[i] = vetor_aleatorio[i];
        cout << vetor_aleatorio[i] << " ";
    }

    cout << endl;

    // Verifica os número aleatórios repetidos comparando o vetor orignal e o vetor copia
    for(int i = 0; i < MAX; i++){
        for(int j = i+1; j < MAX; j++){
            if(vetor_aleatorio[i] == vetor_aleatorio2[j]){
                controle++;
                repetidos++;
                vetor_aleatorio2[j] = ' ';
                if (controle == 1){
                    repetidos++;
                }
            }
        }

        if (controle > 0){
            controle++;
            cout << "Repetições do número "<< vetor_aleatorio[i] << ": " << controle << endl;
        }
        
        controle = 0;
    }

    cout << "Quantidade de número repetivos: " << repetidos << endl;

    return 0;

}
