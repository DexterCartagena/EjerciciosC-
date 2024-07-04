/*AUTOR:DENY TIRINA CARTAGENA 
9)ESCRIBIR UN PROGRAMA QUE DE LA ENTRADAR ESTANDAR EL PRECIO DE UN PRODUCTO Y MUESTRE
EN LA SALIDA ESTANDAR SU PRECIO DEL PRODUCTO AL APLICARLE EL IVA
*/
#include <iostream>
using namespace std;
int main(){
	float precio,IVA,preciofinal;
	cout<<"digite el numero del producto: ";
	cin>>precio;
	
	IVA=precio*0.21;
	preciofinal=precio+IVA;
	cout<<"El precio final al aplicarble IVA es: "<<preciofinal;
	
	return 0;	
}
