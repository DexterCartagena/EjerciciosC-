#include <iostream>
using namespace std;
int main(){
	int numero[]={1,2,3,4,5};
	int mult=0;
	for(int i=0;i<5;i++){
		mult= mult* numero[i];
		
	}
	cout<<"el resultado es: "<<mult<<endl;
	return 0;
}
