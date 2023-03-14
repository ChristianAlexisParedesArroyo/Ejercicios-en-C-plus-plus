


#include<iostream> //libreria para entradas y salidas de datos

using namespace std;

int main(){

	float alum1, alum2, alum3, alum4, prom;

   cout<<"Digite la calificacion del primer alumno: "; cin>>alum1;
   cout<<"Digite la calificacion del segundo alumno: "; cin>>alum2;
   cout<<"Digite la calificacion del tercer alumno: "; cin>>alum3;
   cout<<"Digite la calificacion del cuarto alumno: "; cin>>alum4;
  
  
prom = (alum1 + alum2 + alum3 + alum4)/4;
   

   cout<<"\nEl promedio de los 4 alumnos es: "<<prom;
 
   
   
   return 0;
}
