#include<iostream>
#include<conio.h>

using namespace std;

int main(){
 char letras1[] = {'a','b','c','d','e'};
 char letras2[] = {'f','g','h','i','j'};
 char letras3[10];
 
 //Copiando el contenido de letras1 hacia letras3
 for(int i=0;i<5;i++){
  letras3[i] = letras1[i]; 
 }
 
 //Copiando el contenido de letras2 hacia letras3
 for(int i=5;i<10;i++){
  letras3[i] = letras2[i-5];
 }
 
 //Imprimiento el numero vector con todos los elementos
 for(int i=0;i<10;i++){
  cout<<letras3[i]<<endl;
 }
 
 getch();
 return 0;
}
