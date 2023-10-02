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
	titulo(1,44);	
	final(1,44);
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
	
	float c;int a,x,y;char n;string t;
		cout<<"\tSupermercado SM\n\n\t";
			cout<<"Ingrese el valor de las compras que ha realizado:\n\n\t$";cin>>c;
			if(c>25000.00){t="\n\tFelicidades acaba de ganar el premio de la balota ";
			cout<<"\n\tFelicidades por compras mayores 25000.00 acabas de entrar a un sorteo\t";
			cout<<"\n\tPara participar valide los siguientes datos\n\n\t";
			cout<<"Ingrese su sexo \n\n\tH\tM\t";cin>>n;
		 	if(n=='H'){
			cout<<"\n\tAcontinuacion elija 1 de las tres balotas para saber que premio gano\n\tSolo tiene dos intentos para elegir una";
			cout<<"\n\n\t15\t29\t31\t";cin>>x;
			switch(x){
				case (15):cout<<t<<x<<" que es un Un mercado de $500000\n";break;
				case (29):cout<<t<<x<<" que es Una consola de video juegos\n";break;
				case (31):cout<<t<<x<<" que es un Una moto\n";break;			
			default:cout<<"\n\tPerdio el premio por no seleccionar una de las balotas mostradas\n\n";
				cout<<"\n\tGracias por su participacion vuelva pronto\n\n";break;}}
			if(n=='M'){
			cout<<"\n\tAcontinuacion elija 1 de las tres balotas para saber que premio gano\n\tSolo tiene dos intentos para elegir una";
			cout<<"\n\n\t17\t23\t35\t";cin>>y;
			switch(y){
				case (17):cout<<t<<y<<" que es un Un mercado de $600000\n";break;
				case (23):cout<<t<<y<<" que es un Un set completo de maquillaje\n";break;
				case (35):cout<<t<<y<<" que es un Un celular de nueva generacion\n";break;			
			default:cout<<"\n\tPerdio el premio por no seleccionar una de las balotas mostradas\n\n";
			cout<<"\n\tGracias por su participacion vuelva pronto\n\n";break;}}}else{
		cout<<"\n\tEl total de compras fue de $"<<c<<" gracias por preferirnos vuelva pronto\n";}}
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
	
	
	
	
	
	
	
	
