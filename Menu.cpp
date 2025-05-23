#include<iostream>
using namespace std;

int main(){
	int n;
     int nm;
	int opcion;
	int p;
	int r=1;
	while(opcion!=6){
	cout << " Menu \n";
	cout << " 1. Suma \n";
	cout << " 2. Resta \n";
	cout << " 3. Multiplicacion \n";
	cout << " 4. Division \n";
	cout << " 5. Potencia \n";
	cout << " 6. Salida \n";
	cin >> opcion;
	
	if(opcion==1){
		
     cout << " Elija el primer numero ";
     cin >> n;
    cout << "Elija el segundo numero ";
    cin >> nm;
     cout << "La respuesta es " << n+nm << "\n";
	}
	
	if(opcion==2){
		
     cout << " Elija el primer numero ";
     cin >> n;
    cout << "Elija el segundo numero ";
    cin >> nm;
     cout << "La respuesta es " << n-nm << "\n";
	}
	
	if(opcion==3){
		
     cout << " Elija el primer numero ";
     cin >> n;
    cout << "Elija el segundo numero ";
    cin >> nm;
     cout << "La respuesta es " << n*nm << "\n";
	}
	
	if(opcion==4){
		
     cout << " Elija el primer numero ";
     cin >> n;
    cout << "Elija el segundo numero ";
    cin >> nm;
     cout << "La respuesta es " << n/nm << "\n";
	}
	
	if(opcion==5){
		
     cout << "Ingresa el numero: ";
    cin >> n;
    cout << "Ingresa la potencia a la que desea elevar: ";
    cin >> nm;       
        for (p=0; p <  nm; p++)
        {
        	r = r * n;
		}
        cout << "La respuesta es " << r ;
	}
	cout <<"\n";
	}	
	return 0;
}