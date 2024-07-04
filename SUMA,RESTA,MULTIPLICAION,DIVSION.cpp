/*AUTOR:DENY TIRINA CARTAGENA
8)ESCRIBE UN PROGRAMA QUE LEA DE LA ENTRADA ESTANDAR DOS NUMEROS Y MUESTRE EN LA SALIDA
ESTANDAR SU SUMA, RESTA, MULTIPLICACION, DIVISION
*/
#include<iostream>
using namespace std;
int main(){
	int x,y, suma=0,resta=0,multiplicacion=0,division=0;
	cout<<"introduzca un numero: "; cin>>x;
	cout<<"introduzca otro valor: "; cin>>y;
	
	suma=x+y;
	resta=x-y;
	multiplicacion=x*y;
	division=x/y;
	
	cout<<"\nLa suma es: "<<suma<<endl;
	cout<<"la resta es: "<<resta<<endl;
	cout<<"la multiplicacion es: "<<multiplicacion<<endl;
	cout<<"la division es: "<<division<<endl;
	return 0;
}
