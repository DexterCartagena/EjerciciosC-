/*AUTOR:DENY TIRINA CARTAGENA
39)Contar los numero pares de n numero introducidos por el usuario
*/
#include <iostream> 
using namespace std; 
int main () 
{ 
 int a,b,cont;
 cout<<"digite un numero: ";cin>>a;
 cout<<"digite un numero: ";cin>>b;
 cont=1;
 for(int i=a;i<b;i++){
 	if(i%2==0){
 		cont=cont+1;
	 }
 }
 cout<<"\nTotal de numeros pares son: "<<cont<<endl;
return 0;
} 
