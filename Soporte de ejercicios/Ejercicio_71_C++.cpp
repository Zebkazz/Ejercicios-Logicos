#include <iostream>
#include <stdlib.h>
#include <string>
#include <stdio.h>
#include <conio.h>
#include <math.h>
#include <time.h>
#include <cmath>
using namespace std;
void mosmat(int ma[3][3],int ft,int ct);
void ord (int v[23]);
int main(){
	int i,f,c,k,sf=0,sc=0,v[3];
	//int x[3][3],y[3][3],r[3][3];
	int x[3][3]={{3,4,2},{8,9,1},{5,6,7}};
	int y[3][3]={{5,2,8},{1,9,3},{4,6,7}};
	int r[3][3];
	//cargar matrices
	/* srand(time(NULL));
	for(f=0;f<3;f++){
		for(c=0;c<3;c++){
			x[f][c]=rand()%9;
			y[f][c]=rand()%9;}
			}*/
	cout <<"\t Matriz x\n\n";
	mosmat (x,3,3);
	cout <<"\t Matriz x\n\n";
	mosmat (y,3,3);
	cout <<"\t Matriz resultante x\n\n";
	for(f=0;f<3;f++){
		for(c=0;c<3;c++){
			r[f][c]=0;
			for(k=0;k<3;k++){
				r[f][c]=r[f][c]+x[f][k]*y[k][c];
				}	
			}
		}
		for(int f=0;f<3;f++){
			sf=0;
			sc=0;
			for(int c=0;c<3;c++){
				cout<<"\t"<<r[f][c];
				sf=sf+r[f][c];
				sc=sc+r[c][f];
			}
			v[f]=sc;
			cout<<"\t=\t"<<sf;
			cout<<"\n\n";	
		}
		cout<<"\t"<<char(186)<<"\t"<<char(186)<<"\t"<<char(186);
		cout<<"\n\n";
		for(int c=0;c<3;c++)
		cout<<"\t"<<v[c];
		cout<<"\n\n";
		}
		
void mosmat(int ma[3][3],int ft,int ct){
	for(int f=0;f<ft;f++){
		for(int c=0;c<ct;c++){
		cout<<"\t"<<ma[f][c];
		}
		cout<<"\n\n";
	}	
}


	
