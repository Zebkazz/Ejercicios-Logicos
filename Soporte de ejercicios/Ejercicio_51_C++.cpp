#include <iostream>
#include <stdlib.h>
#include <string>
#include <stdio.h>
#include <conio.h>
#include <time.h>
#include <math.h>

using namespace std;
void titulo(int g, int e);
void final(int g, int e);
int main(){
	titulo(1,51);
	int i,cq=0,sq=0,pq=0,cd=0,sd=0,pd=0,c=0,s=0,p=0,can;
	int v[15]={100,50,305,430,250,145,550,720,630,809,795,636,946,220};
	//int v[15];
	srand (time(NULL));
	system("CLS");
	titulo(1,51);
	can=15;
	for(i=0;i<can;i++){
		v[i]= rand()%990+10;
		//cout<<"\n\tIngrese el valor "<<i<<": ";
		//cin>>v[i]; 
		if(v[i]>550){
			sq=sq+v[i];
			cq++;
			}else if(v[i]>200){
				sd=sd+v[i];
				cd++;
				}else{
					s=s+v[i];
					c++;
				}
			}
		pq=sq/cq;
		pd=sd/cd;
		p=s/c;
		cout<<"\n\tTotal de valores\n\n";
		for(i=0;i<can;i++){
		cout<<"\t"<<v[i];
		}	
		cout<<"\n\n\tValores mayores a 550:\n\n";
	for(i=0;i<can;i++){
		if(v[i]>550) cout<<"\t"<<v[i];
	}
		cout<<"\n\n\tValores entre 200 y menores o iguales a 550:\n\n";
	for(i=0;i<can;i++){
		if(v[i]>200 && v[i]<=550)cout<<"\t"<<v[i];
	}
		cout<<"\n\n\tValores entre 0 y menores o iguales a 200:\n\n";
	for(i=0;i<can;i++){
		if(v[i]>0 && v[i]<=200)cout<<"\t"<<v[i];
	}
		cout<<"\n\n\tLa cantidad de los valores mayores a 550 es de:         "<<cq;
	cout<<"\n\tLa cantidad de los valores mayores a 201 o 550 es de:   "<<cd;
	cout<<"\n\tLa cantidad de los valores menores a 200 es de:         "<<c;
	cout<<"\n\tEl promedio de los valores mayores a 550 es de:         "<<pq;
	cout<<"\n\tEl promedio de los valores mayores a 201 o 550 es de:   "<<pd;
	cout<<"\n\tEl promedio de los valores mayores a 550 es de:         "<<p<<"\n";
	
final(1,51);
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
	
