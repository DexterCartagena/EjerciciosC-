#include<iostream>
using namespace std;
int main(){
	char a='2',b='3',aux;
	
	aux=a;
	
	a=b;
	b=aux;
	
	cout<< a << " " <<b<<endl;
	
	
	return 0;
}
