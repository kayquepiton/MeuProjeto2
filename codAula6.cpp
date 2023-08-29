#include <iostream>
#include <cstdlib> // Necesario para system()

using namespace std;

int main() {
    for (int n = 48; n <= 57; n++) {
        char asciiChar = static_cast<char>(n + '0'); // Convierte el número a su valor ASCII
        cout << "Decimal: " << n << ", ASCII: " << asciiChar <<  ", Hexadecimal: " << std::hex << n  << ", Octagonal: " << std::oct << n << endl;
    }

    system("pause");
    return 0;
}
