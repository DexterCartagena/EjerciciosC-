/*50)   Un programa que almacene en una tabla el número de días que tiene cada mes 
(supondremos que es un año no bisiesto), pida al usuario que le indique un mes (1=enero, 12=diciembre) 
y muestre en pantalla el número de días que tiene ese mes.*/
#include <iostream>
#include<conio.h>
using namespace std;
int main()
{
	 int mes,dias;
    cout<<"ingrese el mes"<<endl;
    cin>>mes;
 
switch (mes){
case 1: case 3:case 5: case 7: case 8: case 10:case 12:cout<<"numero de dias es: " ; dias = 31;break;

case 4: case 6: case 9: case 11:cout<<"numero de dias es: ";dias = 30;break;

case 2:cout<<"febrero"<<endl; cout<<"numero de dias es: ";dias=28;break;
default: cout<<"el mes no es valido: ";break;
}
cout<<dias<<endl;
return 0;
 
  }
  
  

