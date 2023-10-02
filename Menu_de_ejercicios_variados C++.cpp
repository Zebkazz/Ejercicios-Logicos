#include <iostream>
#include <stdlib.h>
#include <string>
#include <stdio.h>
#include <conio.h>
#include <math.h>
#include <time.h>
#include <cmath>
using namespace std;
void titulo(int g, int e);
void pre();void s();void r();void m();
void d();void final(int g, int e);
int v;float n,t1,t2,t3,a1,a2,a3,a,b1,c,cn,tt;
void eje1();void eje2();void eje3();void eje4();void eje5();void eje6();
void eje7();void eje8();void eje9();void eje34();void eje35();void eje36();
void eje10();void eje11();void eje12();void eje13();void eje14();void eje15();
void eje16();void eje17();void eje18();void eje19();void eje20();void eje21();
void eje22();void eje23();void eje24();void eje25();void eje26();void eje27();
void eje28();void eje29();void eje30();void eje31();void eje32();void eje33();
void eje37();void eje38();void eje39();void eje41();void eje42();void eje43();
void eje44();void eje45();void eje46();void eje47();void eje48();void eje49();
void eje50();void eje51();void eje52();void eje53();void eje54();void eje55();
void eje56();void eje57();void eje58();void eje59();void eje60();void eje61();
void eje62();void eje63();void eje64();void eje65();void eje66();void eje67();
void eje68();void eje69();void eje70();void eje71();void limpiar();void eje40();
void mosmat(float m[5][5],int f,int c);
void carmat(float m[5][5],int f,int c);
void mosmat(int ma[5][5],int v[25],int ft,int ct);
void carmat(int ma[5][5],int v[25],int ft,int ct);
void ord (int v[25]);string l;float num1,num2,b,h1,m1;double po;
int cl,c11,c2,c3=0,ca=0,cp=0,cn1=0,num;float nu;
void mosmat(int ma[3][3],int ft,int ct);
void ord (int v[23]);
int v1=0,c1=0,t=0;
int main(){
	int opc,s,c;
	pre();
	cout<<"\t\t\t\tIngrese el numero de la operacion entre (1 y 71) que desea ver: \n\n";
	for(c=1;c<=71;c++){
		cout<<"\t("<<c<<").Ejercicio    ";	}
		cout<<"\t(0). Salir";
	cout<<"\n\n\t";
	cin>>opc;s=opc;
	switch(opc){
		case (1):system("CLS");titulo(1,s);eje1();final(1,s);limpiar();break;
		case (2):system("CLS");titulo(1,s);eje2();final(1,s);limpiar();break;
		case (3):system("CLS");titulo(1,s);eje3();final(1,s);limpiar();break;
		case (4):system("CLS");titulo(1,s);eje4();final(1,s);limpiar();break;
		case (5):system("CLS");titulo(1,s);eje5();final(1,s);limpiar();break;
		case (6):system("CLS");titulo(1,s);eje6();final(1,s);limpiar();break;
		case (7):system("CLS");titulo(1,s);eje7();final(1,s);limpiar();break;
		case (8):system("CLS");titulo(1,s);eje8();final(1,s);limpiar();break;
		case (9):system("CLS");titulo(1,s);eje9();final(1,s);limpiar();break;
		case (10):system("CLS");titulo(1,s);eje10();final(1,s);limpiar();break;
		case (11):system("CLS");titulo(1,s);eje11();final(1,s);limpiar();break;
		case (12):system("CLS");titulo(1,s);eje12();final(1,s);limpiar();break;
		case (13):system("CLS");titulo(1,s);eje13();final(1,s);limpiar();break;
		case (14):system("CLS");titulo(1,s);eje14();final(1,s);limpiar();break;
		case (15):system("CLS");titulo(1,s);eje15();final(1,s);limpiar();break;
		case (16):system("CLS");titulo(1,s);eje16();final(1,s);limpiar();break;
		case (17):system("CLS");titulo(1,s);eje17();final(1,s);limpiar();break;
		case (18):system("CLS");titulo(1,s);eje18();final(1,s);limpiar();break;
		case (19):system("CLS");titulo(1,s);eje19();final(1,s);limpiar();break;
		case (20):system("CLS");titulo(1,s);eje20();final(1,s);limpiar();break;
		case (21):system("CLS");titulo(1,s);eje21();final(1,s);limpiar();break;
		case (22):system("CLS");titulo(1,s);eje22();final(1,s);limpiar();break;
		case (23):system("CLS");titulo(1,s);eje23();final(1,s);limpiar();break;
		case (24):system("CLS");titulo(1,s);eje24();final(1,s);limpiar();break;
		case (25):system("CLS");titulo(1,s);eje25();final(1,s);limpiar();break;
		case (26):system("CLS");titulo(1,s);eje26();final(1,s);limpiar();break;
		case (27):system("CLS");titulo(1,s);eje27();final(1,s);limpiar();break;
		case (28):system("CLS");titulo(1,s);eje28();final(1,s);limpiar();break;
		case (29):system("CLS");titulo(1,s);eje29();final(1,s);limpiar();break;
		case (30):system("CLS");titulo(1,s);eje30();final(1,s);limpiar();break;
		case (31):system("CLS");titulo(1,s);eje31();final(1,s);limpiar();break;
		case (32):system("CLS");titulo(1,s);eje32();final(1,s);limpiar();break;
		case (33):system("CLS");titulo(1,s);eje33();final(1,s);limpiar();break;
		case (34):system("CLS");titulo(1,s);eje34();final(1,s);limpiar();break;
		case (35):system("CLS");titulo(1,s);eje35();final(1,s);limpiar();break;
		case (36):system("CLS");titulo(1,s);eje36();final(1,s);limpiar();break;
		case (37):system("CLS");titulo(1,s);eje37();final(1,s);limpiar();break;
		case (38):system("CLS");titulo(1,s);eje38();final(1,s);limpiar();break;
		case (39):system("CLS");titulo(1,s);eje39();final(1,s);limpiar();break;
		case (40):system("CLS");titulo(1,s);eje40();final(1,s);limpiar();break;
		case (41):system("CLS");titulo(1,s);eje41();final(1,s);limpiar();break;
		case (42):system("CLS");titulo(1,s);eje42();final(1,s);limpiar();break;
		case (43):system("CLS");titulo(1,s);eje43();final(1,s);limpiar();break;
		case (44):system("CLS");titulo(1,s);eje44();final(1,s);limpiar();break;
		case (45):system("CLS");titulo(1,s);eje45();final(1,s);limpiar();break;
		case (46):system("CLS");titulo(1,s);eje46();final(1,s);limpiar();break;
		case (47):system("CLS");titulo(1,s);eje47();final(1,s);limpiar();break;
		case (48):system("CLS");titulo(1,s);eje48();final(1,s);limpiar();break;
		case (49):system("CLS");titulo(1,s);eje49();final(1,s);limpiar();break;
		case (50):system("CLS");titulo(1,s);eje50();final(1,s);limpiar();break;
		case (51):system("CLS");titulo(1,s);eje51();final(1,s);limpiar();break;
		case (52):system("CLS");titulo(1,s);eje52();final(1,s);limpiar();break;
		case (53):system("CLS");titulo(1,s);eje53();final(1,s);limpiar();break;
		case (54):system("CLS");titulo(1,s);eje54();final(1,s);limpiar();break;
		case (55):system("CLS");titulo(1,s);eje55();final(1,s);limpiar();break;
		case (56):system("CLS");titulo(1,s);eje56();final(1,s);limpiar();break;
		case (57):system("CLS");titulo(1,s);eje57();final(1,s);limpiar();break;
		case (58):system("CLS");titulo(1,s);eje58();final(1,s);limpiar();break;
		case (59):system("CLS");titulo(1,s);eje59();final(1,s);limpiar();break;
		case (60):system("CLS");titulo(1,s);eje60();final(1,s);limpiar();break;
		case (61):system("CLS");titulo(1,s);eje61();final(1,s);limpiar();break;
		case (62):system("CLS");titulo(1,s);eje62();final(1,s);limpiar();break;
		case (63):system("CLS");titulo(1,s);eje63();final(1,s);limpiar();break;
		case (64):system("CLS");titulo(1,s);eje64();final(1,s);limpiar();break;
		case (65):system("CLS");titulo(1,s);eje65();final(1,s);limpiar();break;
		case (66):system("CLS");titulo(1,s);eje66();final(1,s);limpiar();break;
		case (67):system("CLS");titulo(1,s);eje67();final(1,s);limpiar();break;
		case (68):system("CLS");titulo(1,s);eje68();final(1,s);limpiar();break;
		case (69):system("CLS");titulo(1,s);eje69();final(1,s);limpiar();break;
		case (70):system("CLS");titulo(1,s);eje70();final(1,s);limpiar();break;
		case (71):system("CLS");titulo(1,s);eje71();final(1,s);limpiar();break;
		case (0):final(1,s);break;
		default :cout<<"\n\n\tOpcion no valida solo ingrese los valores del menu.";
			limpiar();
		break;}}
