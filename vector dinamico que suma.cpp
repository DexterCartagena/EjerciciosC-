/*AUTOR:DENY TIRINA CARTAGENA
47) Vector dinamico que suma
*/
#include <iostream>
using namespace std;
 
int main()
{
  int dim;
  int e; 
  
  cout << "Ingresa la dimension del vector" << endl;
  cin >> dim; 
  int vector[dim]; 
  
 cout<<"INTRODUZCA DATOS NUMERICOS PARA  VECTOR"<<endl;
 
  for(int i = 0; i < dim; i++){ 
   cin >> e; 
    vector[i] = e;
  }
 cout<<"LOS DATOS DEL VECTOR SON: "<<endl; 
 int suma=0;
  for(int J = 0; J < dim; J++){ 
   cout << vector[J] << endl;  
   suma=suma+vector[J] ;
  }
   cout<<"la suma de los elementos del vector es: "<<suma<<endl;
  return 0;
}
