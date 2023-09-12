#include <iostream>

using namespace std;

void intercala_vetor(int vetor1[], int vetor2[], int n);

int main(){

    int n = 5;
    int vetor1[n], vetor2[n];
    
    for (int i = 0; i < n; i++){
        vetor1[i] = i;
        vetor2[i] = i + 100;
    }

    intercala_vetor(vetor1, vetor2, n);
    
    return 0;

}

void intercala_vetor(int vetor1[], int vetor2[], int n){

    int n_total = n * 2;
    int vetor_intercalado[n_total];

    for (int i = 0; i < n_total; i++){
        if(i < n){
            vetor_intercalado[i] = vetor1[i];
        }else{

            int meio = 0;

            if( n % 2 == 0){
                meio = (n/2) + 1;
            }else{
                meio = n/2 + 1;
            }

            vetor_intercalado[i] = vetor2[i/2];
        }
        
    }

}