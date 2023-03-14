

#include<iostream> //libreria para entradas y salidas de datos

using namespace std;

int main(){

	float practica, teorica, participacion, final=0;

   cout<<"Digite la calificacion de practica: "; cin>>practica;
   cout<<"Digite la calificacion teorica: "; cin>>teorica;
   cout<<"Digite la calificacion de participacion: "; cin>>participacion;
  
  
practica *=  0.30; // practica = practica * 0.30
teorica *= 0.60;
participacion *= 0.10;

final = practica + teorica + participacion;
   

   cout<<"\nLa calificacion final es: "<<final;
 
   
   
   return 0;
}
