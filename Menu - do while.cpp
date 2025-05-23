#include<iostream>
using namespace std;

int main(){
	int n;
     int nm;
	int opcion;
	int p;
	do {

	cout << " Menu \n";
	cout << " 1. Suma \n";
	cout << " 2. Resta \n";
	cout << " 3. Multiplicacion \n";
	cout << " 4. Division \n";
	cout << " 5. Potencia \n";
	cout << " 6. Salida \n";
	cout << " Elija la opcion que desea \n";
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
		cout << " Elija la base ";
     cin >> n;
    cout << "Elija un exponente ";
    cin >> nm;
     int potencia=1;
     do{
     	potencia=potencia*n;
     	nm=nm-1;
	 }while(nm>=1);
	 cout <<"La respuesta es "<<potencia;
	}	
	cout<<"\n"<<"\n";
}while(opcion!=6);
cout << " Gracia por utilizar este programa \n";
	return 0;
}