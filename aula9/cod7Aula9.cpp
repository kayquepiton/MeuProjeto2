#include <iostream>
#include <random>

using namespace std;


int main() {
    //1 3 6 10 16
    int numero = 26;
    //cout << "Entre com um número: ";
    //cin >> numero;
    int count = 0;
    for (int i = 0; i < numero; i++){
        
        int ascii = 65 + i;
        char caractere = static_cast<char>(ascii);
        cout << caractere;

        if (count == i){
            cout << endl;
            count = i + 2;
        }

        for (int j = 0; j < i; j++){
        
    }
    
    

    return 0;
}
