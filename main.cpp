#include<iostream>
#include<conio.h>
#include <stdlib.h>


using namespace std;

void mostrarFechaHora(int anio,int mes,int dia,int hora,int minuto);

int main()
{
int a,*dir_a;
int m,*dir_m;
int d,*dir_d;
int h,*dir_h;
int mi,*dir_mi;

dir_a=&a;
dir_m=&m;
dir_d=&d;
dir_h=&h;
dir_mi=&mi;


cout<<"Ingrese anio:";
cin>>a;
cout<<"Ingrese mes:";
cin>>m;
cin.ignore(1000000, '\n');
cout<<"Ingrese dia:";
cin>>d;
cin.ignore(1000000, '\n');
cout<<"Ingrese hora:";
cin>>h;
cin.ignore(1000000, '\n');
cout<<"Ingrese minuto:";
cin>>mi;
cout<<"\n";

mostrarFechaHora(*dir_a,*dir_m,*dir_d,*dir_h,*dir_mi);

getch();
return 0;
}

void mostrarFechaHora(int anio,int mes,int dia,int hora,int minuto)
{

char cadena[32];
itoa(anio,cadena,10);
itoa(mes,cadena,10);
itoa(dia,cadena,10);
itoa(hora,cadena,10);
itoa(minuto,cadena,10);
switch (mes){
	case 1 : cout<<dia;cout<<" de ";cout<<"enero";cout<<" de ";cout<<anio;cout<<",";cout<<hora;cout<<":";cout<<minuto<<endl;
	break;
	
	case 2 : cout<<dia;cout<<" de ";cout<<"febrero";cout<<" de ";cout<<anio;cout<<",";cout<<hora;cout<<":";cout<<minuto<<endl;
	break;
	
	case 3 : cout<<dia;cout<<" de ";cout<<"marzo";cout<<" de ";cout<<anio;cout<<",";cout<<hora;cout<<":";cout<<minuto<<endl;
	break;
	
	case 4 : cout<<dia;cout<<" de ";cout<<"abril";cout<<" de ";cout<<anio;cout<<",";cout<<hora;cout<<":";cout<<minuto<<endl;
	break;
	
	case 5 : cout<<dia;cout<<" de ";cout<<"mayo";cout<<" de ";cout<<anio;cout<<",";cout<<hora;cout<<":";cout<<minuto<<endl;
	break;
	
	case 6 : cout<<dia;cout<<" de ";cout<<"junio";cout<<" de ";cout<<anio;cout<<",";cout<<hora;cout<<":";cout<<minuto<<endl;
	break;
	
	case 7 : cout<<dia;cout<<" de ";cout<<"julio";cout<<" de ";cout<<anio;cout<<",";cout<<hora;cout<<":";cout<<minuto<<endl;
	break;
	
	case 8 : cout<<dia;cout<<" de ";cout<<"agosto";cout<<" de ";cout<<anio;cout<<",";cout<<hora;cout<<":";cout<<minuto<<endl;
	break;
	
	case 9 : cout<<dia;cout<<" de ";cout<<"septiembre";cout<<" de ";cout<<anio;cout<<",";cout<<hora;cout<<":";cout<<minuto<<endl;
	break;
	
	case 10 : cout<<dia;cout<<" de ";cout<<"octubre";cout<<" de ";cout<<anio;cout<<",";cout<<hora;cout<<":";cout<<minuto<<endl;
	break;
	
	case 11 : cout<<dia;cout<<" de ";cout<<"noviembre";cout<<" de ";cout<<anio;cout<<",";cout<<hora;cout<<":";cout<<minuto<<endl;
	break;
	
	case 12 : cout<<dia;cout<<" de ";cout<<"diciembre";cout<<" de ";cout<<anio;cout<<",";cout<<hora;cout<<":";cout<<minuto<<endl;
	break;
}



}
