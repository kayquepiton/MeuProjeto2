#include <iostream>
#include <vector>
#include <string>

using namespace std;

int main(){

    vector<int> vec;
    string resposta = "S";
    int nota, qtd_notas = 0;
    double media, total = 0;

    for (int i = 0; resposta != "N"; i++){
        cout << "Nota[" << i+1 << "]" << ": ";
        cin >> nota;
        vec.push_back(nota);
        cout << "Deseja continuar?(s/n): ";
        cin >> resposta;
    }

    for (auto x = vec.begin(); x != vec.end(); x++){
        total += *x;
        qtd_notas++;
    }

    media = total / qtd_notas;

    cout << "Média das notas: " << media << endl;
    
    return 0;

}