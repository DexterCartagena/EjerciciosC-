/*AUTOR:DENY TIRINA CARTAGENA
29)ESCRIBA UN PROGRAMA QUE LEA DE LA ENTRADA ESTANDAR UN CARACTER E INDIQUE EN LA SALIDA 
ESTANDAR SI EL CARACTER ES UNA VOCAL MINUSCULA O NO.
*/
#include <iostream>
using namespace std;
int main(){
	int x;
	cout<<"digite un numero entre 18-25: "; cin>>x;
	if((x>18)&&(x<25)){
		cout<<"la edad introducida esta dentro del rango";
	}	
	else{
		cout<<"la edad esta fuera de rango";
	}
	return 0;
}
