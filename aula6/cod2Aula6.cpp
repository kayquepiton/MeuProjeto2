#include <iostream>
#include <string>

using namespace std;

int main() {

    char c;
    string caracteresEspeciais = u8"çã";
    char c1 = caracteresEspeciais[0]; // 'ç'
    char c2 = caracteresEspeciais[1]; // 'ã
    cout << "Digite um caractere: ";
    cin >> c;

    // Imprime o caractere como caractere0
    cout << "Caractere: " << c;

    // Imprime o caractere como número usando static_cast
    int valor_decimal = static_cast<int>(c);
    int valor_hexadecimal = static_cast<int>(c);
    int valor_octal = static_cast<int>(c);
    cout << " (Valor decimal: " << valor_decimal << ") |";
    cout << " (Valor hexadecimal: " << hex << valor_hexadecimal << ") | ";
    cout << " (Valor octal: " << oct << valor_octal << ")\n";

    // Imprime os caracteres especiais da lista: çã
    cout << "Caractere especial 1: " << c1 << endl;
    cout << "Caractere especial 2: " << c2 << endl;

    return 0;
    
}
