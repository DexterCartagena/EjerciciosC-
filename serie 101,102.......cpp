//42)Generar la serie 101,102,103....100 hasta la n, n es el numero introducido por el usuario
#include<iostream>
using namespace std;
int main(){
	int n;
	cout<<"Digite un numero: "; cin>>n;
	int i=101;
	while(i<=n){
		cout<<i<<endl;
		i++;
	}
}
