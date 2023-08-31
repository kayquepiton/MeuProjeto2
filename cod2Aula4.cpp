#include <iostream>
#include <limits>
#include <iomanip>

using namespace std;

int main(void){

    float valorMaximo = numeric_limits<float>::max();

    float pif = 3.141592653589793238462643383279502884197169;
    double pid = 3.141592653589793238462643383279502884197169;

    cout << "Valor máximo de casas decimais de float: " << valorMaximo << endl;

    cout << "Casas pif: " << fixed << setprecision(numeric_limits<float>::digits10 + 1) << pif << endl;
    cout << "Casas pid: " << fixed << setprecision(numeric_limits<double>::digits10 + 1) << pid << endl;

    return 0;
}