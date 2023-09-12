#include <iostream>

using namespace std;

void insere_meio(int vetor[], int n, int valor);

int main(){

    int n = 5;
    int vetor[n];
    int valor = 1000000;
    //cout << "Entre com o valor: ";
    //cin >> valor;
    
    for (int i = 0; i < n; i++){
        vetor[i] = i;
    }

    insere_meio(vetor, n, valor);
    
    return 0;

}

void insere_meio(int vetor[], int n, int valor){

    int meio = 0;

    if( n % 2 == 0){
        meio = (n/2) - 1;
    }else{
        meio = n/2;
    }
    
    vetor[meio] = valor;

    for (int i = 0; i < n; i++){
        cout << "vet [" << i << "]" << vetor[i] << endl;
    }
    

}