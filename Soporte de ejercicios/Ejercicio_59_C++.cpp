#include <iostream>
#include <stdlib.h>
#include <string>
#include <stdio.h>
#include <conio.h>
using namespace std;
void titulo(int g, int e);
void final(int g, int e);
int v;
float n,t1,t2,t3,a1,a2,a3,a,b,c,cn,tt;
int main(){
	titulo(1,59);
	cout<<"\tTienda Tiki Taka, Ingrese los datos para seber el total de ventas\n";
	cout<<"\tIngrese el numero de ventas:\n\n\t";
	cin>>n;
	cout<<"\n";
	for(cn=1;cn<=n;cn++){
		cout<<"\tIngrese el valor de la venta "<<cn<<": ";
		cin>>v;
		tt=tt+v;
	if(v>1000){a1++;
		while(a<a1){
			t1=t1+v;
			a++;
			}}if(v>500 and v<1000){
				a2++;
				while(b<a2){
				t2=t2+v;
				b++;
					}}if(v>0 and v<=500){
						a3++;
						while(c<a3){
						t3=t3+v;
						c++;
}}} cout<<"\n\n\tEl total de ventas tipo A fue de:        "<<a;
	cout<<"\n\tEl total de ventas tipo B fue de:        "<<b;
	cout<<"\n\tEl total de ventas tipo C fue de:        "<<c;
	cout<<"\n\tLas ventas realizadas del tipo A fue de: "<<t1<<"$";
	cout<<"\n\tLas ventas realizadas del tipo B fue de: "<<t2<<"$";
	cout<<"\n\tLas ventas realizadas del tipo C fue de: "<<t3<<"$\n";
	cout<<"\n\tEl total de ventas fue de:        	 "<<tt<<"$\n";
	
	final(1,59);
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
	
	
	
	
	
	
	
	
