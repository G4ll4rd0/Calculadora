#include<stdio.h>
int main()
{
	int sal;
	do
	{
		printf("Sus opciones son:\n 1) Seguir\n 2) Volver al menu anterior\n");
		scanf("%i",&sal);
		switch(sal)
		{
			case 1:
				int m,c,d,u,a;
				printf("\nIngrese el numero del que quiere saber su valor posicional: ");
				scanf("%i",&a);
				m = a/1000;
				c = (a%1000)/100;
				d = (a%100)/10;
				u = (a%10);
				printf("\nSon %i Millares\nSon %i Centenas\nSon %i Decenas\nSon %i Unidades\n",m,c,d,u);
				break;
			case 2:
				break;
			default:
				printf("\nEsa no es una opcion valida\n\n");
		}
		printf("\n\n");
	}while(sal!=2);
	return 0;
}
