#include<iostream>
using namespace std;

int main() {
    cout << "Los numeros primos del 4 al 100:" << endl;
    
    for (int num = 4; num <= 100; num++) {
        bool primo = true;
        for (int i = 2; i * i <= num; i++) {
            if (num % i == 0) {
                primo = false;
                break;
            }
        }
        if (primo) cout << num << " ";
    }
    
    cout << endl;
    return 0;
}