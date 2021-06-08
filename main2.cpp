#include<iostream>
#include<conio.h>
#include<string.h>
using namespace std;

//Prototipo de Función
void pedirDatos();
int contarLetras(char *);

char fraseUsuario[100];

int main(){
	pedirDatos();
	cout<<"\nLa longitud de la cadena es: "<<contarLetras(fraseUsuario);	
	
	getch();
	return 0;
}

void pedirDatos(){
	cout<<"Ingrese cadena: ";
	cin.getline(fraseUsuario,100,'\n');
	
	strupr(fraseUsuario); //Pasar el nombre a mayuscula 
}

int contarLetras(char *frase){
	int cont = 0;
	
	while(*frase){ //mientras nombre no sea nulo '\0'
		switch(*frase){
		case 'A': 
			case 'B':
			    case 'C':
			    	case 'D':
			    		case 'E':
			    			case 'F':
			    				case 'G':
			    					case 'H':
			    						case 'I':
			    							case 'J':
			    								case 'K':
			    									case 'L':
			    										case 'M':
			    											case 'N':
			    												case 'Ñ':
			    													case 'O':
			    														case 'P':
			    															case 'Q':
			    																case 'R':
			    																	case 'S':
			    																		case 'T':
			    																			case 'U':
			    																				case 'V':
			    																					case 'W':
			    																						case 'X':
			    																							case 'Y':
			    																								case 'Z': cont++;
		}
		frase++;
	}
	
	return cont;
}
