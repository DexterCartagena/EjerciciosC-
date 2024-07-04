//44)Un vector con 8 posiciones de tipo char
#include <iostream>
using namespace std;
int main(){
	char letra[8]={'a','b','c','d','e','f','g','h'};
	for(int i=0;i<8;i++){
		cout<<"["<<letra[i]<<" elemento"<<"]"<<endl;
	}
	return 0;
}
