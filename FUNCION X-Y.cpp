/*/*AUTOR:DENY TIRINA CARTAGENA
21)REALICE UN PROGRAMA QUE CALCULE EL VALOR QUE TOMA LA SIGUIENTE FUNCION PARA UNOS
VALORES DADOS DE X E Y: 
*/ 
#include <iostream>
#include<math.h>
using namespace std;
int main(){
	float x,y,resultado = 0;
	
	cout<<"digite el valor de x: "; cin>>x;
	cout<<"digite el valor de y: "; cin>>y;
	
	resultado = sqrt (x) / (pow(y,2)-1);
	cout<<"\nEl resultado de la ecuacion es: "<<resultado;
	
	return 0;
}
