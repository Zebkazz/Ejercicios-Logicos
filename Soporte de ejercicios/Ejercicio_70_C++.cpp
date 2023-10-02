#include <iostream>
#include <stdlib.h>
#include <string>
#include <stdio.h>
#include <conio.h>
#include <math.h>
#include <time.h>
#include <cmath>
using namespace std;
void mosmat(int ma[5][5],int v[25],int ft,int ct);
void carmat(int ma[5][5],int v[25],int ft,int ct);
void ord (int v[25]);
int main(){
	int i,f=5,c=5;
	int m[5][5], v[25];
	float su=0;
	carmat(m,v,f,c);
	cout<<"\tMatriz completa\n\n";
	mosmat(m,v,f,c);
	ord (v);
	i=0;
	for(int f=0;f<5;f++){
		for(int c=0;c<5;c++){
			m[f][c]=v[i];
			su=su+v[i];
			i++;
		}
	}
	cout<<"\tMatriz Ordenada\n\n";
	mosmat(m,v,f,c);
	cout<<"\tNumero menor: "<<v[0]<<"\n";//m[0][0]
	cout<<"\tNumero mayor: "<<v[24]<<"\n";//m[4][4]
	cout<<"\tPromedio: "<<su/25<<"\n";
	}
void mosmat(int ma[5][5],int v[25],int ft,int ct){
	for(int f=0;f<ft;f++){
		for(int c=0;c<ct;c++){
		cout<<"\t"<<ma[f][c];
		}
		cout<<"\n\n";
	}	
}
void ord(int v[25]){
	int aux=0;
	for(int i=0;i<24;i++){
		for(int j=(i+1);j<25;j++){
			if(v[j]<v[i]){
				aux=v[i];
				v[i]=v[j];
				v[j]=aux;
			}
		}
	}
}
void carmat(int ma[5][5],int v[25],int ft,int ct){
	srand(time(NULL));
	int j=0;
	for(int f=0;f<ft;f++){
		for(int c=0;c<ct;c++){
			ma[f][c]=rand()%90;
			v[j]=ma[f][c];
			j++;
		}
	}
	
}

	
