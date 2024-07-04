/*AUTOR:DENY TIRINA CARTAGENA
17)REALIZAR LA VERIFICACION SEGUN EL RANGO DE 0 A 12 AÑOS DE EDAD ES NIÑ@,SI TIENE DE ENTRE 
13 Y 17 ES ADOLESCENTE, SI TIENE ENTRE 17 Y 21 ES JOVEN, SI TIENE ENTRE 21 Y 35 ES ADULTO
*/
#include<iostream>
using namespace std;
int main(){
	int edad; 
	cout<<"digite su edad: ";
	cin>>edad;
	
	if ((edad>=0)&&(edad<=12)){
		cout<<"Eres niño";
    }
	if ((edad>=13)&&(edad<=17)){
		cout<<"Eres adolescente";
    }
	if((edad>=17)&&(edad<=21)){
		cout<<"Ud es joven";
	}
	if((edad>=21)&&(edad<=35)){
		cout<<"Ud es adulto";
    }
	return 0;
	
}
