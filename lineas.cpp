#include <iostream>
using namespace std;
int main(){
	int saldo_inicial=1000, opciones,numero,x,y;
	float deposito,saldo=0,retiro;
	cout<<"\tBIENVENIDO A SU CAJERO AUTOMATICO"<<endl;
	cout<<"1.DEPOSITO"<<endl;
	cout<<"2.RETIRO"<<endl;
	cout<<"3.NUMERO PAR O IMPAR"<<endl;
	cout<<"4.NUMERO POSITIVO O NEGATIVO"<<endl;
	cout<<"5.RANGO DE EDAD"<<endl;
	cout<<"6.SALIR"<<endl;
	cout<<"\nELIJA UNA OPCION: "; cin>>opciones;
	
	switch(opciones){
		
		case 1: 
		cout<<"Digite la cantidad a depositar: ";
		cin>>deposito;	
		saldo=saldo_inicial+deposito;
		cout<<"\nSALDO ACTUAL ES: "<<saldo;break;
		
		case 2:
		cout<<"Digite la cantidad a retirar: ";
		cin>>retiro;
		if(retiro>saldo_inicial){
			cout<<"UD NO CUENTA CON ESA CANTIDAD DE DINERO";
		}
		else{
			saldo=saldo_inicial-retiro;
			cout<<"SU SALDO ACTUAL ES: "<<saldo;break;
		}
		case 3:
		cout<<"digite un numero: ";
		cin>>numero;
		if(numero%2==0){
			cout<<"El numero es par";break;
		}
		else{
			cout<<"El numero es impar";break;
		}
		case 4:
		cout<<"Digite un numero: ";
		cin>>x;
		if(x>0){
			cout<<"\nEl numero es positivo";break;
		}
		else{
			cout<<"el numero es negativo";break;
		}
		case 5:
		cout<<"Digite un numero: ";
		cin>>y;
		if((y>0)&&(y<12)){
			cout<<"Es un niño";
		}
		else if((y>12)&&(y<17)){
			cout<<"Ud es adolescente";break;
		}
		else if((y>18)&&(y<25)){
			cout<<"Ud es Joven";break;
		}
		else if((y>26)&&(y<35)){
			cout<<"Ud es adulto";break;
		}
		else if((y>36)&&(y<100)){
			cout<"Ud es adulto mayor";break;
		}
		case 6: break;
		
		
		
		
		
		
	}
	
	return 0;
}
