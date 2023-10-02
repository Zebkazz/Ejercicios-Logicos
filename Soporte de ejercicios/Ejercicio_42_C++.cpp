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
	titulo(1,42);	
	final(1,42);
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
	
	float co;
	int nz,pe,n;
	cout<<"\tPara determinar el cobro de la entrega valide los siguientes datos \n";
	cout<<"\n\t 1.America del norte\n\t 2.America de central\n\t 3.America del sur\n\t 4.Europa\n\t 5.Asia\n\t";
	cout<<"\n\tIngrese la zona a donde se dirije el paquete:\n\n\t";
	cin>>nz;
	cout<<"\n\tIngrese el peso del paquete en GRAMOS:\n\n\tg ";
	cin>>pe;
	switch(nz){
	
	case(1):if(pe<=5000){
			n=11.00;
			co=pe*n;
			}break;
	case(2):if(pe<=5000){
			n=10.00;
			co=pe*n;
			}break;
	case(3):if(pe<=5000){
			n=12.00;
			co=pe*n;
			}break;
	case(4):if(pe<=5000){
			n=24.00;
			co=pe*n;
			}break;
	case(5):if(pe<=5000){
			n=27.00;
			co=pe*n;
			}break;
			}
			if(pe<=5000){
				cout<<"\n\tEl costo de la entrega a la zona "<<nz<<" es de: $"<<co<<"\n";
			}else{
				cout<<"\n\tNo se puede realizar la entrega porque exede el peso maximo de 5kg\n";	
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
	
	
	
	
	
	
	
	
