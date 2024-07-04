/*AUTOR:DENY TIRINA CARTAGENA
36)Escribe un programa que calcule el valor de: 2^1+2^2+2^3.......2^n
*/
#include <iostream> 
#include <math.h> 
using namespace std; 
int main ()
{
 int resultado = 0, numero_elevado = 0, n;
 cout<<"Ingrese el numero de elementos a sumar: "; cin>>n;

 for (int i = 1; i <= n; i++)
 {
  numero_elevado = pow (2,i); 
  resultado += numero_elevado;
 }
 cout<<"La suma total es: "<<resultado;
 return 0;
}
