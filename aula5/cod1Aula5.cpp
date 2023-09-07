#include <iostream>

using namespace std;

int main() {
    // Este programa em C++ demonstra atribuições de variáveis e conversões de tipos.

    char op, ch;
    int i = 0, j, k;
    double x, y, z;
    bool isOk, isNotOk;

    // Um objeto literal 's' é atribuído à variável 'op'.
    op = 's';  // 's' é um valor literal do tipo char (valor decimal 115)

    // Um objeto literal 78 (valor decimal) é atribuído à variável 'ch', que é do tipo char.
    ch = 78;   // 78 é um valor literal do tipo int, convertido implicitamente para char ('N')

    // Atribuições múltiplas: i é atribuído a j e depois j é atribuído a k.
    j = k = i;

    x = 0.33333;          // Atribuição de um valor literal float a x.
    y = 1.0 / 3.0;        // Atribuição do resultado de uma expressão double a y.
    z = 3.3333e-1;        // Atribuição de um valor em notação científica double a z.

    isOk = true;          // Atribuição de verdadeiro (true) a isOk.
    isNotOk = false;      // Atribuição de falso (false) a isNotOk.

    return 0;
}
