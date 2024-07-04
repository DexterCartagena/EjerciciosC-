#include <iostream>
using namespace std;
int main(){
	int numero[10]={};
	int x;
	for(int i=1;i<=10;i++){
		cout<<"digite un numero: ";
		cin>>x;	
	}	
	int num,resto,numeroinv=0;
	while(num>0){
		resto=num%10;
		num=num/10;
		numeroinv=numeroinv*10+resto;
	}
	cout<<"El numero invertido es: "<<numeroinv<<endl;
	
	
	
	return 0;
}
