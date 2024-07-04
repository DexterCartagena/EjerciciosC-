#include<iostream>
using namespace std;
int main()
{
    int x=1,c=0;
 
    while(1<=50)
    {
        if(x%2!=0)
        c=c+1; x=x+1;       
    }
    cout<<"TOTAL DE NUMEROS PARES SON:"<<c<<endl;
    return 0;
}
