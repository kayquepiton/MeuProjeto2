#include <iostream>

using namespace std;

int main(void) {

    //True e flase são objetos boleanos
    bool isNumber = true; //Definindo variáveis boleanas
    bool isPositive = true, isNegative = false;

    bool condition;
    condition = (isNumber && isPositive); //Operador lógico &&

    //True e flase são objetos boleanos
    bool isEven, isOdd;
    isEven = 4 % 2 == 0; //Operador de resto
    isOdd = 4 % 2;
    cout << "isNumber = " << isNumber << "\n";
    cout << "isPositive = " << isPositive << "\n";
    cout << "isNegative = " << isNegative << "\n";

    return 0;
}
