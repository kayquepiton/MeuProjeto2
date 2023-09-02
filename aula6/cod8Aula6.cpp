#include <iostream>
#include <string>
#include <cctype>

using namespace std;

int main() {

    int a, b, c = 0;

    cout << "Entre com o valor o valor de a: ";
    cin >> a;
    cout << "Entre com o valor o valor de b: ";
    cin >> b;

    c = a + b;

    cout << "Valor de c em hexadecimal: "<< hex << c << endl;

    c = a * b;

    cout << "Valor de c + a * b: "<< dec << c << endl;

    c = abs(a - b);

    cout << "Módulo da diferença entre a e b: "<< dec << c << endl;

    if (b > 0){
        c = a / b;
        cout << "Valor do quociente entra a e b: "<< dec << c << endl;
        float resto = a % b;
        if (resto == 0){
            cout << "Divisão exata" << endl;
        }else{
            cout << "Resto da divisão: " << resto << endl;
        }
        
    }
    else{
        cout << "Não é possível realizar a divisão";
    }

    return 0;
}
