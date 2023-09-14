#include <iostream>

using namespace std;

int main(void) {
    // Este programa em C++ explora variáveis booleanas e operadores lógicos.

    // True e false são valores booleanos.
    bool isNumber = true; // Definindo variável booleana 'isNumber'
    bool isPositive = true, isNegative = false; // Definindo variáveis booleanas 'isPositive' e 'isNegative'

    bool condition;
    // A variável 'condition' recebe o resultado da operação lógica AND (&&) entre 'isNumber' e 'isPositive'.
    condition = (isNumber && isPositive); // Operador lógico &&

    return 0;
}
