/*/*AUTOR:DENY TIRINA CARTAGENA
19)la calificaion final de un estudiante es el promedio de tres notas: la nota de paracticas
que cuenta un 30%del total, la nota teorica que cuenta un 60%y la nota de participacion que 
cuenta un 10% restante. escriba un programa que lea las tres notas del alumno y escriba su
nota final.
*/ 
#include<iostream>
using namespace std;
int main(){
	
	float notapractica,notateorica,notaparticipacion;
	int notafinal;
	
	cout<<"ingrese la nota practica: ";
	cin>>notapractica;
	cout<<"ingrese la nota teorica: ";
	cin>>notateorica;
	cout<<"ingrese la nota de participacion: ";
	cin>>notaparticipacion;
	
	notapractica=notapractica*0.30;
	notateorica *= 0.60;
	notaparticipacion*= 0.10;
	
	notafinal=notapractica+notateorica+notaparticipacion;
	
	cout<<"\nSu nota final es: "<<notafinal<<endl;
	
	if(notafinal>=51){
		cout<<"\nUd aprobo";
	}
	else{
		cout<<"ud no aprobo";
	}
	    
	
	return 0;
}
