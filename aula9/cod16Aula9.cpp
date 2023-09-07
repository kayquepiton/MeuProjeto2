#include <iostream>
#include <cstdlib>
#include <ctime>
#include <string>
#include <algorithm>

using namespace std;

// Função para gerar uma string aleatória com 10 caracteres minúsculos
string gerarStringAleatoria() {
    string str;
    for (int i = 0; i < 10; i++) {
        char caractere = 'a' + rand() % ('z' - 'a' + 1);
        str.push_back(caractere);
    }
    return str;
}

// Função para transformar o primeiro caractere em maiúscula
string primeiraLetraMaiuscula(string str) {
    if (!str.empty()) {
        str[0] = toupper(str[0]);
    }
    return str;
}

int main() {
    // Inicializa a semente do gerador de números aleatórios com o tempo atual
    srand(static_cast<unsigned int>(time(nullptr)));

    // Gera duas strings aleatórias
    string str1 = gerarStringAleatoria();
    string str2 = gerarStringAleatoria();

    // Transforma o primeiro caractere de cada string em maiúscula
    str1 = primeiraLetraMaiuscula(str1);
    str2 = primeiraLetraMaiuscula(str2);

    // Imprime as strings em ordem alfabética
    if (str1 < str2) {
        cout << str1 << endl;
        cout << str2 << endl;
    } else {
        cout << str2 << endl;
        cout << str1 << endl;
    }

    return 0;
}
