#include <iostream>
using namespace std;

int main(void) {
    // Este programa em C++ demonstra o uso de diferentes tipos de dados de caracteres.

    char letra = 'a'; // 'letra' é uma variável de tipo char
    // Cada caractere corresponde a um valor inteiro.
    cout << "A letra " << letra << " corresponde ao valor: " << int(letra) << endl;
    cout << "O tipo char ocupa " << sizeof(char) << " bytes na memória." << endl;
    
    letra = -120; // O tipo char pode armazenar valores negativos.
    cout << "E pode armazenar valores negativos: (" << int(letra) << "), ";
    
    letra = 120;
    cout << "e positivos: (" << int(letra) << ")." << endl;

    unsigned char letra2 = 120; // O tipo unsigned char só armazena valores positivos.
    signed char letra3 = -120;  // Aqui, o tipo signed char equivale ao tipo char.
    
    cout << "O tipo unsigned char ocupa " << sizeof(letra2) << " bytes na memória." << endl;
    cout << "O tipo signed char ocupa " << sizeof(letra3) << " bytes na memória." << endl;

    wchar_t letra4 = L'c'; // O tipo wchar_t é usado para armazenar caracteres Unicode.
    cout << "O tipo wchar_t ocupa " << sizeof(letra4) << " bytes na memória." << endl;

    char16_t letra5 = u'ç'; // O tipo char16_t é usado para armazenar caracteres Unicode.
    cout << "O tipo char16_t ocupa " << sizeof(letra5) << " bytes na memória." << endl;

    char32_t letra6 = U'g'; // O tipo char32_t é usado para armazenar caracteres Unicode.
    cout << "O tipo char32_t ocupa " << sizeof(letra6) << " bytes na memória." << endl;

    return 0;
}
