#include <iostream>
#include <stdlib.h>
#include <string>
#include <stdio.h>
#include <conio.h>

using namespace std;
void titulo(int g, int e);
void final(int g, int e);

int main(){
	titulo(1,5);
	
	final(1,5);
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



float a,b,c;
	cout<<"\tIngres el valor de las notas de las 3 notas del estudiante\n\n";
	cout<<"\tIngrese el valor de la nota 1: ";
	cin>>a;
	cout<<"\tIngrese el valor de la nota 2: ";
	cin>>b;
	cout<<"\tIngrese el valor de la nota 3: ";
	cin>>c;
	if ((a>=0)&(a<=5)){
	cout<<"\n\t"<<a<<" Es el Valor de la nota 1 \n";
	}
	else 
	{
	cout<<"\n\tNo se encuentra entre 5 y 0 \n";
	}
	if ((b>=0)&(b<=5)){
	cout<<"\n\t"<<b<<" Es el Valor de la nota 2 \n";
	}
	else 
	{
	cout<<"\n\tNo se encuentra entre 5 y 0 \n";
	}
	if ((c>=0)&(c<=5)){
	cout<<"\n\t"<<c<<" Es el Valor de la nota 3 \n";
	}
	else 
	{
	cout<<"\n\tNo se encuentra entre 5 y 0 \n";
	}
	if(((a>=0)&(a<=5))&((b>=0)&(b<=5))&((c>=0)&(c<=5))){
		cout<<"\n\tEl promedio de su nota final es: " <<(a+c+b)/(3)<<"\n";
	}
	else
	{
	 cout<<"\n\tEl promedio de su nota final es: 0\n ";
	}
	cout<<"\tPara pasar su promedio debe ser mayor a 3.5 \n";
		if((a+b+c)/(3)>=3.5)
		{
		if((a+b+c)/(3)<=5)
		{
		cout<<"\n\tEl estudainte aprobo\n ";
		}
		}
		else 
		{
		cout<<"\n\tEl estudainte reprobo\n ";
		}
		if((a+b+c)/(3)>=6)
		{
		cout<<"\n\tEl estudainte reprobo\n ";
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
	

