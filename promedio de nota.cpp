#include<iostream>
using namespace std;
int main(){
	int nt1,nt2,nt3,nt4,nt5,nt6,promedio_nota=0;
	cout<<"digite la nota 1:";cin>>nt1;
	cout<<"digite la nota 2:";cin>>nt2;
	cout<<"digite la nota 3:";cin>>nt3;
	cout<<"digite la nota 4:";cin>>nt4;
	cout<<"digite la nota 5:";cin>>nt5;
	cout<<"digite la nota 6:";cin>>nt6;
	promedio_nota=(nt1+nt2+nt3+nt4+nt5+nt6)/6;
	
	cout<<"El promedio del alumno es: "<<promedio_nota<<endl;
	if(promedio_nota%2==0){
		cout<<"\nEl numero es par";
	}else{
		cout<<"\nEl numero es impar\n";
	}
	return 0;
}