void eje1(){float a,b;
		cout<<"\tIngrese dos valores enteros para realizar operaciones basicas\n\n";
			cout<<"\tIngrese el valor 1: ";cin>>a;
			cout<<"\tIngrese el valor 2: ";cin>>b;
			cout<<"\n\tLa suma de  "<<a<<"  y "<<b<<"  es igual a:         "<<(a+b);
			cout<<"\n\tLa resta de "<<a<<"  y "<<b<<" es igual a:          "<<(a-b);
			cout<<"\n\tLa multiplicacion de "<<a<<" y "<<b<<" es igual a:  "<<(a*b);
			if(b==0){	cout<<"\nLa Division por cero imposible";
			}else{cout<<"\n\tLa Division de "<<a<<" y "<<b<<" es igual a:        "<<(a/b);}
		cout<<"\n\n";}
void eje2(){float a,b;
		cout<<"\tIngrese dos valores enteros para saber cual es mayor y menor\n\n";
			cout<<"\tIngrese el valor 1: ";cin>>a;
			cout<<"\tIngrese el valor 2: ";cin>>b;
			if(a>b){
			cout<<"\n\t"<<a<<" Es mayor que: "<<b;
			}else if(b>a){
			cout<<"\n\t"<<b<<" Es mayor que: "<<a;
			}else{
			cout<<"\n\t"<<b<<" Es igual que: "<<a;
		}cout<<"\n";}
void eje3(){float a;
		cout<<"\tIngrese un numero entero para saber si es mayor menor o igual que 100: ";cin>>a;
			if(a>100){
			cout<<"\n\t"<<a<<" Es un numero mayor que 100 ";
			}else if(a<100){
			cout<<"\n\t"<<a<<" Es un numero menor que 100 ";
			}else{cout<<"\n\t"<<a<<" Es igual a 100 ";}
		cout<<"\n\n";}	
void eje4(){int a,b,c;
		cout<<"\n\tIngrese tres valores enteros para ordenarlos de mayor a menor\n\n";
			cout<<"\tIngrese el valor 1: ";cin>>a;
			cout<<"\tIngrese el valor 2: ";cin>>b;
			cout<<"\tIngrese el valor 3: ";cin>>c;
			if(a>b){
			if(b>c){
			cout<<"\n\t"<<a<<" - "<<b<<" - "<<c<<"\n";} 
			else if(a>c)	{
			cout<<"\n\t"<<a<<" - "<<c<<" - "<<b<<"\n";}
			else{
			cout<<"\n\t"<<c<<" - "<<a<<" - "<<b<<"\n";}}
			else{if(a>c){
			cout<<"\n\t"<<b<<" - "<<a<<" - "<<c<<"\n";}
			else if (c>b){	
			cout<<"\n\t"<<c<<" - "<<b<<" - "<<a<<"\n";}
			else{
		cout<<"\n\t"<<b<<" - "<<c<<" - "<<a<<"\n";}}}
void eje5(){float a,b,c;
		cout<<"\tIngres el valor de las notas de las 3 notas del estudiante entre 0 y 5\n\n";
			cout<<"\tIngrese el valor de la nota 1: ";cin>>a;
			cout<<"\tIngrese el valor de la nota 2: ";cin>>b;
			cout<<"\tIngrese el valor de la nota 3: ";cin>>c;
			if ((a>=0)&(a<=5)){
			cout<<"\n\t"<<a<<" Es el Valor de la nota 1 \n";}
			else {cout<<"\n\tNo se encuentra entre 5 y 0 \n";}
			if ((b>=0)&(b<=5)){
			cout<<"\n\t"<<b<<" Es el Valor de la nota 2 \n";}
			else {cout<<"\n\tNo se encuentra entre 5 y 0 \n";}
			if ((c>=0)&(c<=5)){
			cout<<"\n\t"<<c<<" Es el Valor de la nota 3 \n";}
			else {cout<<"\n\tNo se encuentra entre 5 y 0 \n";}
			if(((a>=0)&(a<=5))&((b>=0)&(b<=5))&((c>=0)&(c<=5))){
			cout<<"\n\tEl promedio de su nota final es: " <<(a+c+b)/(3)<<"\n";
			}else{cout<<"\n\tEl promedio de su nota final es: 0\n ";}
			cout<<"\tPara pasar su promedio debe ser mayor a 3.5 \n";
			if((a+b+c)/(3)>=3.5){
			if((a+b+c)/(3)<=5){
			cout<<"\n\tEl estudainte aprobo\n ";}}
			else {cout<<"\n\tEl estudainte reprobo\n ";}
			if((a+b+c)/(3)>=6){
		cout<<"\n\tEl estudainte reprobo\n ";}}
void eje6(){float a,b,c,l;
		cout<<"\tIngrese los valores solicitados para hallar el area del triangulo\n\n ";
			cout<<"\tIngrese el valor del lado 1 del triangulo: ";cin>>a;
			cout<<"\tIngrese el valor del lado 2 del triangulo: ";cin>>b;
			cout<<"\tIngrese el valor del lado 3 del triangulo: ";cin>>c;
			cout<<"\n\tEl area del traingulo es de: "<<(l=b*c)/(2)<<"\n";
		cout<<"\tEl perimetro del traingulo es de: "<<(a+b+c)<<"\n";}
void eje7(){int a,b;b=2;
		cout<<"\tIngrese un numero para saber si es positio o negativo y si es par o impar: ";cin>>a;
			if(a>0){
			cout<<"\n\tEl numero "<<a<<" es positivo ";
			if((a%b)==0){
			cout<<"\n\ty es un numero par \n";
			}else{cout<<"\n\ty es un numero impar \n";}}
			if(a==0){
			cout<<"\n\tEl numero 0 no cuenta como positivo ni negativo \n";}
			if(a<0){
			cout<<"\n\tEl numero "<<a<<" es negativo ";
			if((a%b)==-1){
			cout<<"\n\ty es un numero impar \n";}else{
		cout<<"\n\ty es un numero par \n";}}}
void eje8(){float des;int col,a,vlr;string d;
		cout<<"\tAcontinuacion seleccione el color de la rosa: \n\n";
			cout<<"\t1.Rojo\n\t2.Blanco\n\t3.Negro\n\t4.Otro\n\n";
			cout<<"\n\tIngrese el color de la rosa: ";cin>>col;
			cout<<"\n\tIngrese el numero de docenas: ";cin>>a;
			if(col==1){des=0.1;vlr=4000;d="10%";
				}else if(col==2){des=0.08;vlr=5000;d="8%";
					}else if(col==3){des=0;vlr=18000;d="0%";
						}else if(col==4){des=0.02;vlr=6000;d="2%";
					}else{cout<<"\nNo hay mas colores disponibles\n";
				}if(col<5){cout<<"\n\tEl precio de "<<a<<" docenas de rosas es de: $"<<(vlr*a)<<"\n";
			cout<<"\tEl descuento de las rosas de color rojo es del "<<d<<" que equivale a $"<<(vlr*a)*(des)<<"\n";
		cout<<"\tEl precio total a pagar con descuento es de:$"<<((vlr*a)-(vlr*a*des))<<"\n";}}
void eje9(){long des;int p,vlr;
		cout<<"\tAcontinuacion Ingrese los datos de ventas realizadas entre 0 y 100 como maximo \n\n";
			cout<<"\n\tIngrese el numero de productos vendidos: ";cin>>p;
			cout<<"\n\tIngrese el valor total de las ventas realizadas: ";cin>>vlr;
			if(p>=0&&p<=20){des=5;}
			if(p>=21&&p<=50){des=10;}
			if(p>=51&&p<=80){des=15;}
			if(p>=81&&p<=100){des=20;}	
			cout<<"\n\tEl numero de productos vendidos fue de "<<p<<" productos";
			cout<<"\n\tEl valor de los productos vendidos fue de: $"<<vlr<<"";
		cout<<"\n\tEl descuento ganado por el empleado es del "<<des<<"% que equivale a: $"<<((vlr)*des/100)<<"\n";}
void eje10(){long pre,des;int color,modelo;char marca[10];
		cout<<"\tAcontinuacion Ingrese los datos que el concesionario requiere\n\n";
			cout<<"\n\tIngrese la marca del auto: ";cin>>marca;
			cout<<"\n\t1.Verde\n\t2.rojo\n\t3.Otro color\n";
			cout<<"\n\tIngrese el color del auto: ";cin>>color;
			cout<<"\n\tIngrese el modelo del auto: ";cin>>modelo;
			if(color==1){
			pre = 65500000;
			des = 15;}	
			if(modelo<1990){
			pre = 75500000;
			des = 20;}	
			if(modelo>1995&&color==2){
			pre = 85500000;
			des = 10;}
			if(color>=3){
			pre = 90000000;
			des = 0;}
			cout<<"\n\n\tLa marca del auto es:                "<<marca;
			cout<<"\n\tEl valor del auto es:                $"<<pre;
			cout<<"\n\tEl porcentaje del descuento es del:  "<<((des*100)/100)<<"%";
			cout<<"\n\tEl descuento del auto es de:         $"<<((pre*des)/100)<<"\n";
		cout<<"\n\tEl valor total del auto es: "<<char(175)<<" $"<<((-pre*des)/100+pre)<<" "<<char(174)<<"\n";}
