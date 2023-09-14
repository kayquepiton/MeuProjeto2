#include <iostream>

using namespace std;

int main() {
    // Este programa em C++ demonstra operações de bits em variáveis do tipo unsigned char.

    unsigned char byteA, byteB, byteC;

    // Inicialização de variáveis byteA e byteB.
    byteA = 255; // 11111111 em binário
    byteB = 0;   // 00000000 em binário

    // Operação de E lógico (AND) entre byteA e byteB.
    byteC = byteA & byteB; // Resultado: 00000000 em binário
    cout << "byteA & byteB = " << (int)byteC << endl;

    // Operação de OU lógico (OR) entre byteA e byteB.
    byteC = byteA | byteB; // Resultado: 11111111 em binário
    cout << "byteA | byteB = " << (int)byteC << endl;

    // Operação de deslocamento à direita (shift right) de byteA em 4 posições.
    byteC = byteA >> 4; // Resultado: 00001111 em binário
    cout << "byteA >> 4 = " << (int)byteC << endl;

    // Operação de deslocamento à esquerda (shift left) de byteA em 4 posições.
    byteC = byteA << 4; // Resultado: 11110000 em binário
    cout << "byteA << 4 = " << (int)byteC << endl;

    // Operação de inversão de bits (NOT) em byteA.
    byteC = ~byteA; // Resultado: 00000000 em binário
    cout << "~byteA = " << (int)byteC << endl;

    // Operação de OU exclusivo (XOR) entre byteA e o resultado do deslocamento à esquerda de byteA em 4 posições.
    byteC = byteA ^ (byteA << 4); // Resultado: 00001111 em binário
    cout << "byteA ^ (byteA << 4) = " << (int)byteC << endl;

    return 0;
}
