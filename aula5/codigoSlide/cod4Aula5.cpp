#include <iostream>

using namespace std;

int main() {
    // Este programa em C++ demonstra operações de comparação e operadores lógicos.

    bool isTrue, isFalse;
    int a = 1, b = 2, c = 3, d = 4, e = -1;

    // Imprime os valores das variáveis.
    cout << "a = " << a << " b = " << b << " c = " << c << " d = " << d << " e = " << e << endl;

    // Demonstração de operadores de comparação.
    isTrue = a > e; 
    cout << "a > e is " << isTrue << endl;
    isFalse = a > b; 
    cout << "a > b is " << isFalse << endl;
    isTrue = a < b; 
    cout << "a < b is " << isTrue << endl;
    isFalse = a < e; 
    cout << "a < e is " << isFalse << endl;
    isTrue = d >= 2 * b; 
    cout << "d >= 2 * b is " << isTrue << endl;
    isFalse = d >= 2 * c; 
    cout << "d >= 2 * c is " << isFalse << endl;
    isTrue = a <= 2 * b; 
    cout << "a <= 2 * b is " << isTrue << endl;
    isFalse = a <= 2 * c; 
    cout << "a <= 2 * c is " << isFalse << endl;
    isFalse = a <= 2 * c; 
    cout << "a <= 2 * c is " << isFalse << endl;
    isTrue = 2 * a == b; 
    cout << "2*a == b is " << isTrue << endl;
    isFalse = b == c; 
    cout << "b == c is " << isFalse << endl;
    isTrue = 2 * a != c; 
    cout << "2*a != c is " << isTrue << endl;
    isFalse = 2 * a != b; 
    cout << "2*a != b is " << isFalse << endl;

    // Tabela da verdade do operador lógico AND.
    cout << "Tabela da verdade do operador lógico AND" <<  endl;
    cout << "true && true: " << (true && true) << endl;
    cout << "true && false: " << (true && false) << endl;
    cout << "false && true: " << (false && true) << endl;
    cout << "false && false: " << (false && false) << endl;

    // Tabela da verdade do operador lógico OR.
    cout << "Tabela da verdade do operador lógico OR" <<  endl;
    cout << "true || true: " << (true || true) << endl;
    cout << "true || false: " << (true || false) << endl;
    cout << "false || true: " << (false || true) << endl;
    cout << "false || false: " << (false || false) << endl;

    // Tabela da verdade do operador lógico NOT.
    cout << "Tabela da verdade do operador lógico NOT" <<  endl;
    cout << "!true: " << (!true) << endl;
    cout << "!false: " << (!false) << endl;

    return 0;
}
