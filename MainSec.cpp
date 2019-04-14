#include<stdio.h>
#include<math.h>
#include<stdlib.h>
/* run this program using the console pauser or add your own getch, system("pause") or input loop */
int main(int argc, char** argv)
{
	int sas=0;
	char child1[]="", child2[]="", child3[]="", child4[]="", child5[]="", child6[]="", child7[]="", child8[]="", child9[]="", child10[]="", child11[]="", child12[]="";
	do
	{
		system("cls");
		printf("BIENVENIDO A LA CALCULADORA DE SECUNDARIA\n\n\n");
		printf("Que desea hacer?\n\n 1) números mixtos, enteros y decimales\n 2)Suma, reta, multiplicación y división de fracciones\n 3)Números primo\n 4) Operaciones con números negativos\n 5) Potencias de 10\n 6) Notación científica\n 7) Raíz cuadrada\n 8) Exponenciales\n 9)Teorema de Pitágoras para los 3 lados\n 10) Volumen de figuras de todas las figuras\n 11)La chicharronera\n 12) Volver al Menu Anterior\n\n");
		scanf("%i",&sas);
		switch(sas)
		{
			case 1:
				system("cls");
				system(child1);
				break;
			case 2:
				system("cls");
				system(child2);
				break;
			case 3:
				system("cls");
				system(child3);
				break;
			case 4:
				system("cls");
				system(child4);
				break;
			case 5:
				system("cls");
				system(child5);
				break;
			case 6:
				system("cls");
				system(child6);
				break;
			case 7:
				system("cls");
				system(child7);
				break;
			case 8:
				system("cls");
				system(child8);
				break;
			case 9:
				system("cls");
				system(child9);
				break;
			case 10:
				system("cls");
				system(child10);
				break;
			case 11:
				system("cls");
				system(child11);
				break;

			case 12:
				system("cls");
				break;
		}
	}while(sas<15);
	return 0;
}
