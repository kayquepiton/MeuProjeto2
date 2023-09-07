#include <iostream>

using namespace std;


int main() {

    int numero;
    cout << "Entre com um número: ";
    cin >> numero;
    int ascii = 64;
    string caractere = " * ";
    for(int i = 0; i <= numero; i++){
        for(int j = 0; j < i; j++){
            ascii += 1;
            char caractere = static_cast<char>(ascii);
            cout << caractere;
            
        }
        cout << endl;
    }

    return 0;
}
