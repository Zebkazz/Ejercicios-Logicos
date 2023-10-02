#include <iostream>
#include <stdlib.h>
#include <string>
#include <stdio.h>
#include <conio.h>
using namespace std;
void titulo(int g, int e);
void final(int g, int e);
int main(){
	titulo(1,14);	
	final(1,14);
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
	
	int nu,p,suma=0,rsuma=0,resta=0,rresta=0,cpa=0,cim=0,pr=0,cn=1;
cout<<"\n\tIngrese un numero mayor que 10 para luego escribir ese nuemro de veces un numero: \n\n\t";cin>>nu;
if(nu>=10){
while(nu>=cn){
    	cout<<"\n\tIngrese un numero:"<<cn<<": \n\n\t";
		cin>>p;
	if(p%2==0){
		cpa++;
		suma=suma+p;
		resta=p-resta;
	}else{
		cim=cim+1;
		rsuma=rsuma+p;
		rresta=p-rresta;
		}
		cn=cn+1;
		}
		}
cout<<"\n\tLa cantidad de pares es:   "<<cpa;
cout<<"\n\tLa suma de pares es de:    "<<suma;
cout<<"\n\tLa resta de pares es de:   "<<resta;
cout<<"\n\tLa cantidad de impares es: "<<cim;
cout<<"\n\tLa suma de impares es de:  "<<rsuma;
cout<<"\n\tLa resta de impares es de: "<<rresta;
pr=cpa+cim;
cout<<"\n\tEl promedio de pares es:   "<<cpa*100/pr<<" %";
cout<<"\n\tEl promedio de impares es: "<<cim*100/pr<<" %";
cout<<"\n\tLa diferencia de sumas entre impares y pares es de: "<<suma-rsuma<<"\n\n";
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
	
	
	
	
	
	
	
	
	
	
