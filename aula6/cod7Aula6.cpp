#include <iostream>
#include <string>
#include <cctype>

using namespace std;

int main() {

    char c1, c2, c3;
    cout << "Digite um caractere: ";
    cin >> c1;
    
    if(isupper(c1)){
        cout << "Primeiro caractere c1: Letra maiúscula" << endl;
    }else if (islower(c1)){
        cout << "Primeiro caractere c1: Letra minúscula" << endl;
    }else if (isdigit(c1)){
        cout << "Primeiro caractere c1: Um dígito" << endl;
    }else{
        cout << "Primeiro caractere c1: Outro caractere" << endl;
    }
    
    // Atribuindo o caractere 81 da tabela ascii a c2
    c2 = static_cast<char>(81); 

    // Imprime o caractere como número usando static_cast
    int valor_decimal = static_cast<int>(c2);
    int valor_hexadecimal = static_cast<int>(c2);
    int valor_octal = static_cast<int>(c2);
    cout << " (Valor decimal: " << valor_decimal << ") |";
    cout << " (Valor hexadecimal: " << hex << valor_hexadecimal << ") | ";
    cout << " (Valor octal: " << oct << valor_octal << ")";
    cout << " (Valor caractere: " << c2 << ")\n";

    c3 = tolower(c2); 

    // Imprime o caractere como número usando static_cast
    valor_decimal = static_cast<int>(c3);
    valor_hexadecimal = static_cast<int>(c3);
    valor_octal = static_cast<int>(c3);
    cout << " (Valor decimal: " << valor_decimal << ") |";
    cout << " (Valor hexadecimal: " << hex << valor_hexadecimal << ") | ";
    cout << " (Valor octal: " << oct << valor_octal << ")";
    cout << " (Valor caractere: " << c3 << ")\n";

    return 0;
}
