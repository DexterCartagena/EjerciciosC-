/*AUTOR:DENY TIRINA CARTAGENA
12)ESCRIBE LAS SIGUIENTE EXPRESION COMO EXPRESION EN C++: ((a+b) / (c+d))
*/
#include <iostream>
using namespace std;
int main(){
	
     int a,b,c,d, resultado = 0;
     
     cout<<"digite el valor de a: "; cin>>a;
     cout<<"digite el valor de b: "; cin>>b;
     cout<<"digite el valor de c: "; cin>>c;
     cout<<"digite el valor d:"; cin>>d;

     resultado = ((a+b) / (c+d));
     cout<<"\nEl resultado es: "<<resultado<<endl;
	return 0;
}
