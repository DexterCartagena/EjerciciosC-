/*AUTOR:DENY TIRINA CARTAGENA 
27)ESCRIBA UN PROGRAMA QUE LEA DE LA ENTRADA ESTANDAR UN CARACTER E INDIQUE EN LA SALIDA 
ESTANDAR SI EL CARACTER ES UNA VOCAL MINUSCULA O NO.
*/
#include<iostream>
using namespace std;
int main(){
	char vocal;
	
	cout<<"Digite un caracter: "; 
	cin>>vocal;
	switch(vocal){
		case 'a':
		case 'e':
		case 'i':
		case 'o':
		case 'u': cout<<"Es una vocal MINUSCULA"; break;
		default : cout<<"No es una vocal minuscula"; break;		
	}	
	return 0;
}
