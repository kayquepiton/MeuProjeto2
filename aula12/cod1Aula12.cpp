#include <iostream>

using namespace std;

void maxmin(int vetor[], int n, int &maximo, int &minimo);

int main(){

    int n = 100;
    int vetor[n];
    int maximo = 0, minimo = 0;
    
    for (int i = 0; i < n; i++){
        vetor[i] = i;
    }

    maxmin(vetor, n, maximo, minimo);
    
    
    return 0;

}

void maxmin(int vetor[], int n, int &maximo, int &minimo){

    for (int i = 1; i < n; i++) {
        if (vetor[i] > maximo) {
            maximo = vetor[i];
        }
        if (vetor[i] < minimo) {
            minimo = vetor[i];
        }
    }

    cout << "Maior valor: " << maximo << endl;
    cout << "Menor valor: " << minimo << endl;

}