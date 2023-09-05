#include <iostream>

using namespace std;

int main() {
     
    for(int i = 1; i <= 100; i++){
        cout << "i = " << i << endl;

        if (i % 3 == 0){
            cout << "Fizz" << endl;
        }

        if (i % 5 == 0){
            cout << "Buzz" << endl;
        }
    }
    
    return 0;
}
