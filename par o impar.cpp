/*AUTOR:DENY TIRINA CARTAGENA 
25)REALICE UN PROGRAMA QUE LEA UN VALOR ENTERO Y DETERMINE SI SE TRATA DE UN NUMERO PAR
O IMPAR
*/
#include<iostream>
using namespace std;
int main(){
	int x,m ;
	cout<<"ingrese un numero: ";
	cin>>x;
	m=x%2;
	if(m==0){
	cout<<"el numero es par";
	}else{
	cout<<"el numero es impar";
	}
	return 0;
}
