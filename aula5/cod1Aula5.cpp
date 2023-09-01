#include <iostream>

using namespace std;

int main(){

    char op, ch;
    int i = 0, j, k;
    double x, y, z;
    bool isOk, isNotOk;
    //rvalue pode ser um objeto literal
    op = 's';  //op = 115
    ch = 78;   //ch = 'N' conversão implícita do tipo int -> char
    //atribuicoes multiplas
    j = k = i;
    x = 0.33333;
    y = 1.0/3.0;
    z = 3.3333e-1;
    isOk = true;
    isNotOk = false;

    return 0;
}