void eje11(){long num;
		cout<<"\n\tIngrese un numero que decrementara de 3 en e hasta llegar a 0\n\n\t       ";cin>>num;
			while(num>0){
			num=num-3;
			if(num>=0){
			cout<<"\n               "<<num<<" ";
			}else{
			cout<<"\n               0 ";	}}
		cout<<"\n";}
void eje12(){int num,var1=0,var2=1,var3=0,var4=0;
		cout<<"\n\tAcontinuacion ingrese la cantidad de numeros Fibonacci que desea ver\n\n\t       ";cin>>var4;
			if(var4>=10){
			while(var3<=var4+1){
			var1=var2;
			cout<<"\n               "<<var2<<" ";
			var2=num;
			num=var1+var2;
			var3++;
			}cout<<"\n\n\t El total de numeros mostrados de la serie Fibonacci es de "<<var4<<" numeros";
			}else{cout<<"\n\t No es un numero mayor o igual a 10";}
		cout<<"\n\t La suma total de la serie fibonacci es de: "<<(num+var2-2)<<"\n";}
void eje13(){int n=1,b,j=1,c;bool primo;	
		cout<<"\tIngrese la cantidad de numeros primos que desee: ";cin>>c;
			cout<<"\n\n";
			while(j<=c){
			primo=true;
			for(b=2;b<n;b++){
			if((n%b)==0){
			primo=false;
			b=n;}}
			if(primo==true){
			cout<<"\t"<<n<<"   ";
			j++;}
			n++;}
		cout<<"\n";}	
void eje14(){int nu,p,suma=0,rsuma=0,resta=0,rresta=0,cpa=0,cim=0,pr=0,cn=1;
		cout<<"\n\tIngrese un numero mayor que 10 para luego escribir ese nuemro de veces un numero: \n\n\t";cin>>nu;
			if(nu>=10){
			while(nu>=cn){
    		cout<<"\n\tIngrese un numero:"<<cn<<": \n\n\t";cin>>p;
			if(p%2==0){
			cpa++;suma=suma+p;
			resta=p-resta;
			}else{cim=cim+1;
			rsuma=rsuma+p;
			rresta=p-rresta;}
			cn=cn+1;}}
			cout<<"\n\tLa cantidad de pares es:   "<<cpa;
			cout<<"\n\tLa suma de pares es de:    "<<suma;
			cout<<"\n\tLa resta de pares es de:   "<<resta;
			cout<<"\n\tLa cantidad de impares es: "<<cim;
			cout<<"\n\tLa suma de impares es de:  "<<rsuma;
			cout<<"\n\tLa resta de impares es de: "<<rresta;
			pr=cpa+cim;cout<<"\n\tEl promedio de pares es:   "<<cpa*100/pr<<" %";
			cout<<"\n\tEl promedio de impares es: "<<cim*100/pr<<" %";
		cout<<"\n\tLa diferencia de sumas entre impares y pares es de: "<<suma-rsuma<<"\n\n";}
void eje15(){int a;float b,c,d,po;
		cout<<"\n\tAcontinuacion ingrese tres valores correspondientes a cada operacion\n\n";
			cout<<"\t1.J+K\n\t2.J%k\n\t3.J/k\n\t4.J+k+1\n\t5.J*k*1\n\n";
			cout<<"\tIngrese el valor de seleccion: ";cin>>a;
			cout<<"\tIngrese el valor 1: ";cin>>b;
			cout<<"\tIngrese el valor 2: ";cin>>c;
			cout<<"\tIngrese el valor 3: ";cin>>d;
			switch (a){
			case(1):cout<<"\n\tEl resultado de la operacion 1 es: "<<b+c;break;
			case(2):po=b*(((float) c)/((float) 100));
			cout<<"\n\tEl resultado de la operacion 2 es: "<<po;break;
			case(3):if(c==0){
			cout<<"\n\tDivision por cero imposible";
			}else{
			cout<<"\n\tEl resultado de la operacion 3 es: "<<b/c;break;}
			case(4):cout<<"\n\tEl resultado de la operacion 4 es: "<<b+c+1;break;
			case(5):cout<<"\n\tEl resultado de la operacion 5 es: "<<b*c*1;break;
		default:cout<<"\n\tOpcion no valida";}cout<<"\n\n";}
void eje16(){int a;
		cout<<"\n\tAcontinuacion ingrese un valor mayor que 3 para saber si es divicible entre 3 y 2\n\n\t";cin>>a;
			if(a>3){
			if((a%2)==0){
			cout<<"\n\t"<<a<<" Es divisible por 2 y da como resultado: "<<a/2<<"\n";
			}else{cout<<"\n\t"<<a<<" No es divisible por 2\n";}
			if((a%3)==0){
			cout<<"\n\t"<<a<<" Es divisible por 3 y da como resultado: "<<a/3<<"\n";
		}else{cout<<"\t"<<a<<" No es divisible por 3\n";}}}
void eje17(){int n1,n2,n=0,l=0,j=0;
		cout<<"\n\tIngrese un valor mayor que 4 teniendo en cuenta que el siguiente valor es menor\n\n\t";cin>>n2;
			cout<<"\n\tIngrese un valor menor al anterior\n\n\t";cin>>n1;
			if(n2>4){
			for(l=n1;l<=n2;l=l+1){
			n=0;
			for(j=1;j<=n2;j++){
			if((l%j)==0){
			n++;}}
			if(n==2){
			cout<<"\n\t"<<l<<" Es numero primo";}}
		cout<<"\n";}}
void eje18(){int hora,min,seg;
		for(hora=0;hora<=23;hora++){
			for(min=0;min<=59;min++){
				for(seg=0;seg<=59;seg++){
				if(hora<10){
				cout<<"0";}
				cout<<hora<<":";
				if(min<10){
				cout<<"0";}
				cout<<min<<":";
				if(seg<10){
				cout<<"0";}
				cout<<seg<<"\t";
				if(hora==23 && min==00 && seg==00){
				hora=24;
			min=60;
		seg=60;}}}}}
void eje19(){int h,m,s;
		cout<<"\tIngrese el numero del cual quiere saber la tabla de multiplicacion de 1 hasta 10\n\n\t";cin>>m;
			for(h=1;h<=10;h++){
		cout<<"\n\t"<<h<<" * "<<m<<" = "<<h*m<<"\n";}}
void eje20(){int p,cpa=0,cim=0,cn,n=1,b,j,c,cdp=0,g1,cdnp=0;bool primo;	
		cout<<"\tIngrese un valor mayor que 3 para saber mas detalles\n\n\t";cin>>g1;
			for(p=1;p<=g1;p++){
			cout<<"\n\t"<<p;
			primo=true;
			for(b=2;b<n;b++){
			if((n%b)==0){
			primo=false;
			b=n;cdnp=-cdp+g1;}}
			if(primo==true){cdp++;
			cout<<" Es primo";j++;}
			n++;cout<<"\n";
			if(p%2==0){cpa++;
			}else{cim=cim+1;}
			cn=cn+1;}
			cout<<"\n\tLa cantidad de pares es:              "<<cpa;
			cout<<"\n\tLa cantidad de primos es:             "<<cdp;
			cout<<"\n\tLa cantidad de numeros no primos es:  "<<cdnp;
		cout<<"\n\tLa cantidad de impares es:            "<<cim;cout<<"\n";}
void eje21(){int a,b,s;
		cout<<"\tIngrese dos valores para luego ser sumados\n\n\t";
			cout<<"Ingrese el valor 1 \n\n\t";cin>>a;	
			cout<<"\n\tIngrese el valor 2 \n\n\t";cin>>b;s=a+b;
		cout<<"\n\tLa suma es: "<<s<<"\n";}
void eje22(){float c1,c2,c3,c4,s,p;
		cout<<"\tIngrese el valor obtenido en las calificaciones\n\n\t";
			cout<<"Ingrese la calificacion 1 \n\n\t";cin>>c1;
			cout<<"\n\tIngrese la calificacion 2 \n\n\t";cin>>c2;
			cout<<"\n\tIngrese la calificacion 3 \n\n\t";cin>>c3;
			cout<<"\n\tIngrese la calificacion 4 \n\n\t";cin>>c4;	
			s=c1+c2+c3+c4;p=s/4;
			cout<<"\n\tLa suma de las califaicaiones es de:     "<<s<<"\n";
		cout<<"\n\tEl promedio de las califaicaiones es de: "<<p<<"\n";}
void eje23(){	float area,a,b;
		cout<<"\tIngrese el valor de la base y la altura para saber el area del rectangulo\n\n\t";
			cout<<"Ingrese el valor de la base \n\n\t";cin>>b;
			cout<<"\n\tIngrese el valor de la altura\n\n\t";cin>>a;	
		area=b*a;cout<<"\n\tel area del rectangulo es de:     "<<area<<"\n";}
void eje24(){	float r,pi,area;
		cout<<"\tIngrese el valor del radio para hallar el area de la circunferencia\n\n\t";
			cout<<"Ingrese el radio de la circunferencia \n\n\t";cin>>r;
			pi=M_PI;r=r*2;area=r*pi;
		cout<<"\n\tEl area de la circunferencia es de:     "<<area<<"\n";}
