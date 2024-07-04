/*/*AUTOR:DENY TIRINA CARTAGENA
20)ESCRIBA UN PROGRAMA QUE LEA DE LA ENTRADA ESTANDAR LOS DOS CATETOS DE UN TRIANGULO 
RECTANGULO Y ESCRIBA EN LA SALIDA ESTANDAR SU HIPOTENUSA. 
*/ 
#include<iostream>
#include<math.h>
using namespace std;
int main(){
	float cateto1,cateto2,resultado=0;
	
	cout<<"introduzca el valor del cateto 1: ";
	cin>>cateto1;
	cout<<"introduzca el valor del cateto 2: ";
	cin>>cateto2;
	
	resultado= sqrt(pow(cateto1,2)+pow(cateto2,2));
	cout<<"\n El resultado de la hipotenusa es: "<<resultado<<endl;
	
	return 0;
}
