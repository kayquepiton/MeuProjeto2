#include <iostream>

using namespace std;

int main() {

    cout << "Digite um número: ";
    int numero;
    cin >> numero;

    if (numero < 0){
        cout << "O número" << numero << "é negativo" << endl;
    }else if (numero > 0){
        cout << "O número" << numero << "é positivo" << endl;
    }else{
        cout << "O número é zero" << endl;
    }
    
    return 0;

}
