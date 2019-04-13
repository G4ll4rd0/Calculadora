#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#define Pi  3.14159265359
int main()
{
	int i;
	float a, b, c,d,e,z;
	do
	{
		printf("Escoga una de las siguientes opciones: \nCalcular el area y perimetro de: \n 1 Cuadrado \n 2 Triangulo\n 3 Circulo \n 4 Rombo\n 5 Trapecio \n 6 Poligonos Regulares \n 7 Romboide\n 8 Volver al Menu Anterior\n");
		scanf("%i", &i);
		switch(i)
		{
			case 1:
				system("cls");
				printf("ingrese el lado\n");
				scanf("%f", &a);	
				c = pow(a, 2);
				z = a*4;
				break;
			case 2:
				system("cls");
				printf("ingrese la base y la altura\n");
				scanf("%f, %f", &a, &b);
				c = (a * b) / 2;
				z = a+(2*(sqrt(pow((a/2),2)+pow(b,2))));
				break;
			case 3:
				system("cls");
				printf("ingrese su radio\n");
				scanf("%f", &a);
				c = Pi * pow(a,2);
				z = Pi * (a*2);
				break;
			case 4:
				system("cls");
				printf("ingrese las dos diagonales\n");
				scanf("%f, %f", &a, &b);
				c = (a*b)/2;
				z = 4*(sqrt(pow((a/2),2)+pow((b/2),2)));
				break;
			case 5:
				system("cls");
				printf("ingrese las dos bases(menor y mayor) y la altura\n");
				scanf("%f, %f, %f", &a, &b, &d);
				c = ((a+b)*d)/2;
				z = a+b+((sqrt(pow(d,2)+ (pow(((b-a)/2),2))))*2);
				break;
			case 6:
				system("cls");
				printf("ingrese un lado y el apotema\n");
				scanf("%f, %f", &a, &b);
				printf("ingrese el numero de lados\n");
				scanf("%f",&e);
				z = e*a;
				c = (z*b)/2;
				break;
			case 7:
				system("cls");
				printf("Ingrese la base, la altura y un lado\n");
				scanf("%f,%f,%f",a,b,d);
				c=a*b;
				z=(2*a)+(2*d);
				break;
			case 8:
				system("cls");
				break;
			default:
				system("cls");
				printf("Esa no es una opcion valida\n\n");
		}
		if(i<8)
		{
			printf("El area es %.2f y el perimetro es %.2f\n\n\n\n", c,z);
		}
	}
	while(i!=8);	
	return 0;
}
