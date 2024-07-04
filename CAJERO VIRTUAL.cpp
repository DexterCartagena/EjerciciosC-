#include<iostream>
using namespace std;
int main(){
	int saldo_inicial=1000,opciones;
	float extra,retiro,saldo=0;
	
	cout<<"\tBienvenidos a su cajero virtual"<<endl;
	cout<<"1.depositar en la cuenta"<<endl;
	cout<<"2.retiro"<<endl;
	cout<<"3.salir"<<endl;
	cin>>opciones;
	
	switch(opciones){
		case 1: cout<<"cuanto dinero va a depositar: ";
		cin>>extra;
		saldo=saldo_inicial+extra;
		cout<<"saldo actual es: "<<saldo;break;
		
		case 2:cout<<"ingrese la cantidad a retirar: ";
				cin>>retiro;	
			if(retiro>saldo_inicial){
				cout<<"ud no cuenta con esa cantidad de dinero";
			}
			else{
				saldo=saldo_inicial-retiro;
				cout<<"saldo actual: "<<saldo;
			}
		case 3:break;

	}
	
	return 0;
}
