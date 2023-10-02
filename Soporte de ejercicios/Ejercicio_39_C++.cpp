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
	titulo(1,39);	
	final(1,39);
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
	
		string di,tu;
	float pag,tot,imp,er=0;
	int ti;
	cout<<"\tPara determinar el pago por cada concepto diligencie los siguientes datos\n";
	cout<<"\tSolo ingrese texto en minuscula\n\n\t";
	cout<<"\n\tIngrese los minutos que duro la llamada :\n\n\t";cin>>ti;
	cout<<"\n\tIngrese el dia que se realizo la llamada: ";cin>>di;
	cout<<"\n\tIngrese el horario vespertino, matutino o otro cuando realizo la llamada: ";cin>>tu;
	if(ti>0){
		if(ti<=5) pag=ti;	
		else{pag=5;
			ti=ti-5;
			if(ti<=3)pag=pag+(ti*0.8);
				else{
					pag=pag+(3*0.8);
					ti=ti-3;
					if(ti<=2)pag+(ti*0.7);
					else{
						pag=pag+(2*0.7);
						ti=ti-2;
						pag=pag+(ti*0.5);
					}
				}
			}	
		}else{
			cout<<"\n\tEl total a pagar es: 0$\n\t";}
			if(di=="dom"){
				imp=0.3;
					}else if(di=="lun"||di=="mar"||di=="mie"||di=="jue" ||di=="vie"){
				if(tu=="matutino")imp=0.15;
				else if(tu=="vespertino")imp=0.10;
				else imp=0;
				}else if(di=="sab"){
					imp=0;
				}else{
					cout<<"\n\tPor favor ingrese un dia de la semana\n\n";
					er=1;
					system("Pause");
					system("CLS");
					main();
				}if(er==0){
					cout<<"\n\tEl costo a pagar por la llamada fue de:    $"<<pag;	
					cout<<"\n\tEl impuesto a pagar por la llamada fue de: %"<<imp;	
					cout<<"\n\tEl total a pagar por la llamada fue de:    $"<<pag+(pag*imp)<<"\n\n";	
					}
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
	
	
	
	
	
	
	
	
