#include<stdio.h>
#include<math.h>
#include<stdlib.h>
/* run this program using the console pauser or add your own getch, system("pause") or input loop */
int main(int argc, char** argv)
{
	int sas=0;
	char child1[]="", child2[]="2VP.exe", child3[]="3FG.exe", child4[]="", child5[]="", child6[]="", child7[]="7ED.exe", child8[]="8CT.exe", child9[]="", child10[]="", child11[]="", child12[]="", child13[]="13Romanos.exe", child14[]="14PeI";
	do
	{
		system("cls");
		printf("BIENVENIDO A LA CALCULADORA DE PRIMARIA\n\n\n");
		printf("Que desea hacer?\n\n 1) Calcuadora Basica (Suma, Resta, Multiplicacion o Division)\n 2) Valor posicional\n 3) Areas y Perimetros de Figuras Geometricas\n 4) Operaciones con Fracciones\n 5) Clasificacion de Angulos\n 6) Desigualdades Matematicas\n 7) Estadistica Descriptiva (Media, Mediana y Moda)\n 8) Conversiones de Tiempo\n 9) Conversiones de Peso\n 10) Conversion de Decimal a Porcentaje\n 11)Pruebas de Divisibilidad\n 12) Conversion de Unidades Metricas\n 13) Convertidor de Numeros Arabigos a Romanos\n 14) Saber si el numero es par o impar\n 15) Volver al Menu Anterior\n\n");
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
				system(child12);
				break;
			case 13:
				system("cls");
				system(child13);
				break;
			case 14:
				system("cls");
				system(child14);
				break;
			case 15:
				system("cls");
				break;
		}
	}while(sas!=15);
	return 0;
}
