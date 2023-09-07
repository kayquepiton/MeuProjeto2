#include <iostream>
#include <vector>
#include <cstdlib>
#include <ctime>

using namespace std;

const int larguraImagem = 640;
const int alturaImagem = 480;

// Função para gerar um valor inteiro aleatório no intervalo de 0 a 255
int gerarValorAleatorio() {
    return rand() % 256;
}

// Função para criar o histograma da imagem
vector<int> criarHistograma(const vector<vector<int>>& imagem) {
    vector<int> histograma(256, 0);  // Inicializa o histograma com zeros para cada valor de intensidade

    for (int y = 0; y < alturaImagem; y++) {
        for (int x = 0; x < larguraImagem; x++) {
            int intensidade = imagem[y][x];
            histograma[intensidade]++;  // Incrementa a contagem para a intensidade atual
        }
    }

    return histograma;
}

int main() {
    // Inicializa a semente do gerador de números aleatórios com o tempo atual
    srand(static_cast<unsigned int>(time(nullptr)));

    // Crie uma matriz para representar a imagem
    vector<vector<int>> imagem(alturaImagem, vector<int>(larguraImagem));

    // Preencha a matriz com valores aleatórios de intensidade
    for (int y = 0; y < alturaImagem; y++) {
        for (int x = 0; x < larguraImagem; x++) {
            imagem[y][x] = gerarValorAleatorio();
        }
    }

    // Crie o histograma da imagem
    vector<int> histograma = criarHistograma(imagem);

    // Exiba o histograma
    for (int i = 0; i < 256; i++) {
        cout << "Intensidade " << i << ": " << histograma[i] << " pixels" << endl;
    }

    return 0;
}
