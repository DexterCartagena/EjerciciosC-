/*AUTOR:DENY TIRINA CARTAGENA 
26)COMPROBAR SI UN NUMERO DIGITADO POR EL USUARIO ES POSITIVO O NEGATIVO.
*/
#include<iostream>
using namespace std;
int main(){
	int numero;
	cout<<"Digite un numero: "; cin>>numero;
	if(numero==0){
		cout<<"El numero es cero";
	}
	else if(numero>0){
		cout<<"El numero es positivo";
	}
	else{
		cout<<"El numero es negativo";
	}
	return 0;
}
