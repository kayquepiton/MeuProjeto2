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

    // True e false são valores booleanos.
    bool isEven, isOdd;
    // A variável 'isEven' verifica se 4 é divisível por 2 (não tem resto).
    isEven = 4 % 2 == 0; // Operador de resto
    // A variável 'isOdd' verifica o resto da divisão de 4 por 2.
    isOdd = 4 % 2;
    
    // Imprime os valores das variáveis booleanas.
    cout << "isNumber = " << isNumber << "\n";
    cout << "isPositive = " << isPositive << "\n";
    cout << "isNegative = " << isNegative << "\n";

    return 0;
}
