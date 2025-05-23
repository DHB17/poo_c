#include<iostream>
using namespace std;
int main() {
int matriz[5][5];
    cout<<"Ingrese los valores de la fila:\n";
    for(int j=0;j<5;j++){
        cout<<"matriz[0]["<<j<<"]: ";
        cin>>matriz[0][j];
    }
    cout<<"\nIngrese los valores restantes de la columna:\n";
    for(int i=1;i<5;i++){
        cout<<"matriz["<<i<<"][0]: ";
        cin>>matriz[i][0];
    }
    for(int i=1;i<5;i++){
        for(int j=1;j<5;j++){
            matriz[i][j]=matriz[i-1][j]+matriz[i][j-1];
        }
    }
    cout<<"\nMatriz resultante:\n";
    for(int i=0;i<5;i++){
        for(int j=0;j<5;j++) {
            cout<<matriz[i][j]<<"\t";
        }
        cout<<"\n";
    }
    return 0;
}