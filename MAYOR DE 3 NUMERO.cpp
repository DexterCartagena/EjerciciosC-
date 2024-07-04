/*AUTOR:DENY TIRINA CARTAGENA 
24)ESCRIBA UN PROGRAMA QUE LEA TRES NUMEROS Y DETERMINE CUAL DE ELLOS ES EL MAYOR
*/
#include<iostream>
using namespace std;
int main(){
	int n1,n2,n3;
	
	cout<<"Digite un numero: "; cin>>n1;
	cout<<"Digite otro numero: "; cin>>n2;
	cout<<"Digite un 3er numero: "; cin>>n3;
	if((n1>n2)&&(n1>n3)){
		cout<<"El mayor es: "<<n1;
	}
	else if((n2>n1)&&(n2>n3)){
		cout<<"El mayor es: "<<n2;
	}
	else{
		cout<<"El mayor es: "<<n3;
	}
	return 0;
}
