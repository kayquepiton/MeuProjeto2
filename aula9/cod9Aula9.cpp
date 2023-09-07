#include <iostream>

using namespace std;

int main() {
    
    int numero;
    cout << "Entre com um número: ";
    cin >> numero;
    int somatorio = 0;

    for (int i = 1; i < numero; i++){
        if (numero % i == 0){
            somatorio += i;
        }
        
    }

    if(somatorio == numero){
        cout << numero <<" é um número perfeito!\n";
    }else{
        cout << numero <<" não é um número perfeito!\n";
    }
    
    return 0;

}
