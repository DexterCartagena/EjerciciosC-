/*AUTOR:DENY TIRINA CARTAGENA
16)ESCRIBA UN PROGRAMA QUE LEA LAS TRES NOTAS DE UN ALUMNO Y CALCULE LA NOTA
FINAL MEDIA DE DICHO ALUMNO
*/
#include<iostream>
using namespace std;
int main(){
	
	float nota1,nota2,nota3;
	int notafinalmedia;
	
	cout<<"introduzca la nota 1: ";
	cin>>nota1;
	cout<<"introduzca la nota 2: ";
	cin>>nota2;
	cout<<"introduzca la nota 3: ";
	cin>>nota3;
	
	notafinalmedia= (nota1+nota2+nota3)/3;
	cout<<"\nSu nota final es: "<<notafinalmedia;
	if(notafinalmedia>=51){
		cout<<"\nUd aprobo";
	}
	else{
		cout<<"ud reprobo";
	}

	return 0;
}