void eje25(){float a,b,c,at,ar,area;
		cout<<"\tIngrese los datos requeridos para hallar el area\n\n\t";
			cout<<"\n\tIngrese la base del Rectangulo:\n\n\t";cin>>a;
			cout<<"\n\tIngrese la base del triangulo:\n\n\t";cin>>b;
			cout<<"\n\tIngrese la altura del triangulo y el rectangulo unidas:\n\n\t";cin>>c;
			at=((b*c)/2);ar=a*c;area=at+ar;
			cout<<"\n\tEl area del triangulo es de:     "<<at<<"\n";
			cout<<"\n\tEl area del rectangulo es de:    "<<ar<<"\n";
		cout<<"\n\tEl area del la figura es de:     "<<area<<"\n";}
void eje26(){	float r,a,h,h2,c,c1,c2,ar,pi,area;pi=M_PI;
		cout<<"\tIngrese los datos requeridos para hallar el area\n\n\t";
			cout<<"\n\tIngrese la base del triangulo rectangulo y radio:\n\n\t";cin>>r;
			cout<<"\n\tIngrese la hipotenusa del triangulo rectangulo:\n\n\t";cin>>h;
			c=r*r;h2=h*h;
			c1=h2-c;c2=sqrt(c1);
			a=c*r;ar=r*r*pi;
			cout<<"\n\tEl area triangular es de:     "<<c2*r<<"\n";
			cout<<"\n\tEl area circular es de:       "<<ar<<"\n";
		cout<<"\n\tEl area de la figura es de:   "<<ar+c2*r+c2*r<<"\n";}
void eje27(){int l;float pg,tg,ga;
		cout<<"\tAcontinuacion ingrese los datos para saber cual fue su ganancia\n\n\t";
			cout<<"\n\tIngrese la cantidad de litros de leche que produce:\n\n\t";cin>>l;
			cout<<"\n\tIngrese el precio del galon de leche:\n\n\t";cout<<"$";cin>>pg;
			tg=l/3.785411784;
			cout<<"\n\tLa cantidad de galones produciodos es de:   "<<tg<<"\n";
		cout<<"\n\tLa ganancia por la entrega de leche es de:  "<<"$"<<pg*tg<<"\n";}
void eje28(){float x1,x2,y1,y2,x,y,h;
		cout<<"\tAcontinuacion ingrese los datos para saber la distancia entre los puntos\n";
			cout<<"\tIngrese solo valores positivos\n\n\t ";
			cout<<"\n\tIngrese el valor de la abscisas 1:\n\n\t ";cin>>x1;
			cout<<"\n\tIngrese el valor de la ordenada 1:\n\n\t ";cin>>y1;
			cout<<"\n\tIngrese el valor de la abscisas 2:\n\n\t ";cin>>x2;
			cout<<"\n\tIngrese el valor de la ordenada 2:\n\n\t ";cin>>y2;
			if(x1>0 and x2>0 and y1>0 and y2>0){
			x=x2-x1;y=y2-y1;
			h=sqrt(x*x+y*y);}
			cout<<"\n\tEl cateto de las abscisas es de:      "<<x;
			cout<<"\n\tEl cateto de las ordenadas es de:     "<<y;
		cout<<"\n\tLa distancia entre los puntos es de:  "<<h<<"\n";}
void eje29(){float l1,l,p;
		cout<<"\tIngrese los datos para pedir la cantidad de tela\n\n\t";
			cout<<"\n\tIngrese la cantidad de metros de tela:\n\n\tM ";cin>>l;
			l1=l/0.0254;
		cout<<"\n\tLa cantidad de pulgadas de tela que necesita es de:    \n\n\tin "<<l1<<"\n";}
void eje30(){float x1,x2,x3;unsigned int v,x4;
		cout<<"\tAcontinuacion ingrese los datos para saber cuanto tiene que pagar:\n\n\t";
			cout<<"\n\tIngrese el alto de la alberca:\n\n\t";cin>>x1;
			cout<<"\n\tIngrese el largo de la alberca:\n\n\t";cin>>x2;
			cout<<"\n\tIngrese el ancho de la alberca:\n\n\t";cin>>x3;
			cout<<"\n\tIngrese el Costo por metro cubico:\n\n\t$ ";cin>>x4;
			v=x1*x2*x3;	
			cout<<"\n\tEl costo por metro cubico es de:           $ "<<x4<<"\n";
			cout<<"\n\tEl volumen de la alberca es de:              "<<v<<" m2\n";
		cout<<"\n\tEl pago a realizar por el consumo es de:   $ "<<v*x4<<"\n";}
void eje31(){float a,b,m;
		cout<<"\tIngrese dos valores enteros para saber cual es mayor y menor\n\n";
			cout<<"\tIngrese el valor 1: ";cin>>a;
			cout<<"\tIngrese el valor 2: ";cin>>b;
			if(a>b){
			cout<<"\n\t"<<a<<" Es mayor que: "<<b;
			}else if(b>a){
			cout<<"\n\t"<<b<<" Es mayor que: "<<a;
			}else{
			cout<<"\n\t"<<b<<" Es igual que: "<<a;}
			m=a-b;cout<<"\n\tEl resultado de la comparacion es de:"<<m;
		cout<<"\n";}
void eje32(){int x1;
		cout<<"\tIngrese un numero para saber si es positivo o negativo\n\n\t";
			cout<<"\n\tIngrese un numero cualquiera:\n\n\t";cin>>x1;
			if (x1>0){
			cout<<"\n\t"<<x1<<" es positivo\n";}
			if(x1<0){
			cout<<"\n\t"<<x1<<" es negativo\n";}
			if(x1==0){
		cout<<"\n\t"<<x1<<" no es positivo ni negativo\n";}}
void eje33(){int x1,pag;
		cout<<"\tIngrese la cantidad de lapices que desea comprar\n\n\t";
			cout<<"\n\tIngrese la cantidad de lapices:\n\n\t";cin>>x1;pag=x1;
			if(pag>=1000){
			cout<<"\n\tEl precio unitario es de:  85$\t";
			cout<<"\n\tEl precio a pagar es de:   "<<pag*85<<"\n\n\t";
			}else{cout<<"\n\tEl precio unitario es de:  90$\t";
		cout<<"\n\tEl precio a pagar es de:   "<<pag*90<<"$\n\n\t";}}
void eje34(){float x1,pag,d;
		cout<<"\tAlmacenes  El harapiento distinguido \n\n\t";
			cout<<"\n\tIngrese el valor del tarje:\n\n\t";cin>>x1;pag=x1;
			if(pag>=2500.00){d=0.15;
			cout<<"\n\tEl descuento del traje es de:           15%\t";
			cout<<"\n\tEl valor del descuento es de:           $"<<pag*d<<"\t";
			cout<<"\n\tEl precio a pagar por el traje es de:   $"<<pag-d*pag<<"\n\n\t";
			}else{d=0.08;
			cout<<"\n\tEl descuento del traje es de:           8%\t";
			cout<<"\n\tEl valor del descuento es de:           $"<<pag*d<<"\t";
		cout<<"\n\tEl precio a pagar por el traje es de:   $"<<pag-d*pag<<"\n\n\t";}}	
void eje35(){float a,b,c,m;
		cout<<"\tIngrese tres valores para saber cual es mayor\n\n\t";
			cout<<"\n\tIngrese el numero 1:\n\n\t";cin>>a;
			cout<<"\n\tIngrese el numero 2:\n\n\t";cin>>b;
			cout<<"\n\tIngrese el numero 3:\n\n\t";cin>>c;
			if((a>b)and(a>c)){m=a;
			cout<<"\n\tEl numero mayor es "<<a<<"\t\n";}
			if((b>a)and(b>c)){m=b;
			cout<<"\n\tEl numero mayor es "<<b<<"\t\n";}
			else if(((c>a)and(c>b))){
			m=c;
		cout<<"\n\tEl numero mayor es "<<c<<"\t\n";}}
void eje36(){float np,tot,p;
		cout<<"\tRestaurante La langosta ahumada\n\n\t";
			cout<<"\n\tIngrese el numero de personas :\n\n\t";cin>>np;tot=np;
			if(tot>=200&&tot<=300){p=85.00;}
			if(tot<200){p=95.00;}
			if(tot>=301){p=75.00;}
			cout<<"\n\tValor por platillo:   $"<<p;
		cout<<"\n\tEl total a pagar por:  "<<tot<<" platillos es de: $"<<tot*p<<"\t\n";}	
void eje37(){string ta;float tm,s,p,o,ga;int k;
		cout<<"\tValide todos los datos para saber cual es la ganacia obtenida\n\n\t";
			cout<<"Escriba a o b en minuscula\t";
			cout<<"\n\tIngrese el tipo de uva: \n\n\t";cin>>ta;
			cout<<"\n\tEscriba 1 o 2\t";
			cout<<"\n\tIngrese el tamaño de uva:\n\n\t";cin>>tm;
			cout<<"\n\tIngrese el valor de la uva:\n\n\t";cin>>p;
			cout<<"\n\tIngrese la cantidad de kilos:\n\n\t";cin>>k;
			if((ta=="a")and(tm==1)){s=20;
			o=k*s+p*k;
			ga=p+s*k;}
			if((ta=="a")and(tm==2)){s=30;
			o=k*s+p*k;
			ga=p+s*k;}
			if((ta=="b")and(tm==1)){s=30;
			o=k*s+p*k+s*k-k*p;
			ga=p-s*-k;}
			if((ta=="b")and(tm==2)){s=50;
			o=k*s+p*k+s*k-k*p;
			ga=p-s*-k;}
			cout<<"\n\tEl valor de la uva tipo "<<ta<<" y tamaño "<<tm<<" es de:             $"<<o; 
		cout<<"\n\tLa ganancia obtenida de la uva tipo "<<ta<<" y tamaño "<<tm<<" es de: $"<<ga<<"\n";}
