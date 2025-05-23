#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;
int main(){
    int matriz[3][3];
    int n=0;
    int o=1;
    srand(time(0));
    for(int i=0;i<3;i++){
    	for(int j=0;j<3;j++){
        matriz[i][j]=rand()%100+1;
    }
}
for(int x=0;x<3;x){
	cout<<"Adivine el numero que se encuentra en la matriz: "<<"\n";
	cin>>n;
    	for(int i=0;i<3;i++){
    		for(int j=0;j<3;j++){
        if(n==matriz[i][j]){
        	cout<<"Se acerto: "<< o++ <<"\n";
        	x++;
		}
		}
}
}
cout<<"\n";
cout<<"Los Valores son: "<<"\n";
for(int i=0;i<3;i++){
    		for(int j=0;j<3;j++){
    			cout<<matriz[i][j]<<"\t";
    		}
cout << "\n";
}
return 0;
}
