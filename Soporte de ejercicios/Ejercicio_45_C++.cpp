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
void s();
void r();
void m();
void d();
int main(){
	titulo(1,45);
	int opcion;
	cout<<"\t\t\tMenu de opciones";
	cout<<"\n\n\t1.Suma\n\t2.resta\n\t3.multiplicacion\n\t4.Divicion\n\t5.Salir\n\n\t";	
	cin>>opcion;
		switch(opcion){
			case(1):
			system("CLS");
			titulo(1,45);
			s();
			break;
			case(2):
			system("CLS");
			titulo(1,45);
			r();
			break;
			case(3):
			system("CLS");
			titulo(1,45);
			m();
			break;
			case(4):
			system("CLS");
			titulo(1,45);
			d();
			break;
			case(5):
			final;
			break;
			default:
			system("CLS");
			cout<<"\n\tOpcion no valida\n\n";
			system("PAUSE");
			system("CLS");
			main();
			break;
	}
	final(1,45);
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
	}
void s(){
	int a,b;
	cout<<"\n\tAcontinuacion ingrese dos valores para ser sumados";
	cout<<"\n\n\tIngrese un numero \n\n\t";
	cin>>a;
	cout<<"\n\tIngrese un numero \n\n\t";
	cin>>b;
	cout<<"\n\tEl total de la suma es de "<<a+b<<"\n\n\t";
	system("PAUSE");
	system("CLS");
	main();
}
void r(){
	int a,b;
	cout<<"\n\tAcontinuacion ingrese dos valores para ser sumados";
	cout<<"\n\n\tIngrese un numero \n\n\t";
	cin>>a;
	cout<<"\n\tIngrese un numero \n\n\t";
	cin>>b;
	cout<<"\n\tEl resultado de la resta es de "<<a-b<<"\n\n\t";
	system("PAUSE");
	system("CLS");
	main();
}
void m(){
		int a,b;
	cout<<"\n\tAcontinuacion ingrese dos valores para ser sumados";
	cout<<"\n\n\tIngrese un numero \n\n\t";
	cin>>a;
	cout<<"\n\tIngrese un numero \n\n\t";
	cin>>b;
	cout<<"\n\tEl resultado de la multiplicacion es de "<<a*b<<"\n\n\t";
	system("PAUSE");
	system("CLS");
	main();
}
void d(){
		int a,b;
	cout<<"\n\tAcontinuacion ingrese dos valores para ser sumados";
	cout<<"\n\n\tIngrese un numero \n\n\t";
	cin>>a;
	cout<<"\n\tIngrese un numero \n\n\t";
	cin>>b;
	if(b==0){
		cout<<"\n\tDivision por cero imposible\n\n\t";
	}else{
		cout<<"\n\tEl resultado de la division es de "<<a/b<<"\n\n\t";
	}
	system("PAUSE");
	system("CLS");
	main();
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
	
	
	
	
	
	
	
	