void eje38(){float pa,tot;int na,r;
		cout<<"\tPara determinar el pago del viaje ingrese los siguientes datos\n\n\t";
			cout<<"\n\tIngrese el numero de alumnos :\n\n\t";cin>>na;
			if(na>=100){pa=65.00;
			r=4000.00;
			tot=na*pa+r;}
			if(na>=50&&tot<=99){pa=70.00;
			r=4000.00;
			tot=na*pa+r;}
			if(na>=0&&tot<=49){pa=95.00;
			r=4000.00;
			tot=na*pa+r;}
			cout<<"\n\tEl costo a pagar por cada alumno es: $"<<tot/na;
		cout<<"\n\tEl costo a pagar por el viaje es de: $"<<tot<<"\n\n";}
void eje39(){string di,tu;float pag,tot,imp,er=0;int ti;
		cout<<"\tPara determinar el pago por cada concepto diligencie los siguientes datos\n";
			cout<<"\tSolo ingrese texto en minuscula\n\n\t";
			cout<<"\n\tIngrese los minutos que duro la llamada :\n\n\t";cin>>ti;
			cout<<"\n\tIngrese el dia que se realizo la llamada: ";cin>>di;
			cout<<"\n\tIngrese el horario vespertino, matutino o otro cuando realizo la llamada: ";cin>>tu;
			if(ti>0){if(ti<=5) pag=ti;	
			else{pag=5;ti=ti-5;
			if(ti<=3)pag=pag+(ti*0.8);
			else{pag=pag+(3*0.8);ti=ti-3;
			if(ti<=2)pag+(ti*0.7);
			else{pag=pag+(2*0.7);ti=ti-2;
			pag=pag+(ti*0.5);}}}}else{
			cout<<"\n\tEl total a pagar es: 0$\n\t";}
			if(di=="dom"){imp=0.3;
			}else if(di=="lun"||di=="mar"||di=="mie"||di=="jue" ||di=="vie"){
			if(tu=="matutino")imp=0.15;
			else if(tu=="vespertino")imp=0.10;
			else imp=0;}else if(di=="sab"){imp=0;
			}else{cout<<"\n\tPor favor ingrese un dia de la semana\n\n";
			er=1;system("Pause");
			system("CLS");
			main();}if(er==0){
			cout<<"\n\tEl costo a pagar por la llamada fue de:    $"<<pag;	
			cout<<"\n\tEl impuesto a pagar por la llamada fue de: %"<<imp;	
		cout<<"\n\tEl total a pagar por la llamada fue de:    $"<<pag+(pag*imp)<<"\n\n";}}	
void eje40(){string t;float cp,co,ck,pag,tot,a,b,c;int km,npr,np;
		cout<<"\tPara determinar el costo total del recorrido ingrese los siguientes datos\n";
			cout<<"\tSolo ingrese texto en minuscula \n\n\t";
			cout<<"\n\tSeleccione el tipo de autobus(a,b y c):\n\n\t";cin>>t;
			cout<<"\n\tIngrese los kilometros por recorrer:\n\n\t";cin>>km;
			cout<<"\n\tIngrese el numero de personas:\n\n\t";cin>>npr;a=2.0;
			if((t=="a")and(npr>=20)){cp=km*a;
			tot=cp*npr;
			co=tot/npr;
			ck=tot/km;}
			if((t=="b")and(npr>=20)){a=2.5;cp=km*a;
			tot=cp*npr;
			co=tot/npr;
			ck=tot/km;}a=3.0;
			if((t=="c")and(npr>=20)){cp=km*a;
			tot=cp*npr;
			co=tot/npr;
			ck=tot/km;}
			cout<<"\n\tLas personas para presuepuestar es de:  "<<npr;
			cout<<"\n\tEl costo a pagar por persona es de:     $"<<co;
			cout<<"\n\tEl costo por kilometro es de:           $"<<ck<<"\n";
		cout<<"\tEl costo total de "<<npr<<" personas es de:   $"<<tot<<"\n";}
void eje41(){float cc,tot,c;int nc;
		cout<<"\tConsultorio del Dr. Lorenzo T. Mata Lozano\n";
			cout<<"\tingrese los datos para saber el costo\n\n\t";
			cout<<"\n\tIngrese el numero de citas que ha realizado:\n\n\t";cin>>nc;
			if(nc<=3){cc=200.00;
			tot=cc*nc;
			}else if(nc==4){cc=150.00;
			tot=cc*nc+cc;
			}else if(nc==5){cc=150.00;
			tot=cc*nc+cc;
			}else if(nc==6){cc=100.00;
			tot=cc*nc+cc*4;
			}else if(nc==7){cc=100.00;
			tot=cc*nc+cc*4;
			}else if(nc==8){cc=100.00;
			tot=cc*nc+cc*4;
			}else if(nc>=9){cc=50.00;
			tot=cc*nc+cc*16;
			}else{cc=50.00;
			tot=cc*nc+cc*17;}
			cout<<"\n\tEl costo que paga la persona por esta cita es de: $"<<cc;	
		cout<<"\n\tEl monto total que ha pagado por las citas es de: $"<<tot<<"\n\n";}
void eje42(){float co;int nz,pe,n;
		cout<<"\tPara determinar el cobro de la entrega valide los siguientes datos \n";
			cout<<"\n\t 1.America del norte\n\t 2.America de central\n\t 3.America del sur\n\t 4.Europa\n\t 5.Asia\n\t";
			cout<<"\n\tIngrese la zona a donde se dirije el paquete:\n\n\t";cin>>nz;
			cout<<"\n\tIngrese el peso del paquete en GRAMOS:\n\n\tg ";cin>>pe;
			switch(nz){
			case(1):if(pe<=5000){n=11.00;co=pe*n;}break;
			case(2):if(pe<=5000){n=10.00;co=pe*n;}break;
			case(3):if(pe<=5000){n=12.00;co=pe*n;}break;
			case(4):if(pe<=5000){n=24.00;co=pe*n;}break;
			case(5):if(pe<=5000){n=27.00;co=pe*n;}break;}
			if(pe<=5000){cout<<"\n\tEl costo de la entrega a la zona "<<nz<<" es de: $"<<co<<"\n";}else{
		cout<<"\n\tNo se puede realizar la entrega porque exede el peso maximo de 5kg\n";}}
void eje43(){float la,ac,nc,c;int tt;
		cout<<"\tPara determinar el nuevo limite de credito digite los siguientes datos \n";
			cout<<"\n\tTarjeta tipo 1\n\tTarjeta tipo 2\n\tTarjeta tipo 3\n\tOtro tipo de tarjeta\n\t";
			cout<<"\n\tDigite el tipo de tarjeta:\n\n\t";cin>>tt;
			cout<<"\n\tIngrese el cupo de credito que posee actualmente:\n\n\t";cin>>la;	
			if(tt==1){c=25;
			nc=(c/100)*la;
			ac=nc+la;}
			else if(tt==2){c=35;
			nc=(c/100)*la;
			ac=nc+la;}
			else if(tt==3){c=40;
			nc=(c/100)*la;
			ac=nc+la;}
			else if(tt>3){c=50;
			nc=(c/100)*la;
			ac=nc+la;}
			cout<<"\n\tEl aumento del credito es de "<<c<<"% que equivale a: $"<<nc;	
		cout<<"\n\tEl nuevo limite del credito de la tarjeta es de: $"<<ac<<"\n";}
void eje44(){float c;int a,x,y;char n;string t;
		cout<<"\tSupermercado SM\n\n\t";
			cout<<"Ingrese el valor de las compras que ha realizado:\n\n\t$";cin>>c;
			if(c>25000.00){t="\n\tFelicidades acaba de ganar el premio de la balota ";
			cout<<"\n\tFelicidades por compras mayores 25000.00 acabas de entrar a un sorteo\t";
			cout<<"\n\tPara participar valide los siguientes datos\n\n\t";
			cout<<"Ingrese su sexo \n\n\tH\tM\t";cin>>n;
		 	if(n=='H'){
			cout<<"\n\tAcontinuacion elija 1 de las tres balotas para saber que premio gano\n\tSolo tiene dos intentos para elegir una";
			cout<<"\n\n\t15\t29\t31\t";cin>>x;
			switch(x){
				case (15):cout<<t<<x<<" que es un Un mercado de $500000\n";break;
				case (29):cout<<t<<x<<" que es Una consola de video juegos\n";break;
				case (31):cout<<t<<x<<" que es un Una moto\n";break;			
			default:cout<<"\n\tPerdio el premio por no seleccionar una de las balotas mostradas\n\n";
				cout<<"\n\tGracias por su participacion vuelva pronto\n\n";break;}}
			if(n=='M'){
			cout<<"\n\tAcontinuacion elija 1 de las tres balotas para saber que premio gano\n\tSolo tiene dos intentos para elegir una";
			cout<<"\n\n\t17\t23\t35\t";cin>>y;
			switch(y){
				case (17):cout<<t<<y<<" que es un Un mercado de $600000\n";break;
				case (23):cout<<t<<y<<" que es un Un set completo de maquillaje\n";break;
				case (35):cout<<t<<y<<" que es un Un celular de nueva generacion\n";break;			
			default:cout<<"\n\tPerdio el premio por no seleccionar una de las balotas mostradas\n\n";
			cout<<"\n\tGracias por su participacion vuelva pronto\n\n";break;}}}else{
		cout<<"\n\tEl total de compras fue de $"<<c<<" gracias por preferirnos vuelva pronto\n";}}
