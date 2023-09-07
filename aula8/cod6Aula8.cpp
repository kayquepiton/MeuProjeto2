#include <iostream>

using namespace std;

int main() {
    
    char word[100];
    cout << "Entre com uma frase: ";
    cin.getline(word, 100);
    int i = 0;
    while (word[i] != '\0')
        i++;

    cout << "A frase tem " << i << " caracteres." << endl;

    return 0;

}
