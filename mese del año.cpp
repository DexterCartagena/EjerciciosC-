/*AUTOR:DENY TIRINA CARTAGENA
18)MOSTRAR LOS MESES DEL AÑO, PIDIENDOLE AL USUARIO UN NUMERO ENTRE (1-12), Y MOSTRAR
 EL MES AL QUE CORRESPONDE - VARIABLE DE TIPO CHAR-CADENA
*/
#include <iostream>
using namespace std;
int main() {
 int dia; 
 cout << "Introduzca un Numero del 1 al 12: "; cin>>dia;
 switch(dia)
  {
  case 1: cout << "Mes de enero";break;
  case 2: cout << "Mes de febrero";break;
  case 3: cout << "Mes de marzo";break;
  case 4: cout << "Mes de abril"; break;
  case 5: cout << "Mes de mayo"; break;
  case 6: cout << "Mes de junio"; break;
  case 7: cout << "Mes de julio"; break;
  case 8: cout << "Mes de agosto"; break;
  case 9: cout << "Mes de septiembre"; break;
  case 10: cout << "Mes de octubre"; break;
  case 11: cout << "Mes de noviembre"; break;
  case 12: cout << "Mes de diciembre"; break;
  default: cout << "ingrese un numero del 1 al 12"; break;
  }
 return 0;

}
