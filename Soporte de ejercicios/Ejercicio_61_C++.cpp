#include <iostream>
#include <stdlib.h>
#include <string>
#include <stdio.h>
#include <conio.h>

using namespace std;
void titulo(int g, int e);
void final(int g, int e);
int v=0,c=0,t=0;
int main(){
	titulo(1,61);
	
	final(1,61);
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
    char opc;
	cout<<"\tSeleccione la operacion que desee hacer en la registradora \n";
	cout<<"\n\t1.Registrar\n\t2.Mostrar\n\t3.Salir\n\n\t";
	cin>>opc;
	switch (opc){
	case('1'):system("CLS");
			cout<<"\n\n\tRegistro de valor\n";
			cout<<"\n\n\tIngrese el valor del producto: $";
			cin>>v;
			cout<<"\tIngrese la cantidad de items:";
			cin>>c;
			t=t+(v*c);
			system("CLS");
			main();
			break;
	case('2'):	
			system("CLS");
			cout<<"\n\n\tTotal de la caja es de: $"<<t<<"\n\n\n\t";
			system("PAUSE");
			system("CLS");
			main();
			break;
	case('3'):
			final;
			break;
		default:
			cout<<"\n\t";
			cout<<"Opcion no valida vuelva a intentar";
			cout<<"\n\n\t";
			system("PAUSE");
			system("CLS");
			main();	
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
	
