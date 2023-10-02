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
	titulo(1,41);	
	final(1,41);
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
	
	float cc,tot,c;
	int nc;
	cout<<"\tConsultorio del Dr. Lorenzo T. Mata Lozano\n";
	cout<<"\tingrese los datos para saber el costo\n\n\t";
	cout<<"\n\tIngrese el numero de citas que ha realizado:\n\n\t";
	cin>>nc;
	if(nc<=3){
		cc=200.00;
		tot=cc*nc;
	}else if(nc==4){
		cc=150.00;
		tot=cc*nc+cc;
	}else if(nc==5){
		cc=150.00;
		tot=cc*nc+cc;
	}else if(nc==6){
		cc=100.00;
		tot=cc*nc+cc*4;
	}else if(nc==7){
		cc=100.00;
		tot=cc*nc+cc*4;
	}else if(nc==8){
		cc=100.00;
		tot=cc*nc+cc*4;
	}else if(nc>=9){
		cc=50.00;
		tot=cc*nc+cc*16;
	}else{
		cc=50.00;
		tot=cc*nc+cc*17;
		}
		cout<<"\n\tEl costo que paga la persona por esta cita es de: $"<<cc;	
		cout<<"\n\tEl monto total que ha pagado por las citas es de: $"<<tot<<"\n\n";
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
	
	
	
	
	
	
	
	
