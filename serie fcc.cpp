#include<iostream>
using namespace std;
int main(){
 int valor,x=1,y=2,z=0;
 do{
  cout<<"Digite la cantidad de digitos de la serie: "; cin>>valor;
 }while(valor<=0);
 cout<<"1 ";
  for(int i=1;i<valor;i++){
  z = x * y;
  cout<<z<<" ";
  x = y;
  y = z;
 } 
  if(z<1000){
  	cout<<"\nEl resultado es menor a 1000";
  }	else{
  	cout<<"\nEl resultado es mayor a 1000";
  }
 cout<<"\n";
 return 0;
}
