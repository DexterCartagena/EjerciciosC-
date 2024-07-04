#include<iostream>
using namespace std;
int main(){
	int num, nu=1, de=2, pos=1;
	
	cout<<"introduzca un numero: "; cin>>num;
	
	while(pos<=num) {
		
		nu=nu+de;
		de=de+2;
		pos++;
		
	}
	
	return 0;
}
