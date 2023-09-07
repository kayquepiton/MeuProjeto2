#include <iostream>
#include <string>
#include <locale>

using namespace std;

int main() {
    // Configura o ambiente de localização para UTF-8
    setlocale(LC_ALL, "en_US.utf8");

    wchar_t c; // Mude de char para wchar_t
    wstring caracteresEspeciais = L"çã";
    wchar_t c1 = caracteresEspeciais[0]; // 'ç'
    wchar_t c2 = caracteresEspeciais[1]; // 'ã'
    wcout << L"Digite um caractere: ";
    wcin >> c;

    // Imprime o caractere como caractere
    wcout << L"Caractere: " << c;

    // Imprime o valor decimal, hexadecimal e octal do caractere
    int valor_decimal = static_cast<int>(c);
    wcout << L" (Valor decimal: " << valor_decimal << L") |";
    wcout << L" (Valor hexadecimal: " << hex << valor_decimal << L") | ";
    wcout << L" (Valor octal: " << oct << valor_decimal << L")\n";

    // Imprime os caracteres especiais da lista: 'ç' e 'ã'
    wcout << L"Caractere especial 1: " << c1 << endl;
    wcout << L"Caractere especial 2: " << c2 << endl;

    return 0;
}
