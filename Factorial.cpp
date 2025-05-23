#include<iostream>
using namespace std;

int main() {
    int num=0;
    int n = 1;
    long long fact=1;

    cout << "Ingresa un numero: ";
    cin >> num;
    if (num <= 1) {
        cout << "no se puede realizar el factorial.";
    } else {
        int n = 1;
        while (n <= num) {
            fact *= n;
            n++;
        }

        cout << "El factorial de " << num << " es " << fact ;
    }

    return 0;
}