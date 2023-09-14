#include <iostream>
#include <string>

using namespace std;

int main(void) {
    // Este é um programa simples em C++ que solicita ao usuário seu nome e ano de nascimento.

    string nome;
    int ano_nascimento;

    // Solicite o nome do usuário e armazene-o na variável 'nome'.
    cout << "Digite seu nome: ";
    cin >> nome;

    // Cumprimente o usuário com base no nome fornecido.
    cout << "Bom dia, " << nome << ". Tenha um bom curso." << endl;

    // Solicite o ano de nascimento e calcule a idade aproximada.
    cout << "Você nasceu em que ano? ";
    cin >> ano_nascimento;
    cout << "Considerando que estamos em 2023, ou você tem ";
    cout << 2023 - ano_nascimento;
    cout << " ou está próximo de fazer." << endl;

    return 0;
}
