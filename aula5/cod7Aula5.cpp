#include <iostream>

using namespace std;

int main(){

    char  letra = 'a';
    cout << "A letra '" << letra << "' corresponde ao valor " <<  int(letra) << endl;
    cout << "O tipo 'char' ocupa " << sizeof(char) <<  " bytes na memória.\n" << endl;

    return 0;
}