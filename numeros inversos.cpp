/*50)  Un programa que pida al usuario 5 números reales o decimales y luego los muestre en 
el orden contrario (posiciones al revés, desde el ultimo  hasta el 0) al que se introdujeron.*/
#include<iostream>
#include<conio.h>
using namespace std;

int main(){
	int numero,resto,numeroinv=0;
	cout<<"Digite un numero: "<<endl;
	cin>>numero;
	while(numero>0){
		resto=numero%10;
		numero=numero/10;
		numeroinv=numeroinv*10+resto;
	}
	cout<<"El numero invertido es: "<<numeroinv<<endl;
	getch();
	return 0;
}