void eje45(){int opcion;
		cout<<"\t\t\tMenu de opciones";
			cout<<"\n\n\t1.Suma\n\t2.resta\n\t3.multiplicacion\n\t4.Divicion\n\t5.Salir\n\n\t";	cin>>opcion;
			switch(opcion){
				case(1):system("CLS");s();break;
				case(2):system("CLS");r();break;
				case(3):system("CLS");m();break;
				case(4):system("CLS");d();break;
				case(5):final;break;
			default:system("CLS");cout<<"\n\tOpcion no valida\n\n";
				system("PAUSE");system("CLS");main();break;};}
			void s(){int a,b;
			cout<<"\n\tAcontinuacion ingrese dos valores para ser sumados";
			cout<<"\n\n\tIngrese un numero \n\n\t";cin>>a;
			cout<<"\n\tIngrese un numero \n\n\t";cin>>b;
			cout<<"\n\tEl total de la suma es de "<<a+b<<"\n\n\t";
			system("PAUSE");system("CLS");main();}
			void r(){int a,b;
			cout<<"\n\tAcontinuacion ingrese dos valores para ser sumados";
			cout<<"\n\n\tIngrese un numero \n\n\t";cin>>a;
			cout<<"\n\tIngrese un numero \n\n\t";cin>>b;
			cout<<"\n\tEl resultado de la resta es de "<<a-b<<"\n\n\t";
			system("PAUSE");system("CLS");main();}
			void m(){int a,b;
			cout<<"\n\tAcontinuacion ingrese dos valores para ser sumados";
			cout<<"\n\n\tIngrese un numero \n\n\t";cin>>a;
			cout<<"\n\tIngrese un numero \n\n\t";cin>>b;
			cout<<"\n\tEl resultado de la multiplicacion es de "<<a*b<<"\n\n\t";
			system("PAUSE");system("CLS");main();}
			void d(){int a,b;
			cout<<"\n\tAcontinuacion ingrese dos valores para ser sumados";
			cout<<"\n\n\tIngrese un numero \n\n\t";cin>>a;
			cout<<"\n\tIngrese un numero \n\n\t";cin>>b;
			if(b==0){cout<<"\n\tDivision por cero imposible\n\n\t";
			}else{cout<<"\n\tEl resultado de la division es de "<<a/b<<"\n\n\t";}
		system("PAUSE");system("CLS");main();}
void eje46(){int d,l=0,c=1,n=1,b=0,j=0,v,h,s;long double f;
		cout<<"\tIngrese un valor para comprobar si es primo, hallar su factorial y imprimir su tabla de multiplicar \n";
			cout<<"\n\tIngrese un valor: ";cin>>v;
			if(v>0){system("CLS");j=v;
			while(n <= j){
			if(j% n == 0){b++;}n++;}
			if(b == 2){
			cout<<"\n\tEl numero "<<j<<" es primo\n\n";
			}else{cout<<"\n\tEl numero "<<j<<" no es primo\n\n";}
   			int n,i;f=1;
   			for(l=1;l<=v;l++){
        	f=f*l;}cout<<"\tEl Factorial de ";
   			cout<<v<<"! es: "<<f<<"\n\n\t";
			cout<<"La tabla del "<<v<<" es la siguiente:\n";
   			for(h=1;h<=10;h++){
		cout<<"\n\t"<<h<<" * "<<v<<" = "<<h*v<<"\n\t";}}}
void eje47(){int n=1,b,j,c;bool primo;	
		cout<<"\tIngrese un numero para mostrar los números primos existentes entre 1 y ... ";cin>>c;
			cout<<"\n\n";j=1;
			while(j<=c){primo=true;
			for(b=2;b<n;b++){
			if((n%b)==0){
			primo=false;
			b=n;}}
			if(primo==true){
			cout<<"\n\t"<<n<<" Es numero primo ";j++;}n++;}
		cout<<"\n";}
void eje48(){
		cout<<"\tAcontinuaccion podra ingresar los siguientes datos";
			cout<<"\n\tEscriba la opcion que desee ejecutar\n\n";
			cout<<"\tEscriba el genero para realizar el registro:\n\n\tMasculino  Femenino     ==>Salir\n\n\t";cin>>l;
			if(l=="Masculino"or l=="MASCULINO"or l=="masculino"){
			system("CLS");titulo(1,48);
			cout<<"\n\tIngrese la cantidad de personas de ese genero:\n\n\t";
			cin>>num1;h1=h1+num1;cout<<"\n\t";
			system("CLS");titulo(1,48);eje48();}
			if(l=="Femenino"or l=="FEMENINO"or l=="femenino"){
			system("CLS");titulo(1,48);
			cout<<"\n\tIngrese la cantidad de personas de ese genero:\n\n\t";
			cin>>num2;m1=m1+num2;cout<<"\n\t";system("PAUSE");
			system("CLS");titulo(1,48);eje48();}
			if(l=="Salir"or l=="SALIR" or l=="salir"){
			cout<<"\n\t";system("CLS");system("PAUSE");titulo(1,48);}
			cout<<"\n\tEl total de Femeninas es de:      "<<m1<<"\n";	
			cout<<"\tEl total de Masculinos es de:     "<<h1<<"\n";b=h1+m1;
			cout<<"\tEl total de personas es de:       "<<h1+m1<<"\n";po=100*m1/b;
			cout<<"\tEl promedio de Femeninas es de:   "<<po<<"%\n";
		cout<<"\tEl promedio de Masculino es de:   "<<100-po<<"%\n\t";final(1,48);}
void eje49(){int a,b,c,d,f,t,n;
		cout<<"\tIngrese 5 valores para luego ser sumados... \n\n";
			cout<<"\n\tIngrese el valor 1: ";cin>>a;
			cout<<"\n\tIngrese el valor 2: ";cin>>b;
			cout<<"\n\tSumatoria: "<<a+b<<"\n";
			cout<<"\n\tIngrese el valor 3: ";cin>>c;
			cout<<"\n\tSumatoria: "<<a+b+c<<"\n";
			cout<<"\n\tIngrese el valor 4: ";cin>>d;
			cout<<"\n\tSumatoria: "<<a+b+c+d<<"\n";
			cout<<"\n\tIngrese el valor 5: ";cin>>f;
			t=a+b+c+d+f;
			cout<<"\n\tSumatoria Total: "<<t<<"\n";
			cout<<"\n\n";n=t;
		for(t=1;t<=n;t++){cout<<t<<" ";}cout<<"\n";}
void eje50(){int n,c;
		cout<<"\tIngrese un valor para mostrar los numeros pares existentes entre 1 y ... ";cin>>c;
			cout<<"\n\t1 ";
			for(n=2;n<=c;n+=2){
			cout<<n<<" ";}
		cout<<"\n";}
void eje51(){int i,cq=0,sq=0,pq=0,cd=0,sd=0,pd=0,c=0,s=0,p=0,can;
		int v[15]={100,50,305,430,250,145,550,720,630,809,795,636,946,220};
			//int v[15];
			srand (time(NULL));
			system("CLS");titulo(1,51);
			can=15;for(i=0;i<can;i++){
			v[i]= rand()%990+10;
			//cout<<"\n\tIngrese el valor "<<i<<": ";
			//cin>>v[i]; 
			if(v[i]>550){sq=sq+v[i];cq++;
			}else if(v[i]>200){
			sd=sd+v[i];cd++;
			}else{s=s+v[i];c++;}}
			pq=sq/cq;pd=sd/cd;p=s/c;
			cout<<"\n\tTotal de valores\n\n";
			for(i=0;i<can;i++){
			cout<<"\t"<<v[i];}	
			cout<<"\n\n\tValores mayores a 550:\n\n";
			for(i=0;i<can;i++){
			if(v[i]>550) cout<<"\t"<<v[i];}
			cout<<"\n\n\tValores entre 200 y menores o iguales a 550:\n\n";
			for(i=0;i<can;i++){
			if(v[i]>200 && v[i]<=550)cout<<"\t"<<v[i];}
			cout<<"\n\n\tValores entre 0 y menores o iguales a 200:\n\n";
			for(i=0;i<can;i++){
			if(v[i]>0 && v[i]<=200)cout<<"\t"<<v[i];}
			cout<<"\n\n\tLa cantidad de los valores mayores a 550 es de:         "<<cq;
			cout<<"\n\tLa cantidad de los valores mayores a 201 o 550 es de:   "<<cd;
			cout<<"\n\tLa cantidad de los valores menores a 200 es de:         "<<c;
			cout<<"\n\tEl promedio de los valores mayores a 550 es de:         "<<pq;
			cout<<"\n\tEl promedio de los valores mayores a 201 o 550 es de:   "<<pd;
		cout<<"\n\tEl promedio de los valores mayores a 550 es de:         "<<p<<"\n";}
