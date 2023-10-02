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
	titulo(1,28);	
	final(1,28);
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
	
	float x1,x2,y1,y2,x,y,h;
	cout<<"\tAcontinuacion ingrese los datos para saber la distancia entre los puntos\n";
	cout<<"\tIngrese solo valores positivos\n\n\t ";
	cout<<"\n\tIngrese el valor de la abscisas 1:\n\n\t ";
	cin>>x1;
	cout<<"\n\tIngrese el valor de la ordenada 1:\n\n\t ";
	cin>>y1;
	cout<<"\n\tIngrese el valor de la abscisas 2:\n\n\t ";
	cin>>x2;
	cout<<"\n\tIngrese el valor de la ordenada 2:\n\n\t ";
	cin>>y2;
	if(x1>0 and x2>0 and y1>0 and y2>0){
	x=x2-x1;
	y=y2-y1;
	h=sqrt(x*x+y*y);
	}
	cout<<"\n\tEl cateto de las abscisas es de:      "<<x;
	cout<<"\n\tEl cateto de las ordenadas es de:     "<<y;
	cout<<"\n\tLa distancia entre los puntos es de:  "<<h<<"\n";
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
	
	
	
	
	
	
	
	
