/*AUTOR:DENY TIRINA CARTAGENA
7)VERIFICAR DE A,B,C CUAL ES EL MAYOR VALOR Y EL DE MENOR VALOR, SI TODOS SON IGUALES RETORNAR 
EL MENSAJE "TODOS SON IGUALES" 
*/
#include<iostream>
using namespace std;
int main(){
	int a,b,c;
	cout<<"Digite un numero: "; cin>>a;
	cout<<"Digite un numero: "; cin>>b;
	cout<<"Digite un numero: "; cin>>c;
	if((a>b)&&(a>c)){
		cout<<"El numero mayor es: "<<a;
	}else if((b>a)&&(b>c)){
		cout<<"El numero mayor es: "<<b;
	}else{
		cout<<"El numero mayor es: "<<c;
	}
	return 0;
}
