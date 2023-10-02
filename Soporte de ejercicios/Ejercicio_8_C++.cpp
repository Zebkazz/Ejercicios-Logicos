#include <iostream>
#include <stdlib.h>
#include <string>
#include <stdio.h>
#include <conio.h> 
#include <cstring>

using namespace std;
void titulo(int g, int e);
void final(int g, int e);

int main(){
	titulo(1,8);
	
	final(1,8);
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
	cout<<"\n\n";

float des;
int col,a,vlr;
string d;
		cout<<"\tAcontinuacion seleccione el color de la rosa: \n\n";
			cout<<"\t1.Rojo\n\t2.Blanco\n\t3.Negro\n\t4.Otro\n\n";
			cout<<"\n\tIngrese el color de la rosa: ";cin>>col;
			cout<<"\n\tIngrese el numero de docenas: ";cin>>a;
			if(col==1){des=0.1;vlr=4000;d="10%";
				}else if(col==2){des=0.08;vlr=5000;d="8%";
					}else if(col==3){des=0;vlr=18000;d="0%";
						}else if(col==4){des=0.02;vlr=6000;d="2%";
					}else{cout<<"\nNo hay mas colores disponibles\n";
				}if(col<5){cout<<"\n\tEl precio de "<<a<<" docenas de rosas es de: $"<<(vlr*a)<<"\n";
			cout<<"\tEl descuento de las rosas de color rojo es del "<<d<<" que equivale a $"<<(vlr*a)*(des)<<"\n";
		cout<<"\tEl precio total a pagar con descuento es de:$"<<((vlr*a)-(vlr*a*des))<<"\n";}}
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
	cout<<"\n\t"<<char(179)<<"           Ejercicio "<<e<<" Terminado                  "<<char(179);
	cout<<"\n\t"<<char(179)<<"                                                  "<<char(179);
	cout<<"\n\t"<<char(192);
	for(i=1;i<51;i++){
		cout<<char(175);
	}
	cout<<char(217);
	cout<<"\n\n";
	cout<<"\t";

}
	

