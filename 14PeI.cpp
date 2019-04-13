#include<stdio.h>
int main()
{
	int sal;
	do
	{
		printf("Sus opciones son:\n 1) Convertir\n 2) Volver al menu anterior\n");
		scanf("%i",&sal);
		switch(sal)
		{
			case 1:
				int x;
				printf("Ingrese un numero: ");
				scanf("%i",&x);
				if (x % 2==0)
				{
					printf("el numero es par\n\n\n");
				}
				else
				{
					printf("el numero es impar\n\n\n");	
				}
				break;
			case 2:
				break;
			default:
				printf("Esa no es una opcion valida\n\n");
		}
	}while(sal!=2);
	return 0;
}
