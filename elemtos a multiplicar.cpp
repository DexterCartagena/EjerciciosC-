 //48) Un programa que pida al usuario 4 números, calcule la multiplicación de todos los elementos. 
#include <iostream>
using namespace std;
int main()
{
  int numero,x;
  cout << "Ingresa la cantidad de numeros a multiplicar" << endl;
  cin >> numero; 
  int vector[numero]; 
  
 cout<<"Introduzca 4 numeros: "<<endl;
  for(int i = 0; i < numero; i++){ 
   cin >> x; 
    vector[i] = x;
  }
 int mult=1;
  for(int ram = 0; ram < numero; ram++){ 
   mult=mult*vector[ram] ;
  }
   cout<<"la multiplicacion es: "<<mult<<endl;
  return 0;
}
