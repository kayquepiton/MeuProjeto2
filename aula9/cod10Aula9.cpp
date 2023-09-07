#include <iostream>

using namespace std;

int main() {
    long long int limite;
    cout << "Digite o limite superior para a sequência Fibonacci: ";
    cin >> limite;

    long long int termo1 = 0;  // Primeiro termo
    long long int termo2 = 1;  // Segundo termo

    cout << "Sequência Fibonacci até " << limite << ":" << endl;

    while (termo1 <= limite) {
        cout << termo1 << " ";

        long long int proximo = termo1 + termo2;
        termo1 = termo2;
        termo2 = proximo;
    }

    cout << endl;

    return 0;
}
