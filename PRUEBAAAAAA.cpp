#include<iostream>
using namespace std;
int main(){
	int inicial_saldo=1000,retiro,deposito,aux=0,opc;
	cout<<"\tBANCO MERCANTIL SANTA CRUZ"<<endl; 
	cout<<"1. DEPOSITO A CUENTA"<<endl;
	cout<<"2. RETIRO DE LA CUENTA"<<endl;
	cout<<"3. SALIR"<<endl;
	cout<<"ELIJA UNA OPCION: ";
	cin>>opc;
	switch(opc){
				case 1: cout<<"Cantidad a depositar: ";
				cin>>deposito;
				aux= inicial_saldo+deposito;
				cout<<"Su nuevo saldo es: "<<aux; break;
				
				case 2: cout<<"Cantidad a retirar: ";
				cin>>retiro;
				if(retiro>inicial_saldo){
					cout<<"Ud no cuenta con esa cantidad de dinero";
				} else{
					aux=inicial_saldo-retiro;
					cout<<"Su nuevo saldo es: "<<aux; break;
				
				}
				case 3: break;
				
	
	}
		

return 0;
}
