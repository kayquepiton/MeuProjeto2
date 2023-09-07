#include <iostream>
#include <string>
#include <vector>
#include <ctime>
#include <cstdlib>
#include <algorithm>

using namespace std;

// Função para gerar uma string aleatória de tamanho fixo
string gerarStringAleatoria(int tamanho) {
    string alfabeto = "abcdefghijklmnopqrstuvwxyz";
    string resultado;

    for (int i = 0; i < tamanho; i++) {
        char caractere = alfabeto[rand() % alfabeto.size()];
        resultado.push_back(caractere);
    }

    return resultado;
}

// Função para converter o primeiro caractere de uma string para maiúscula
string primeiraMaiuscula(string str) {
    if (!str.empty()) {
        str[0] = toupper(str[0]);
    }
    return str;
}

int main() {
    // Inicializa a semente do gerador de números aleatórios com o tempo atual
    srand(static_cast<unsigned int>(time(nullptr)));

    vector<string> listaDeStrings;

    // Gerar 10 strings aleatórias
    for (int i = 0; i < 10; i++) {
        string str = gerarStringAleatoria(10); // Gera uma string de 10 caracteres
        listaDeStrings.push_back(str);
    }

    // Substituir o primeiro caractere de cada string por maiúscula
    for (string &str : listaDeStrings) {
        str = primeiraMaiuscula(str);
    }

    // Ordenar a lista de strings em ordem alfabética
    sort(listaDeStrings.begin(), listaDeStrings.end());

    // Imprimir as strings em ordem alfabética
    for (const string &str : listaDeStrings) {
        cout << str << endl;
    }

    return 0;
}