void eje52(){int c;	float va,su;
		cout<<"\tIngrese 10 valores para posteriormente ser sumados \n\n";
			while(c<10){c++;
			cout<<"\tIngrese el "<<c<<" numero: ";cin>>va;
		su=su+va;}cout<<"\n\tEl resultado de la sumatoria es de: "<<su<<"\n";}
void eje53(){int ed,c=0,c1=0,nu=0,su;float pr;
		cout<<"\tAcontinuacion Ingrese la edad del alumno \n\n";
			cout<<"\tIngrese la cantidad de alumnos que hay: ";cin>>nu;
			if(nu>0){cout<<"\n";
			while(c1<nu){c1++;
			cout<<"\tIngrese la edad del alumno "<<c1<<": ";cin>>ed;
			c=c+ed;su=c;pr=c;}}
			cout<<"\n\tEl total de alumnos que hay es de:  "<<nu;
			cout<<"\n\tLa sumatoria de edades es de:       "<<su;
		cout<<"\n\tEl promedio de edades es de:        "<<pr/nu<<"%\n";	}
void eje54(){float pr,es=1,c2,c1=0;int c=0;
		cout<<"\tAcontinuacion Ingrese la estatura de la persona \n";
			cout<<"\tEscriba 0 para mostar los resultados \n\n";cout<<"\n";
			while(c1<=es){c1++;
			cout<<"\tIngrese la estatura de la persona "<<c1<<" que es: ";
			cin>>es;c=c+es;pr=c;}c2=c1-1;
			cout<<"\n\tEl total de personas es de:          "<<c2;
			cout<<"\n\tLa sumatoria de las estaturas es de: "<<c<<"cm";
		cout<<"\n\tEl promedio de las esturas es de:    "<<pr/c2<<"%\n";		}
void eje55(){int c=0,c1=1,nu=0;float va,su=0;
		cout<<"\tIngrese 10 valores para posteriormente ser sumados \n\n";
			while(c1<=10){nu++;c1++;
			cout<<"\tIngrese el "<<nu<<" numero: ";
			cin>>va;
			c=c+va;
			su=c;}
		cout<<"\n\tEl resultado de la sumatoria es de: "<<su<<"\n";	}
void eje56(){int n,a=0,c=1,m=0,b=1;
		cout<<"\n\tAcontinuacion ingrese la cantidad de numeros Fibonacci que desea ver:\n\n\t";cin>>n;
			for(m=1;m<=n;m++){
			c=a+b;
			cout<<"\n        "<<m<<".  "<<b;
			a=b;
			b=c;}
		cout<<"\n";}
void eje57(){int d,ht,sh=0;float ph,su;
		cout<<"\tIngrese los siguientes datos para saber el salario del empleado \n";
			cout<<"\tIngrese el valor de la hora de trabajo:\n\n\t$";cin>>ph;
			cout<<"\n\tIngrese la cantidad de horas trabajadas en el dia:\n\n";
			for(d=1;d<=6;d++){
			cout<<"\tLas horas trabajadas en el dia "<<d<< " es de: ";cin>>ht;
			sh=ht+sh;}cout<<"\n\tEl total de horas trabajadas en la semana es de: "<<sh;
		cout<<"\n\tEl salario semanal de empleado es de: 		 "<<sh*ph<<"$\n";}
void eje58(){int r=0;float ka=0,kb=0;
		cout<<"\tValide los datos para saber en que kilometro de esa carretera se encontraran  \n";
			cout<<"\tIngrese el kilometro donde se encuentra la persona:\n\n\t";cin>>ka;
			cout<<"\n\tIngrese el kilometro donde se encuentra la otra persona:\n\n\t";cin>>kb;
			r=kb-ka;while(r>0){ka=ka+1;
			kb=kb-1;r=ka-kb;}
		cout<<"\n\tLas dos personas se encontraran en el kilometro: "<<-r<<"\n";}
void eje59(){	
		cout<<"\tTienda Tiki Taka, Ingrese los datos para saber el total de ventas\n";
			cout<<"\tIngrese el numero de ventas:\n\n\t";cin>>n;
			cout<<"\n";for(cn=1;cn<=n;cn++){
			cout<<"\tIngrese el valor de la venta "<<cn<<": ";
			cin>>v;tt=tt+v;if(v>1000){a1++;
			while(a<a1){t1=t1+v;a++;
			}}if(v>500 and v<1000){
			a2++;while(b1<a2){
			t2=t2+v;b1++;
			}}if(v>0 and v<=500){
			a3++;while(c<a3){
			t3=t3+v;c++;
			}}} cout<<"\n\n\tEl total de ventas tipo A fue de:        "<<a;
			cout<<"\n\tEl total de ventas tipo B fue de:        "<<b1;
			cout<<"\n\tEl total de ventas tipo C fue de:        "<<c;
			cout<<"\n\tLas ventas realizadas del tipo A fue de: "<<t1<<"$";
			cout<<"\n\tLas ventas realizadas del tipo B fue de: "<<t2<<"$";
			cout<<"\n\tLas ventas realizadas del tipo C fue de: "<<t3<<"$\n";
		cout<<"\n\tEl total de ventas fue de:        	 "<<tt<<"$\n";}
void eje60(){int t;long tn=0;float no=50,sa;
		cout<<"\tConstructora Tecnovivir Casas C.A. Ingrese los siguientes datos para saber la nomina  \n";
			cout<<"\tIngrese la cantidad de horas trabajadas por operario:\n\n\t";cin>>t;
			while(no>0){sa=t*30000;
			tn=tn+sa;no=no-1;}
			cout<<"\n\tLa nomina a pagar por un empleado es de:    "<<t*30000<<"$ Bolivares";
		cout<<"\n\tLa nomina a pagar por 50 empleados es de: "<<tn<<"$ Bolivares\n";}
void eje61(){char opc;
		cout<<"\tSeleccione la operacion que desee hacer en la registradora \n";
			cout<<"\n\t1.Registrar\n\t2.Mostrar\n\t3.Salir\n\n\t";cin>>opc;
			switch (opc){
			case('1'):system("CLS");cout<<"\n\n\tRegistro de valor\n";
			cout<<"\n\n\tIngrese el valor del producto: $";
			cin>>v1;cout<<"\tIngrese la cantidad de items:";
			cin>>c1;t=t+(v1*c1);system("CLS");eje61();break;
			case('2'):system("CLS");
			cout<<"\n\n\tTotal de la caja es de: $"<<t<<"\n\n\n\t";
			system("PAUSE");system("CLS");eje61();break;
			case('3'):final;break;
			default:cout<<"\n\t";cout<<"Opcion no valida vuelva a intentar";
			cout<<"\n\n\t";system("PAUSE");
		system("CLS");eje61();	}}
void eje62(){int c;	float va,su;
		cout<<"\tIngrese 10 valores para posteriormente ser sumados \n\n";
			while(c<10){c++;
			cout<<"\tIngrese el "<<c<<" numero: ";cin>>va;
		su=su+va;}cout<<"\n\tEl resultado de la sumatoria es de: "<<su<<"\n";}
void eje63(){cout<<"\tIngrese Acontinuacion valores para saber si son positivos o negativos \n\n";
		cout<<"\tIngrese la cantidad de numeros que desea ver: ";cin>>nu;
			while(cl<nu){cl++;
			cout<<"\n\tIngrese el valor "<<cl<<": ";cin>>ca;
			if(ca<0){c11++;
			while(cp<c11){cp++;
			}}if(ca>0){c2++;
			while(cn1<c2){cn1++;
			}}if(ca==0){c3++;
			while(num<c3){num++;
			}}}cout<<"\n\tLa cantidad de numeros Positivos que hay en: "<<nu<<" es de: "<<cn1;
		cout<<"\n\tLa cantidad de numeros negativos que hay en: "<<nu<<" es de: "<<cp+num<<"\n";	}
void eje64(){int i,can,c=0;int v[10];
		srand (time(NULL));
			system("CLS");titulo(1,64);
			cout<<"\tAcontinuacion ingrese 10 valores pars luego ser mostrados\n ";
			can=10;for(i=1;i<=can;i++){v[i]= rand()%990+10;
			cout<<"\n\tIngrese el valor "<<i<<": ";cin>>v[i]; }
			cout<<"\n\tLos Valores digitados fueron:\n\n";
			for(i=1;i<=can;i++){
			cout<<"\t"<<v[i];c=c+v[i];}
		cout<<"\n\n\tLa suma total es de: "<<c<<"\n";}
