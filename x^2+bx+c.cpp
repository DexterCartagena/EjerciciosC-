/*/*AUTOR:DENY TIRINA CARTAGENA
22)ESCRIBA UN PROGRAMA QUE CALCULE LAS SOLUCIONES DE UNA ECUACION DE SEGUNDO GRADO DE LA FORMA 
ax^2+bx+c=0.
*/ 
#include<iostream>
#include<math.h>
using namespace std;
int main(){
	float a,b,c, resultado1=0,resultado2=0;
	
	cout<<"digite un valor: ";
	cin>>a;
	cout<<"digite un 2do valor: ";
	cin>>b;
	cout<<"digite un 3er valor: ";
	cin>>c;
	
	resultado1= (-b+ sqrt(pow(b,2)-4*a*c))/(2*a);
	resultado2= (-b- sqrt(pow(b,2)-4*a*c))/(2*a);
	cout<<"\nEl resultado 1 es: "<<resultado1<<endl;
	cout<<"el resultado 2 es: "<<resultado2<<endl;
	
	return 0;
}
