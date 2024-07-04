/*AUTOR:DENY TIRINA CARTAGENA
15)ESCRIBA UN FRAGMENTO DE PROGRAMA QUE INTERCAMBIE LOS VALORES DE DOS VARIABLES
*/
#include <iostream>
using namespace std;
int main(){
	char a = '5', b= '8', aux;
	aux = a;
	a = b;
	b = aux;
	
	cout<< a << " "<< b << endl;
	return 0;	
}
