/*AUTOR:DENY TIRINA CARTAGENA
13)ESCRIBE LAS SIGUIENTE EXPRESION COMO EXPRESION EN C++: ((a)+(b/c)/(d)+(e/f))
*/
#include<iostream>
using namespace std;
int main(){
	float a,b,c,d,e,f, resultado = 0;
	
	cout<<"digite el valor de a: "; cin>> a;
	cout<<"digite el valor de b: "; cin>> b;
	cout<<"digite el valor de c: "; cin>> c;
	cout<<"digite el valor de d: "; cin>> d;
	cout<<"digite el valor de e: "; cin>> e;
	cout<<"digite el valor de f: "; cin>> f;
	
	resultado = ((a)+(b/c)/(d)+(e/f));
	cout<<"\nEl resultado es: "<<resultado;
	return 0;
}
