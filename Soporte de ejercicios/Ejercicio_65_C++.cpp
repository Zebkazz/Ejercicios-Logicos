#include <iostream>
#include <stdlib.h>
#include <string>
#include <stdio.h>
#include <conio.h>
using namespace std;
void titulo(int g, int e);
void final(int g, int e);
int main(){
	int i,can,m,cp=0,cn=0,s,sp=0,sn=0,nM=0,nm=0;
	can=100;
	int v[can],p[can],n[can];
	system("CLS");
	titulo(1,65);
	cout<<"\tIngrese un numero mayor que 10 y menor que "<<can<<": ";
	cin>>m;
	can=m;
	if(m>=10 and m<=can){
		for(i=0;i<m;i++){
			s=rand()%2+1;
			if(s==2)s=-1;else s=1;
				v[i]=(rand()%98+1)*s;
					if(v[i]>=0){
						p[cp]=v[i];
						sp=sp+v[i];
						if(v[i]>nM)nM=v[i];
						cp++;
					}else{
						n[cn]=v[i];
						sn=sn+v[i];
						if(v[i]<nm)nm=v[i];
						cn++;
			}
		}
	cout<<"\n\tvectores totales\n\n";
	for(i=0;i<m;i++){
		cout<<"\t("<<v[i]<<")";
	}
	cout<<"\n\n\tvectores Positivos\n\n";	
	for(i=0;i<cp;i++){
		cout<<"("<<p[i]<<")\t";
	}
	cout<<"\n\n\tvectores negativos\n\n";	
	for(i=0;i<cn;i++){
		cout<<"("<<n[i]<<")\t";
	}
		cout<<"\n\n\tLa suma de los numeros positivos es de:  +"<<sp<<" ";	
		cout<<"\n\tLa suma de los numeros negativos es de:  "<<sn<<" ";	
		cout<<"\n\tEl numero mayor es:                      +"<<nM<<" ";	
		cout<<"\n\tEl numero menor es:                      "<<nm<<"\n\n";	
		}else{
		cout<<"\n\tIngrese valores entre 10 y 100\n\n";	
		}
		final(1,65);
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
	
