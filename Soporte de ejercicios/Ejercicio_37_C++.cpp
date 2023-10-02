#include <iostream>
#include <stdlib.h>
#include <string>
#include <stdio.h>
#include <conio.h>
#include <math.h>
#include <cmath>
using namespace std;
void titulo(int g, int e);
void final(int g, int e);
int main(){
	titulo(1,37);	
	final(1,37);
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
	string ta;
	float tm,s,p,o,ga;
	int k;
	cout<<"\tValide todos los datos para saber cual es la ganacia obtenida\n\n\t";
	cout<<"Escriba a o b en minuscula\t";
	cout<<"\n\tIngrese el tipo de uva: \n\n\t";
	cin>>ta;
		cout<<"\n\tEscriba 1 o 2\t";
		cout<<"\n\tIngrese el tamaño de uva:\n\n\t";
	cin>>tm;
		cout<<"\n\tIngrese el valor de la uva:\n\n\t";
	cin>>p;
		cout<<"\n\tIngrese la cantidad de kilos:\n\n\t";
	cin>>k;
	if((ta=="a")and(tm==1)){
		s=20;
		o=k*s+p*k;
		ga=p+s*k;
	}
	if((ta=="a")and(tm==2)){
		s=30;
			o=k*s+p*k;
			ga=p+s*k;
	}
	if((ta=="b")and(tm==1)){
		s=30;
			o=k*s+p*k+s*k-k*p;
			ga=p-s*-k;
	}
	if((ta=="b")and(tm==2)){
		s=50;
			o=k*s+p*k+s*k-k*p;
			ga=p-s*-k;
	}
	cout<<"\n\tEl valor de la uva tipo "<<ta<<" y tamaño "<<tm<<" es de:             $"<<o; 
	cout<<"\n\tLa ganancia obtenida de la uva tipo "<<ta<<" y tamaño "<<tm<<" es de: $"<<ga<<"\n"; 
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
	
	
	
	
	
	
	
	
