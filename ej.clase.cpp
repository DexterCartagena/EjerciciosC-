/*AUTOR:DENY TIRINA CARTAGENA
33)REALICE UN PROGRAMA QUE LEA DE LA ENTRADA ESTANDAR NUMEROS HASTA QUE SE INTRODUZCA
UN CERO. EN ESE MOMENTO EL PROGRAMA DEBE TERMINAR Y MOSTRAR EN LA SALIDA ESTANDAR EL NUMERO
DE VALORES MAYORES QUE CERO LEIDOS.
*/
#include<iostream>
#include<conio.h>

using namespace std;
int main(){
	int numero,i=0; 
	do{
		cout<<"Digite un numero: "; 
		cin>>numero;
		if(numero>0){
			i++;	
		}
	}while(numero != 0);
	
	cout<<"total de numeros ingresados antes del 0 son : "<<i;
	getch();
	return 0;
}
