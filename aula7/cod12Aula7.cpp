#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int main() {
    // Inicializa o gerador de números aleatórios com uma semente baseada no tempo atual
    srand(time(0));

    // Gera um número aleatório entre 1 e 1000
    int numeroSorteado = rand() % 1000 + 1;

    int tentativas = 0;
    int palpite;

    cout << "Bem-vindo ao jogo de adivinhação!" << endl;
    cout << "Tente adivinhar o número entre 1 e 1000." << endl;

    while (tentativas < 5) {
        cout << "Tentativa " << tentativas + 1 << ": Digite seu palpite: ";
        cin >> palpite;

        if (palpite < 1 || palpite > 1000) {
            cout << "Por favor, digite um número entre 1 e 1000." << endl;
            continue;
        }

        if (palpite < numeroSorteado) {
            cout << "Tente um número maior." << endl;
        } else if (palpite > numeroSorteado) {
            cout << "Tente um número menor." << endl;
        } else {
            cout << "Parabéns! Você acertou o número " << numeroSorteado << " em " << tentativas + 1 << " tentativas." << endl;
            break;
        }

        tentativas++;
    }

    if (tentativas >= 5) {
        cout << "Você excedeu o número máximo de tentativas. O número correto era " << numeroSorteado << "." << endl;
    }

    return 0;
}
