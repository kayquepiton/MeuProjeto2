#include <iostream>
#include <string>

using namespace std;

int main(void){

    string nome;
    int ano_nascimento;

    cout << "Digite seu nome: ";
    cin >> nome;
    cout << "Bom dia, " << nome << "Tenha um bom curso" << endl;
    cout << "Você nasceu em que ano? ";
    cin >> ano_nascimento;
    cout << "Considerando que estamos em 2023, ou você tem " ;
    cout << 2023 - ano_nascimento;
    cout << " ou está próximo de fazer." << endl;

    return 0;
}