/*AUTOR:DENY TIRINA CARTAGENA
35) INTERCALAR OPERACIONES UTILIZANDO +,-,*,/
*/
#include <iostream>
using namespace std ;
int main () {
	int i ;
	float numero,suma, resta, multiplicacion, division ;
	int intercalado=1;
	
	cout<<"Ingrese un numero: ";
	cin>>numero;
	
	for (i=1;i<=10;i++){
		
		switch (intercalado){
			
		case 1 : {
				suma=numero+i;
				cout<<numero<<" + "<<i<<" = "<<suma<<endl;
				intercalado=intercalado+1;
				break;
			}
			
		case 2 : {
				resta=numero-i;
			    cout<<numero<<" - "<<i<<" = "<<resta<<endl;
				intercalado=intercalado+1;
				
				break;
			}
			
		case 3 : {
				multiplicacion=numero*i;
				cout<<numero<<" * "<<i<<" = "<<multiplicacion<<endl;
				intercalado=intercalado+1;
				
				break;
			}
			
		case 4 : {
				division=numero/i;
				cout<<numero<<" / "<<i<<" = "<<division<<endl;
				intercalado=intercalado-3;
				break;
			}
			
		}	
	}
	return 0 ;
}
