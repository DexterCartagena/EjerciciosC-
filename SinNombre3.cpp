#include<iostream>
#include<math.h>
using namespace std;
int main(){
	
	int opc,x,y,resultado=0;
	
	cout<<"1.CUBO DE UN NUMERO"<<endl;
	cout<<"2.NUMERO PAR O IMPAR"<<endl;
	cout<<"3.SALIR"<<endl;
	cin>>opc;
	
	switch (opc){
		
		case 1: cout<<"digite un numero: ";
			    cin>>x;
			    resultado= (pow(x,3));
			    cout<<"el resultado es: "<<resultado;break;
		case 2:
			cout<<"digite un numero: ";
			cin>>y;
			if(y%2==0){
				cout<<"el numero es par";
			}
			else {
				cout<<"el numero es impar";
			}
		case 3:break;

		
	}
		
		
		
		
	
	return 0;
}
