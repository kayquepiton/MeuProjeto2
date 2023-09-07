#include <iostream>
#include <iomanip>

#define NLIN 5
#define NCOL 3

using namespace std;

int main() {
    
    float notas [NLIN][NCOL] = {{5.3, 8.3, 7.1},
                                {4.2, 6.8, 7.3},
                                {6.0, 5.4, 1.0},
                                {9.7, 10.0, 9.6},
                                {2.1, 5.8, 7.9}};

    cout << fixed;
    cout << setprecision(1);

    for (int i = 0; i < NLIN; i++){
        for (int j = 0; j < NCOL; j++)
            cout << notas[i][j] << "\t";
        cout << endl;
    }

    return 0;

}
