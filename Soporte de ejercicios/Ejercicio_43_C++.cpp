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
	titulo(1,43);	
	final(1,43);
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
	
	float la,ac,nc,c;
	int tt;
	cout<<"\tPara determinar el nuevo limite de credito digite los siguientes datos \n";
	cout<<"\n\tTarjeta tipo 1\n\tTarjeta tipo 2\n\tTarjeta tipo 3\n\tOtro tipo de tarjeta\n\t";
	cout<<"\n\tDigite el tipo de tarjeta:\n\n\t";
	cin>>tt;
	cout<<"\n\tIngrese el cupo de credito que posee actualmente:\n\n\t";
	cin>>la;	
	if(tt==1){
		c=25;
		nc=(c/100)*la;
		ac=nc+la;
			}
	else if(tt==2){
		c=35;
		nc=(c/100)*la;
		ac=nc+la;
			}
	else if(tt==3){
		c=40;
		nc=(c/100)*la;
		ac=nc+la;
			}
	else if(tt>3){
		c=50;
		nc=(c/100)*la;
		ac=nc+la;	
	}
			cout<<"\n\tEl aumento del credito es de "<<c<<"% que equivale a: $"<<nc;	
			cout<<"\n\tEl nuevo limite del credito de la tarjeta es de: $"<<ac<<"\n";
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
	
	
	
	
	
	
	
	
