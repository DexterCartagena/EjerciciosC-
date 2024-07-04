
//41)SUMAR NUMEROS IMPARES DE LA SERIE 1,2,3,4....hasta n

#include<iostream>
using namespace std;
int main(){
	int suma=0,n;
	cout<<"digite un numero: ";cin>>n;
	for(int i=1;i<=n;i=i+2){
		if(i%2==1){
		}
		suma+=i;
	}
	cout<<"El resultado es: "<<suma<<endl;
	return 0;
}
