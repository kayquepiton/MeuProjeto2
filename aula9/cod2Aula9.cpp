#include <iostream>
#include <algorithm>

using namespace std;

bool eh_palindromo(int numero){

    bool palindromo = false;
    string numero_string = to_string(numero);
    string numero_string_reversa = numero_string;
    reverse(numero_string_reversa.begin(), numero_string_reversa.end());

    if(numero_string == numero_string_reversa)
        palindromo = true;
    
    return palindromo;

}

int main() {

    int numero;
    string numero_string;
    cin >> numero;

    if(eh_palindromo(numero)){
        cout << "É palíndromo" << endl;
    }else{
        cout << "Não é palíndromo" << endl;
    }
    
    return 0;

}
