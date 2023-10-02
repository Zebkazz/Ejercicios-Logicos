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
	titulo(1,40);	
	final(1,40);
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
	
	string t;
	float cp,co,ck,pag,tot,a,b,c;
	int km,npr,np;
	cout<<"\tPara determinar el costo total del recorrido ingrese los siguientes datos\n";
	cout<<"\tSolo ingrese texto en minuscula\n\n\t";
	cout<<"\n\tSeleccione el tipo de autobus:\n\n\t";
	cin>>t;
	cout<<"\n\tIngrese los kilometros por recorrer:\n\n\t";
	cin>>km;
	cout<<"\n\tIngrese el numero de personas:\n\n\t";
	cin>>npr;
		a=2.0;
	if((t=="a")and(npr>=20)){
		cp=km*a;
		tot=cp*npr;
		co=tot/npr;
		ck=tot/km;
		}
		if((t=="b")and(npr>=20)){
		a=2.5;
		cp=km*a;
		tot=cp*npr;
		co=tot/npr;
		ck=tot/km;
		}
		a=3.0;
		if((t=="c")and(npr>=20)){
		cp=km*a;
		tot=cp*npr;
		co=tot/npr;
		ck=tot/km;
		}
	cout<<"\n\tLas personas para presuepuestar es de: "<<npr;
	cout<<"\n\tEl costo a pagar por persona es de:    $"<<co;
	cout<<"\n\tEl costo por kilometro es de:          $"<<ck<<"\n";
	cout<<"\tEl costo total de "<<npr<<" personas es de:   $"<<tot<<"\n";
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
	
	
	
	
	
	
	
	
