/*AUTOR:DENY TIRINA CARTAGENA
14)ESCRIBE LAS SIGUIENTE EXPRESION COMO EXPRESION EN C++: a+(b/(c-d))
*/
#include<iostream>
#include<math.h>
using namespace std;
int main(){
	float a,b,c,d,resultado=0;
	
	cout<<"introduzca un numero: ";
	cin>>a;
	cout<<"digite otro numero: ";
	cin>>b;
	cout<<"digite el valor de c: ";
	cin>>c;
	cout<<"digite el valor de d: ";
	cin>>d;
	
	resultado=a+(b/(c-d));
	cout<<"el resultado es: "<<resultado<<endl;
	return 0;	
}
