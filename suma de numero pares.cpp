/*AUTOR:DENY TIRINA CARTAGENA
36)SUMAR NUMEROS PARES DE LA SERIE 1,2,3,4....20
*/
#include<iostream>
using namespace std;
int main(){
	int suma=0;
	for(int i=2;i<=20;i=i+2){
		suma+=i;
	}
	cout<<"El resultado es: "<<suma<<endl;
	return 0;
}
