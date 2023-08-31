#include <iostream>
#include <limits>

using namespace std;

int main(void){

    float valorMaximo = numeric_limits<float>::max();

    float pif = 3.141592653589793238462643383279502884197169;

    cout << "Valor máximo de casas decimais de float: " << valorMaximo << endl;

    cout << "Casas pi: " << pif <<endl;

    return 0;
}