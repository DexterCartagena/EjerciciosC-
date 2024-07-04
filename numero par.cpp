/*AUTOR:DENY TIRINA CARTAGENA
3)Verificar si el numero ingresado por el usuario es par o impar
*/
#include<iostream>
using namespace std;
int main(){
	int numero;
	cout<<"Digite un numero: ";cin>>numero;
	if(numero%2==0){
		cout<<"El numero es par";
	}else{
		cout<<"El numero es impar";
	}
	return 0;
}
