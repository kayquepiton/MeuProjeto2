#include <iostream>

using namespace std;

int retornaXY(int X, int Y);

int main(){

    int somaX, somaY, X, Y;
    cin >> X;
    cin >> Y;
    string soma = "X";

    somaX = retornaXY(X, Y, soma);
    
    
    return 0;

}

int retornaXY(int X, int Y, string soma){

    if(soma == "X"){
        X = X + Y;

        return X;
        
    }else{
        Y = X + Y;

        return Y;
    }
    
}
