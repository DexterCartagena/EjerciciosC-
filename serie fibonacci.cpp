#include<iostream>
using namespace std;
int main(){
 int n,x=0,y=1,z=1,suma=0;
 do{
  cout<<"Digite la cantidad de digitos de la serie: ";
  cin>>n;
 }while(n<=0);
 cout<<"1 ";
  for(int i=1;i<n;i++){
  z = x + y;
  cout<<z<<" ";
  x = y;
  y = z;	
 } cout<<"\n";
 return 0;
}
