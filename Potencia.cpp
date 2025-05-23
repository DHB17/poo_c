#include<iostream>
using namespace std;

int main() {
    int n;
    int nm;
    int p;
	int r=1;    

    cout << "Ingresa el numero: ";
    cin >> n;
    cout << "Ingresa la potencia a la que desea elevar: ";
    cin >> nm;
        
        for (p=0; p <  nm; p++)
        {
        	r = r * n;
		}

        cout << r ;
        
        return 0;
}