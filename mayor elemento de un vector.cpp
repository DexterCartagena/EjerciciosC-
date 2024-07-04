#include <iostream>
using namespace std;
int main (){
	int n, mayor=0;
	
	cout<<"digite el numero de elementos: ";
	cin>>n;
	int numeros[n];
	for(int i=0;i<n;i++){
		cout<<i+1<<"digite un numero: ";
		cin>>numeros[i];
		if(numeros[i]>mayor){
			mayor=numeros[i];
		}	
	}
	cout<<"\nEl mayor elemento del vector es: "<<mayor<<endl;
	
	return 0;
	
}
