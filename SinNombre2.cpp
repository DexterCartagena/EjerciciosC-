#include<iostream>
using namespace std;
int main(){
	char nombre[200];
	float altura;
	char carrera [200];
	
	cout<<"introduzca su nombre: ";
	cin>>nombre;
	cout<<"digite su altura";
	cin>>altura;
	cout<<"que carrera estudia?: ";
	cin>>carrera;
	
	cout<<"\nNombre es: "<<nombre<<endl;
	cout<<"su altura es: "<<altura<<endl;
	cout<<"ud estudia ing de "<<carrera<<" en la udabol"<<endl;
	
	return 0;
}
