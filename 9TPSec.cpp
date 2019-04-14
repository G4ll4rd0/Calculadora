#include<stdio.h>  //Teorema de pitagoras
#include<math.h>
#include<stdlib.h>


int main()
{
	int opcion;
	float h,co,ca;
	
	do
	{	
	
		printf("Ingresa la funcion\n1)Hipotenusa\n2)Cateto Opuesto\n3)Cateto Adyacente\n4)Salir\n"); //Funcion
		scanf ("%i",&opcion);
		
		switch(opcion)
		{
		case 1: //Hipotenusa
			system("cls");
			printf("Ingrese cateto opuesto: ");
			scanf("%f",&co);
			printf("\nIngrese cateto adyacente: ");
			scanf("%f",&ca);
			
			h=sqrt((pow(ca,2)+pow(co,2)));
			
			printf("\nEl resultado de la hipotenusa es: %.2f",h);
			printf("\n");
			
			break;
		case 2: //Cateto Opuesto
			system("cls");
			printf("Ingrese hipotenusa: ");
			scanf("%f",&h);
			printf("\nIngrese cateto adyacente: ");
			scanf("%f",&ca);
			
			co=sqrt((pow(h,2)-pow(ca,2)));
			
			printf("\nEl resultado del cateto opuesto es: %.2f",co);
			printf("\n");
			
			break;
		case 3: //Cateto Adyacente
			system("cls");
			printf("Ingrese hipotenusa: ");
			scanf("%f",&h);
			printf("\nIngrese cateto opuesto: ");
			scanf("%f",&co);
			
			ca=sqrt((pow(h,2)-pow(co,2)));
			
			printf("\nEl resultado del cateto adyacente es: %.2f",ca);
			printf("\n");
			
			break;
		default:
		printf("\nGracias");
		}
	} while(opcion!=4);
	return 0;
}
