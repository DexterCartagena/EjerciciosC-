/*AUTOR:DENY TIRINA CARTAGENA 
10)REALICE UN PROGRAMA QUE LEA DE LA ENTRADA ESTANDAR LOS SIGUIENTES DATOS DE UNA
PERSONA
EDAD:DATO DE TIPO ENTERO
SEXO:TIPO CARACTER 
ALTURA EN METROS:DATO DE TIPO REAL
TRAS LEER LOS DATOS, EL PROGRAMA DEBE MOSTRARLO EN LA SALIDA ESTANDAR
*/
#include<iostream>
using namespace std;
 int main(){
 	int edad;
 	char sexo[10];
 	float altura;
 	cout<<"introduzca su edad: "; cin>>edad;
 	cout<<"ingrese su sexo: "; cin>>sexo;
 	cout<<"ingrese su altura: "; cin>>altura;

 	cout<<"\nSu edad es: "<<edad<<endl;
 	cout<<"Su sexo es: "<<sexo<<endl;
 	cout<<"Su altura es: "<<altura<<endl;
 	return 0;
 }
 
