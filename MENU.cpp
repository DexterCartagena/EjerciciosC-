#include<iostream>
#include<math.h>
using namespace std;

int main(){
 int opc,numero,cubo;
 
 cout<<"\tMENU"<<endl;
 cout<<"1. Cubo de un numero"<<endl;
 cout<<"2. Numero par o impar"<<endl;
 cout<<"3. Salir"<<endl;
 cout<<"Opcion: "; 
 cin>>opc;
 
 switch(opc){
  case 1: 
   cout<<"\nDigite un numero: "; cin>>numero;
   cubo = pow(numero,3); 
   cout<<"El cubo del numero es: "<<cubo;break;
  case 2: 
   cout<<"\nDigite un numero: "; cin>>numero;
   
   if(numero%2==0){
    cout<<"El numero es par";
   }
   else{
    cout<<"El numero es impar";
   }
   break;
  case 3: break;
 }
 
 return 0;
}
