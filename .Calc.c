#include <stdio.h>
#include <stdlib.h>
int main(int argc, char *argv[])
{
	int opc;
	char childprim[]="MainPrim.exe", childsec[]="";
	do
	{
		printf("BIENVENIDO A LA CALCULADORA\n\n\n\n Que clase de alumno es?\n 1) Primaria\n 2) Secundaria\n 3) Otro\n 4) Deseo Salir\n");
		scanf("%i",&opc);
		switch(opc)
		{
			case 1:
				system("cls");
				system(childprim);
				break;
			case 2:
				system("cls");
				system(childsec);
				break;
			case 3:
				system("cls");
				printf("Esta no es una calculadora para usted\n\n");
				break;
			case 4:
				break;
			default:
				printf("Esa no es una opcion valida\n\n");
				break;
		}
	}
	while(opc<3||opc>4);
	printf("Gracias por usar esta calculadora");
	return 0;
}
