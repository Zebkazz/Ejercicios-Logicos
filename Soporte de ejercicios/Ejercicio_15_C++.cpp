#include <iostream>
#include <stdlib.h>
#include <string>
#include <stdio.h>
#include <conio.h>
using namespace std;
void titulo(int g, int e);
void final(int g, int e);
int main(){
	titulo(1,15);	
	final(1,15);
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
	cout<<"\n\n\n";
int a;	
float b,c,d,po;
cout<<"\n\tAcontinuacion ingrese tres valores correspondientes a cada operacion\n\n";
cout<<"\t1.J+K\n\t2.J%k\n\t3.J/k\n\t4.J+k+1\n\t5.J*k*1\n\n";
cout<<"\tIngrese el valor de seleccion: ";cin>>a;
cout<<"\tIngrese el valor 1: ";cin>>b;
cout<<"\tIngrese el valor 2: ";cin>>c;
cout<<"\tIngrese el valor 3: ";cin>>d;
switch (a){
	case(1):cout<<"\n\tEl resultado de la operacion 1 es: "<<b+c;break;
	case(2):po=b*(((float) c)/((float) 100));
	cout<<"\n\tEl resultado de la operacion 2 es: "<<po;break;
	case(3):if(c==0){
	cout<<"\n\tDivision por cero imposible";
	}else{
	cout<<"\n\tEl resultado de la operacion 3 es: "<<b/c;break;}
	case(4):cout<<"\n\tEl resultado de la operacion 4 es: "<<b+c+1;break;
	case(5):cout<<"\n\tEl resultado de la operacion 5 es: "<<b*c*1;break;
	default:cout<<"\n\tOpcion no valida";}}
void final(int g, int e){
	int i;
	cout<<"\n\n\t";
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
	cout<<"\n\t"<<char(179)<<"           Ejercicio "<<e<<" Terminado                 "<<char(179);
	cout<<"\n\t"<<char(179)<<"                                                  "<<char(179);
	cout<<"\n\t"<<char(192);
	for(i=1;i<51;i++){
		cout<<char(175);
	}
	cout<<char(217);
	cout<<"\n\n";
	cout<<"\t";
}
	
	
	
	
	
