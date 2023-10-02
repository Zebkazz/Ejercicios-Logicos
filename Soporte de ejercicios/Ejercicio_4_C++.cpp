#include <iostream>
#include <stdlib.h>
#include <string>
#include <stdio.h>
#include <conio.h>

using namespace std;
void titulo(int g, int e);
void final(int g, int e);

int main(){
	titulo(1,4);
	
	final(1,4);
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
int a,b,c;

	cout<<"\n\tIngrese tres valores enteros para ordenarlos de mayor a menor\n\n";
	cout<<"\tIngrese el valor 1: ";
	cin>>a;
		cout<<"\tIngrese el valor 2: ";
	cin>>b;
		cout<<"\tIngrese el valor 3: ";
	cin>>c;
	if(a>b)
	{
		if(b>c)
		{
			cout<<"\n"<<a<<" - "<<b<<" - "<<c<<"\n";
		} 
		else if(a>c)
		{
			cout<<"\n"<<a<<" - "<<c<<" - "<<b<<"\n";
		}
		else
		{
			cout<<"\n"<<c<<" - "<<a<<" - "<<b<<"\n";	
		}

	}
	else
	{
		if(a>c)
		{
			cout<<"\n"<<b<<" - "<<a<<" - "<<c<<"\n";	
		}
		else if (c>b)
		{	
			cout<<"\n"<<c<<" - "<<b<<" - "<<a<<"\n";	
		}
		else
		{
			cout<<"\n"<<b<<" - "<<c<<" - "<<a<<"\n";
		}
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
	

