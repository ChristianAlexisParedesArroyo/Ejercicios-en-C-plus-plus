


#include<iostream> //libreria para entradas y salidas de datos
#include<math.h>

using namespace std;

int main(){

	float x, y, res=0;

   cout<<"Digite el valor de x: "; cin>>x;
   cout<<"Digite el valor de y: "; cin>>y;
   
   res = (sqrt(x))/(pow(y,2)-1);
   

   cout<<"\nEl resultado es: "<<res;
 
   return 0;
}
