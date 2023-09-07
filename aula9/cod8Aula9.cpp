#include <iostream>

using namespace std;


int main() {
    int linhas = 1;
    int entrada = 4;
    //cout << "Entre com um número: ";
    //cin >> entrada;

    string caractere = " * ";

    cout << endl;

    for(int i = 0; i < entrada; i++){
        for(int j = 0; j < entrada; j++){
            cout << caractere;
        }
        cout << endl;
    }

    for(int i = 0; i <= entrada; i++){
        for(int j = 0; j < i; j++){
            cout << caractere;
        }
        cout << endl;
    }

    cout << endl;
    
    for(int i = 0; i < linhas; i++){
        for(int j = 0; j < entrada; j++){
            cout << caractere;
        }
        cout << endl;
    }

    caractere = " *        * ";

    for(int i = 0; i < entrada/2; i++){
        for(int j = 0; j < entrada/4; j++){
            cout << caractere;
        }
        cout << endl;
    }

    caractere = " * ";

    for(int i = 0; i < linhas; i++){
        for(int j = 0; j < entrada; j++){
            cout << caractere;
        }
        cout << endl;
    }

    return 0;
}
