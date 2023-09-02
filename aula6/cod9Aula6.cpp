#include <iostream>
#include <string>
#include <cctype>
#include <cmath>

using namespace std;

int main() {

    int valor_i;

    cout << "Digite um valor a ser lido: ";
    cin >> valor_i;

    if (valor_i > pow(2, 15) || valor_i <  - pow(2, 15)){
        cout << "e maior que um short int" << endl;
    } 
    else{
        cout << "este valor pertence ao intervalo dos short int" << endl;
    }

    return 0;
}
