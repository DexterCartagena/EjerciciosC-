#include <iostream>
#include<stdlib.h>
using namespace std;

int main(){
	
	int n,suma = 0;
	
	cout<<"digite el total de numeros a sumar: ";
	cin>>n;
	for(int i=1;i<=n;i ++){
		
		suma    += i;
	}
	cout<< "\nLa suma es : " <<suma <<endl;
	system ("pause");
	
	return 0;
}
