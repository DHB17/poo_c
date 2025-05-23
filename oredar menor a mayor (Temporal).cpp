#include <iostream>
using namespace std;
int main() {
    int num[6];
    int tempo;
    for(int i=0;i<6;i++){
        cout<<"Ingrese su numero "<<i+1<<": ";
        cin>>num[i];
    }
    for(int i=0;i<5;i++){
        for(int j=i+1;j<6;j++){
            if(num[i]>num[j]){
                int temp=num[i];
                num[i]=num[j];
                num[j]=temp;
                for(int tempo=num[i])
            	cout<<"El Temporal es "<<temp<<": ";
            
			}
        }
    }
    cout<<"Numeros ordenados de menor a mayor:\n";
    for(int i=0;i<6;i++){
        cout<<num[i]<<" ";
    }
    return 0;
}