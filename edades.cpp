#include <iostream>
using namespace std;
int main(){
	int edades;
	cout<<"Digite su edad: ";
	cin>>edades;
	
	switch(edades){
	case 1:	if((edades>4)&&(edades<=12)){
		cout<<"Infantil";break;
		}
	case 2: if((edades>13)&&(13<=16)){
		cout<<"Pubertad";
		
	}
	case 3: if((edades>17)&&(edades<=27)){
		cout<<"Juvenil";
		
	}
		
		
		
	
}
	return 0;
}
