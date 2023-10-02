#include <iostream>
#include <stdlib.h>
#include <string>
#include <stdio.h>
#include <conio.h>
#include <math.h>
#include <time.h>
#include <cmath>
using namespace std;
void titulo(int g, int e);
void final(int g, int e);
void mosmat(float m[5][5],int f,int c);
void carmat(float m[5][5],int f,int c);
int main(){
	titulo(1,69);
	int i,f=5,c=5;
	float m[5][5];
	carmat(m,f,c);
	cout<<"\tMatriz completa\n\n";
	mosmat(m,f,c);
	cout<<"\tMatriz Aprobados\n\n";
		for(int f=0;f<5;f++){
		for(int c=0;c<5;c++){
			if(m[f][c]>=3.5)cout<<"\t"<<m[f][c];else cout<<"\t ";
}
cout<<"\n\n";
}
	final(1,69);
}
void mosmat(float m[5][5],int ft,int ct){
	srand(time(NULL));
	for(int f=0;f<ft;f++){
	for(int c=0;c<ct;c++){
		cout<<"\t"<<m[f][c];
		}
		cout<<"\n\n";
	}	
}
void carmat(float m[5][5],int ft,int ct){
	srand(time(NULL));
	for(int f=0;f<ft;f++){
	for(int c=0;c<ct;c++){
		float h=(rand()%49+11);
		//cout<<"Ingrese el valor de la nota "<<c<<": ";
		//cin>>m[f][c];
		m[f][c]=h/10;
		}
	}	
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
	
	
	
	
	
	
	
	
