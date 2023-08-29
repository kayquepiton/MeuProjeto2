#include <iostream>
#include <iomanip> // Necessário para o std fixed
#include <cmath>

using namespace std;

int main(void){

    float A = 5.0;
    float B = 3.0;

    std::cout << std::fixed << std::setprecision(2);
    std::cout << "Soma = " << A + B << std::endl;
    std::cout << "Subtração = " << A - B << std::endl;
    std::cout << "Multiplicação = " << A * B << std::endl;
    std::cout << "Divisão = " << A / B << std::endl;
    std::cout << "Resto = " << fmod(A, B) << std::endl;

    return 0;
}