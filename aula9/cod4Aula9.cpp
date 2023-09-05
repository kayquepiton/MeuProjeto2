#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

bool ehPrimo(int numero) {
    if (numero <= 1) {
        return false;
    }

    for (int i = 2; i * i <= numero; ++i) {
        if (numero % i == 0) {
            return false;
        }
    }

    return true;
}

int main() {

    for(int numero = 1; numero <= 100; numero++){
        if(ehPrimo(numero)){
            cout << numero << " é primo" << endl;
        }else{
            cout << numero << " nâo é primo" << endl;
        }
    }
    
    return 0;
}
