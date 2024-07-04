/*AUTOR:DENY TIRINA CARTAGENA
32)Realice un programa que solicite de la entrada estandar un numero entero del 1 al 10 y muestre 
en la salida su tabla de multiplicar.
*/
#include<iostream>
using namespace std;
int main(){
	int valor;
	cout<<"Digite un numero: ";cin>>valor;
	for(int i=1;i<=10;i++){
		cout<<valor<< "x" << i <<" = "<<valor*i<<endl;
	}
	return 0;
}
