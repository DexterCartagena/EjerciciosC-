/*AUTOR:DENY TIRINA CARTAGENA
17)ESCRIBA UN PROGRAMA DONDE EL USUARIO INTRODUZCA UN NUMERO Y AUTOMATICAMENTE
DE UN DIA DE LA SEMANA - VARIABLE DE TIPO CHAR-CADENA
*/
#include <iostream>
using namespace std;
int main() {
 char dia; 
 cout << "Introduzca un Numero del 1 al 7: "; cin >> dia;
 switch(dia)
  {
  case '1': cout << "Dia Lunes";break;
  case '2': cout << "Dia Martes";break;
  case '3': cout << "Dia miercoles";break;
  case '4': cout << "Dia jueves"; break;
  case '5': cout << "Dia viernes"; break;
  case '6': cout << "Dia sabado"; break;
  case '7': cout << "Dia domingo"; break;
  default: cout << "ingrese un numero del 1 al 7"; break;
  }
 return 0;

}