void eje65(){int i,can=100,m,cp=0,cn=0,s,sp=0,sn=0,nM=0,nm=0;int v[can],p[can],n[can];
		system("CLS");titulo(1,65);
			cout<<"\tIngrese un numero mayor que 10 y menor que "<<can<<": ";cin>>m;
			can=m;if(m>=10 and m<=can){
			for(i=0;i<m;i++){s=rand()%2+1;
			if(s==2)s=-1;else s=1;v[i]=(rand()%98+1)*s;
			if(v[i]>=0){p[cp]=v[i];
			sp=sp+v[i];if(v[i]>nM)nM=v[i];
			cp++;}else{n[cn]=v[i];
			sn=sn+v[i];
			if(v[i]<nm)nm=v[i];cn++;}}
			cout<<"\n\tvectores totales\n\n";
			for(i=0;i<m;i++){cout<<"\t("<<v[i]<<")";}
			cout<<"\n\n\tvectores Positivos\n\n";	
			for(i=0;i<cp;i++){cout<<"\t("<<p[i]<<")";}
			cout<<"\n\n\tvectores negativos\n\n";	
			for(i=0;i<cn;i++){cout<<"\t("<<n[i]<<")";}
			cout<<"\n\n\tLa suma de los numeros positivos es de:  +"<<sp<<" ";	
			cout<<"\n\tLa suma de los numeros negativos es de:  "<<sn<<" ";	
			cout<<"\n\tEl numero mayor es:                      +"<<nM<<" ";	
			cout<<"\n\tEl numero menor es:                      "<<nm<<"\n\n";}else{
		cout<<"\n\tIngrese valores entre 10 y 100\n\n";	}}
void eje66(){int i,can,va;int v[100];bool ex=false;
		srand (time(NULL));
			system("CLS");titulo(1,66);can=100;
			for(i=0;i<can;i++){
			v[i]= rand()%990+10;}
			cout<<"\n\tVectores\n\n";
			for(i=0;i<can;i++){cout<<"\t("<<i<<")"<<v[i];}	
			cout<<"\n\n\tIngrese el valor a buscar: ";
			cin>>va;for(i=0;i<can;i++){
			if(v[i]==va){
			cout<<"\n\tEl numero "<<v[i]<<" si se encuentra en la posicion "<<i<<"\n\t";
			ex=true;}}	if(ex==false){
		cout<<"\n\tNo se encuentra el valor\n\t";}}
void eje67(){int i,can;can=25;int v[can];
		system("CLS");
			titulo(1,67);for(i=0;i<can;i++){
			v[i]=rand()%98+1;}cout<<"\n\tVectores\n\n";
			for(i=1;i<can;i++){
			cout<<v[i]<<"\t";}
			cout<<"\n\n\tVectores Inversos\n\n";
		for(i=(can-1);i>0;i--){cout<<v[i]<<"\t";}cout<<"\n\n";}
void eje68(){int i=0,c=0,s=0,n=0;
		system("CLS");titulo(1,68);
			cout<<"\tAcontinuacion escriba varios valores para saber el promedio\n\tEscriba un numero negativo para mostrar\n";
			do{cout<<"\n\tIngrese un numero: ";
			cin>>n;if(n>0){s=s+n;c++;}
		}while(n>0);cout<<"\n\tEl promedio es: "<<s/c<<"\n";}
void eje69(){int i,f=5,c=5;float m[5][5];
		carmat(m,f,c);cout<<"\tMatriz completa\n\n";
			mosmat(m,f,c);cout<<"\tMatriz Aprobados\n\n";
			for(int f=0;f<5;f++){for(int c=0;c<5;c++){
			if(m[f][c]>=3.5)cout<<"\t"<<m[f][c];else cout<<"\t ";}
		cout<<"\n\n";}}
void mosmat(float m[5][5],int ft,int ct){
		srand(time(NULL));
			for(int f=0;f<ft;f++){
			for(int c=0;c<ct;c++){
			cout<<"\t"<<m[f][c];}
		cout<<"\n\n";}}
void carmat(float m[5][5],int ft,int ct){
		srand(time(NULL));
			for(int f=0;f<ft;f++){
			for(int c=0;c<ct;c++){
			float h=(rand()%49+11);
			//cout<<"Ingrese el valor de la nota "<<c<<": ";
			//cin>>m[f][c];
		m[f][c]=h/10;}}}
void eje70(){int i,f=5,c=5;int m[5][5], v[25];float su=0;
		carmat(m,v,f,c);
			cout<<"\tMatriz completa\n\n";mosmat(m,v,f,c);
			ord (v);i=0;for(int f=0;f<5;f++){
			for(int c=0;c<5;c++){m[f][c]=v[i];
			su=su+v[i];i++;}}
			cout<<"\tMatriz Ordenada\n\n";mosmat(m,v,f,c);
			cout<<"\tNumero menor: "<<v[0]<<"\n";//m[0][0]
			cout<<"\tNumero mayor: "<<v[24]<<"\n";//m[4][4]
			cout<<"\tPromedio: "<<su/25<<"\n";}
			void mosmat(int ma[5][5],int v[25],int ft,int ct){
			for(int f=0;f<ft;f++){for(int c=0;c<ct;c++){
			cout<<"\t"<<ma[f][c];}cout<<"\n\n";}}
			void ord(int v[25]){
			int aux=0;for(int i=0;i<24;i++){
			for(int j=(i+1);j<25;j++){
			if(v[j]<v[i]){aux=v[i];v[i]=v[j];v[j]=aux;}}}}
			void carmat(int ma[5][5],int v[25],int ft,int ct){
			srand(time(NULL));int j=0;for(int f=0;f<ft;f++){
			for(int c=0;c<ct;c++){ma[f][c]=rand()%90;
		v[j]=ma[f][c];j++;}}}
void eje71(){int i,f,c,k,sf=0,sc=0,v[3];//int x[3][3],y[3][3],r[3][3];
		int x[3][3]={{3,4,2},{8,9,1},{5,6,7}};
			int y[3][3]={{5,2,8},{1,9,3},{4,6,7}};
			int r[3][3];//cargar matrices
			/* srand(time(NULL));
			for(f=0;f<3;f++){
			for(c=0;c<3;c++){
			x[f][c]=rand()%9;
			y[f][c]=rand()%9;}
			}*/
			cout <<"\t Matriz x\n\n";mosmat (x,3,3);
			cout <<"\t Matriz x\n\n";mosmat (y,3,3);
			cout <<"\t Matriz resultante x\n\n";for(f=0;f<3;f++){
			for(c=0;c<3;c++){r[f][c]=0;
			for(k=0;k<3;k++){r[f][c]=r[f][c]+x[f][k]*y[k][c];}}}
			for(int f=0;f<3;f++){sf=0;sc=0;
			for(int c=0;c<3;c++){cout<<"\t"<<r[f][c];
			sf=sf+r[f][c];sc=sc+r[c][f];}v[f]=sc;
			cout<<"\t=\t"<<sf;cout<<"\n\n";}
			cout<<"\t"<<char(186)<<"\t"<<char(186)<<"\t"<<char(186);
			cout<<"\n\n";for(int c=0;c<3;c++)
			cout<<"\t"<<v[c];cout<<"\n\n";}
			void mosmat(int ma[3][3],int ft,int ct){
			for(int f=0;f<ft;f++){for(int c=0;c<ct;c++){
		cout<<"\t"<<ma[f][c];}cout<<"\n\n";}}
void titulo(int g, int e){
	int i;
	cout<<"\n\n\t"<<char(220);
	for(i=1;i<50;i++){
		cout<<char(220);}
	cout<<char(220);
	cout<<"\n\t"<<char(186)<<"                             \t\t\t  "<<char(219);
	cout<<"\n\t"<<char(186)<<"\t            Bienvenido       \t\t  "<<char(186)<<"";
	cout<<"\n\t"<<char(186)<<"\t      GUIA "<<g<<" C++ - Ejercicio "<<e<<"\t\t  "<<char(186)<<"\n";
	cout<<"\t"<<char(186)<<"                             \t\t\t  "<<char(186)<<"\n";
	cout<<"\t"<<char(200);
	for(i=1;i<50;i++){
		cout<<char(175);}
	cout<<char(188);
	cout<<"\n\n\n";}
void pre(){
	int i;
	cout<<"\n\n\t\t\t\t"<<char(220);
	for(i=1;i<50;i++){
		cout<<char(220);}
	cout<<char(220);
	cout<<"\n\t\t\t\t"<<char(186)<<"                             \t\t\t  "<<char(219);
	cout<<"\n\t\t\t\t"<<char(186)<<"\t            Bienvenido       \t\t  "<<char(186)<<"";
	cout<<"\n\t\t\t\t"<<char(186)<<"\t        Menu de ejercicios             \t  "<<char(186)<<"\n";
	cout<<"\t\t\t\t"<<char(186)<<"                             \t\t\t  "<<char(186)<<"\n";
	cout<<"\t\t\t\t"<<char(200);
	for(i=1;i<50;i++){
		cout<<char(175);}
	cout<<char(188);
	cout<<"\n\n\n";}
void limpiar(){
	cout<<"\n\n\t";
	system("PAUSE");
	system("CLS");
	main();}
void final(int g, int e){
	int i;
	cout<<"\n\t";
	system("PAUSE");
	system("CLS");
		cout<<"\n";
	cout<<"\t"<<char(220);
	for(i=1;i<51;i++){
		cout<<char(220);}
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
		cout<<char(175);}
	cout<<char(217);
	cout<<"\n\n";
	cout<<"\t";}
	
	
