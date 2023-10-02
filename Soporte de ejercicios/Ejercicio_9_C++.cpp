#include <iostream>
#include <stdlib.h>
#include <string>
#include <stdio.h>
#include <conio.h> 
#include <cstring>

using namespace std;
void titulo(int g, int e);
void final(int g, int e);

int main(){
	titulo(1,9);
	
	final(1,9);
}

void titulo(int g, int e){
	int i;
	cout<<"\n\n\t"<<char(220);
	for(i=1;i<50;i++){
		cout<<char(220);
	}
	cout<<char(220);
	cout<<"\n\t"<<char(186)<<"                             \t\t\t  "<<char(219);
	cout<<"\n\t"<<char(186)<<"\t            Bienvenido       \t\t  "<<char(186)<<"";
	cout<<"\n\t"<<char(186)<<"\t      GUIA "<<g<<" C++ - Ejercicio "<<e<<"\t\t  "<<char(186)<<"\n";
	cout<<"\t"<<char(186)<<"                             \t\t\t  "<<char(186)<<"\n";
	cout<<"\t"<<char(200);
	for(i=1;i<50;i++){
		cout<<char(175);
	}
	cout<<char(188);
	cout<<"\n\n";

long des;
int p,vlr;
		cout<<"\tAcontinuacion Ingrese los datos de ventas realizadas entre 0 y 100 como maximo \n\n";
			cout<<"\n\tIngrese el numero de productos vendidos: ";cin>>p;
			cout<<"\n\tIngrese el valor total de las ventas realizadas: ";cin>>vlr;
			if(p>=0&&p<=20){des=5;}
			if(p>=21&&p<=50){des=1;}
			if(p>=51&&p<=80){des=15;}
			if(p>=81&&p<=100){des=20;}	
			cout<<"\n\tEl numero de productos vendidos fue de "<<p<<" productos";
			cout<<"\n\tEl valor de los productos vendidos fue de: $"<<(p*vlr)<<"";
		cout<<"\n\tEl descuento ganado por el empleado es del "<<des<<"% que equivale a: $"<<((vlr*p)*des/100)<<"\n";}
void final(int g, int e){
	int i;
	cout<<"\n\t";
	system("PAUSE");
	system("CLS");
		cout<<"\n";
	cout<<"\t"<<char(220);
	for(i=1;i<51;i++){
		cout<<char(220);
	}
	cout<<char(220);
	cout<<"\n\t"<<char(219)<<"                                                  "<<char(186);
	cout<<"\n\t"<<char(179)<<" By:       Juan Sebastian Castillo Parra          "<<char(179);
	cout<<"\n\t"<<char(179)<<" Programa: ADSI                                   "<<char(179);
	cout<<"\n\t"<<char(179)<<" Ficha:    2341225                                "<<char(179);
	cout<<"\n\t"<<char(179)<<" Fecha:    Septiembre 2021                        "<<char(179);
	cout<<"\n\t"<<char(179)<<"                                                  "<<char(179);
	cout<<"\n\t"<<char(179)<<"     SENA Centro de Desarrollo Agroempresarial    "<<char(179);
	cout<<"\n\t"<<char(179)<<"                                                  "<<char(179);
	cout<<"\n\t"<<char(179)<<"           Ejercicio "<<e<<" Terminado                  "<<char(179);
	cout<<"\n\t"<<char(179)<<"                                                  "<<char(179);
	cout<<"\n\t"<<char(192);
	for(i=1;i<51;i++){
		cout<<char(175);
	}
	cout<<char(217);
	cout<<"\n\n";
	cout<<"\t";

}
	

