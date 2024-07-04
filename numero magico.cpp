#include <iostream>
using namespace std;
int main(){
	int valor,oculto=80;
	
	do{
		cout<<"digite un numero: "; cin>>valor;
		if(valor>oculto){
			cout<<"\ndigite un numero menor"<<endl;
		}
		else{
			cout<<"\ndigite un numero mayor"<<endl;
		}
	}
	while(valor!=oculto);
	
	cout<<"\nFELICIDADES ADIVINO EL NUMERO MAGICO ";
	
	return 0;
} 
