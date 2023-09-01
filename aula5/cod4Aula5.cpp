#include <iostream>

using namespace std;

int main(){

    bool isTrue, isFalse;
    int a = 1, b = 2, c = 3, d = 4, e = -1;
    cout << "a = " << a << " b = " << b << " c = " << c << " d = " << d << " e = " << e << endl;
    isTrue = a > e; // Maior que retorna true
    cout << "a > e is " << isTrue << endl;
    isFalse = a > b; // Maior que retorna false
    cout << "a > b is " << isFalse << endl;
    isTrue = a < b; // Menor que retorna true
    cout << "a < b is " << isTrue << endl;
    isFalse = a < e; // Menor que retorna false
    cout << "a < e is " << isFalse << endl;
    isTrue = d >= 2 * b; // Maior que retorna true
    cout << "d >= 2 * b is " << isTrue << endl;
    isFalse = d >= 2 * c; // Maior que retorna false
    cout << "d >= 2 * c is " << isFalse << endl;
    isTrue = a <= 2 * b; // Menor que retorna true
    cout << "a <= 2 * b is " << isTrue << endl;
    isFalse = a <= 2 * c; // Maior que retorna false
    cout << "a <= 2 * c e is " << isFalse << endl;
    isFalse = a <= 2 * c; // Menor que retorna false
    cout << "a <= 2 * c is " << isFalse << endl;
    isTrue = 2*a == b; // Maior que retorna true
    cout << "2*a == b; is " << isTrue << endl;
    isFalse = b == c; // Maior que retorna false
    cout << "b == c is " << isFalse << endl;
    isTrue = 2*a != c; // Menor que retorna true
    cout << "2*a != c is " << isTrue << endl;
    isFalse = 2*a != b; // Maior que retorna false
    cout << "2*a != b is " << isFalse << endl;
    cout << "Tabela da verdade do operdor lógico AND" <<  endl;
    cout << "true && true" << (true && true) << endl;
    cout << "true && false" << (true && false) << endl;
    cout << "true && true" << (false && true) << endl;
    cout << "false && true" << (false && false) << endl;
    cout << "Tabela da verdade do operdor lógico OR" <<  endl;
    cout << "true || true" << (true || true) << endl;
    cout << "true || false" << (true || false) << endl;
    cout << "true || true" << (false || true) << endl;
    cout << "false || true" << (false || false) << endl;
    cout << "Tabela da verdade do operdor lógico NOT" <<  endl;
    cout << "!true" << (!true) << endl;
    cout << "!false" << (!false) << endl;

    return 0;
}