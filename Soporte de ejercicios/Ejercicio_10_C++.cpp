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
	titulo(1,10);
	
	final(1,10);
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

long pre,des;
int color,modelo;
char marca[10];
		cout<<"\tAcontinuacion Ingrese los datos que el concesionario requiere\n\n";
			cout<<"\n\tIngrese la marca del auto: ";cin>>marca;
			cout<<"\n\t1.Verde\n\t2.rojo\n\t3.Otro color\n";
			cout<<"\n\tIngrese el color del auto: ";cin>>color;
			cout<<"\n\tIngrese el modelo del auto: ";cin>>modelo;
			if(color==1){
			pre = 65500000;
			des = 15;}	
			if(modelo<1990){
			pre = 75500000;
			des = 20;}	
			if(modelo>1995&&color==2){
			pre = 85500000;
			des = 10;}
			if(color>=3){
			pre = 90000000;
			des = 0;}
			cout<<"\n\n\tLa marca del auto es:                "<<marca;
			cout<<"\n\tEl valor del auto es:                $"<<pre;
			cout<<"\n\tEl porcentaje del descuento es del:  "<<((des*100)/100)<<"%";
			cout<<"\n\tEl descuento del auto es de:         $"<<((pre*des)/100)<<"\n";
		cout<<"\n\tEl valor total del auto es: "<<char(175)<<" $"<<((-pre*des)/100+pre)<<" "<<char(174)<<"\n";}
void final(int g, int e){
	int i;
	cout<<"\n";
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
	

