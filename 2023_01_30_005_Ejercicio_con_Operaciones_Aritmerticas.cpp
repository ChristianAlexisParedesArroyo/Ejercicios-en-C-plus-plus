

#include<iostream> //libreria para entradas y salidas de datos

using namespace std;

int main(){

	float precio, iva=0.16, total=0;

   cout<<"Digite el precio del producto: "; cin>>precio;
   
   iva= precio * iva;
   total = precio + iva;
   
   cout<<"\nEl precio con iva es: "<<total;
   
   
   return 0;
}
