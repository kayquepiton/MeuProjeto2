#include <iostream>

using namespace std;

void ondena(float valor1, float valor2, float valor3, float valor4);

int main(){

    int n = 4;
    float vetor[n];

    for (int i = 0; i < n; i++){
        vetor[i] = n - i;
    }

    ondena(vetor[0], vetor[1], vetor[2], vetor[3]);
    
    
    return 0;

}

void ondena(float valor1, float valor2, float valor3, float valor4){
    
    float vetor[4];

    vetor[0] = valor1;
    vetor[1] = valor2;
    vetor[2] = valor3;
    vetor[3] = valor4;

    for (int i = 0; i < 4; i++){
        for (int j = i+1; j < 4; j++){
            float aux = 0;
            if (vetor [j] < vetor[i]){
                aux = vetor[i];
                vetor[i] = vetor[j];
                vetor[j] = aux;
            }
        }
    }

    for (int i = 0; i < 4; i++){
        cout << "vet [" << i << "]" << vetor[i] << endl;
    }
    

}