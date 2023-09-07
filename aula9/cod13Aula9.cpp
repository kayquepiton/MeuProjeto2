#include <iostream>
#include <cstdlib>  // Para a função rand()
#include <ctime>    // Para a função time()

using namespace std;

int main() {
    srand(time(0)); // Inicializa a semente de números aleatórios com o tempo atual

    const int MAX = 250; // Tamanho máximo do vetor
    float numeros[MAX];  // Vetor com o tamanho máximo

    int tamanho = rand() % MAX + 1; // Gere um tamanho aleatório até MAX (de 1 a 250)

    for (int i = 0; i < tamanho; i++) {
        numeros[i] = 10.0f + 30.0f * (rand() % 100) / 100.0f;
    }

    if (tamanho == 0) {
        cout << "O array está vazio." << endl;
        return 1;
    }

    float maximo = numeros[0];
    float minimo = numeros[0];
    float soma = numeros[0];

    for (int i = 1; i < tamanho; i++) {
        if (numeros[i] > maximo) {
            maximo = numeros[i];
        }

        if (numeros[i] < minimo) {
            minimo = numeros[i];
        }

        soma += numeros[i];
    }

    float media = soma / tamanho;

    cout << "Temperatura das " << MAX << " estações: ";
    
    for (int i = 0; i < tamanho; i++) {
        cout << numeros[i] << " ";
    }

    cout << endl;

    cout << endl;

    cout << "Valor máximo: " << maximo << endl;
    cout << "Valor mínimo: " << minimo << endl;
    cout << "Média: " << media << endl;

    cout << endl;

    for (int i = 0; i < tamanho; i++) {
        if (numeros[i] > media){
            numeros[i]++;  
        }else{
            numeros[i] -= 2;
        }
    }


    cout << "Temperatura das " << MAX << " estações reajustada: ";
    
    for (int i = 0; i < tamanho; i++) {
        cout << numeros[i] << " ";
    }

    return 0;
}
