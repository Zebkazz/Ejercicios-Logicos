#include <iostream>
#include <stdlib.h>
#include <string>
#include <stdio.h>
#include <conio.h>
#include <ostream>
using namespace std;
void titulo(int g, int e);
void final(int g, int e);
string l;
float num1,num2,s,b,h1,m1;
double po;
int main(){
	titulo(1,48);	
cout<<"\tAcontinuaccion podra ingresar los siguientes datos";
cout<<"\n\tEscriba la opcion que desee ejecutar\n\n";
cout<<"\tEscriba el genero para realizar el registro:\n\n\tMasculino  Femenino     ==>Salir\n\n\t";
cin>>l;
if(l=="Masculino"or l=="MASCULINO"or l=="masculino"){
		system("CLS");
		titulo(1,48);
		cout<<"\n\tIngrese la cantidad de personas de ese genero:\n\n\t";
		cin>>num1;
		h1=h1+num1;
		cout<<"\n\t";
		system("CLS");
		main();
		}
	if(l=="Femenino"or l=="FEMENINO"or l=="femenino"){
		system("CLS");
		titulo(1,48);
		cout<<"\n\tIngrese la cantidad de personas de ese genero:\n\n\t";
		cin>>num2;
		m1=m1+num2;
		cout<<"\n\t";
		system("PAUSE");
		system("CLS");
		main();
	}
	if(l=="Salir"or l=="SALIR" or l=="salir"){
		cout<<"\n\t";
		system("CLS");
		system("PAUSE");
		titulo(1,48);
		}
		cout<<"\n\tEl total de Femeninas es de:      "<<m1<<"\n";	
		cout<<"\tEl total de Masculinos es de:     "<<h1<<"\n";
		b=h1+m1;
		cout<<"\tEl total de personas es de:       "<<h1+m1<<"\n";
		po=100*m1/b;
		cout<<"\tEl promedio de Femeninas es de:   "<<po<<"%\n";
		cout<<"\tEl promedio de Masculino es de:   "<<100-po<<"%\n\t";
		final(1,48);
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
}
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
	
	
	
	
	
	
	
	
