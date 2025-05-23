#include<iostream>
using namespace std;
int main(){
    int matriz1[3][3];
    int a = 0;
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            cout<<"Ingrese un numero para la tabla, posicion "<<a++<<": ";
            cin>>matriz1[i][j];
        }
    }
    cout<<"\nMatriz ingresada:\n";
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            cout<<matriz1[i][j]<<"\t";
        }
        cout<<"\n";
    }
    cout<<"\nDiagonal principal (izquierda a derecha): ";
    for(int i=0;i<3;i++){
        cout<<matriz1[i][i]<<" ";
    }
    cout <<"\n";
    cout<<"Diagonal secundaria (derecha a izquierda): ";
    for (int i=0;i<3;i++){
        cout<<matriz1[i][2-i]<< " ";
    }
    cout<<"\n";
    return 0;
}