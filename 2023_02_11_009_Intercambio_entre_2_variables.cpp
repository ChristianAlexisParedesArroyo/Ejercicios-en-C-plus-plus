

#include<iostream> //libreria para entradas y salidas de datos

using namespace std;

int main(){

	int x, y, aux;

   cout<<"Digite el valor de x: "; cin>>x;
   cout<<"Digite el valor de y: "; cin>>y;


/*
x=10
y=5
*/
   
   aux = x; 
   x = y;
   y = aux;
   
   
/*
x=5
y=10
*/
   
   

   cout<<"\nEl nuevo valor de x es: "<<x;
   cout<<"\nEl nuevo valor de y es: "<<y;
   
   
   return 0;
}
