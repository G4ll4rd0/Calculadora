#include<stdio.h>  //Volumenes
#include<math.h>
#include<stdlib.h>

int main()
{
	int funcion;
	float v,a,b,c,h,r,x1,p,pi=3.1415;
	
	do
	{	
	
		printf("\nIngresa la funcion: \nVolumen de:\n1)Prisma Triangular\n2)\Prisma Cuadrangular\n3)Prisma Pentagonal\n4)Cubo\n5)Piramide\n6)Cilindro\n7)Cono\n8)Esfera\n9)Paralelepipedo\n10)Salir\n"); //Volumen
		scanf ("%i",&funcion);
		
		switch(funcion)
		{
		case 1: //Prisma Triangular
			system("cls");
			printf("Ingrese la base del la triangulo: ");
			scanf("%f",&a);
			printf("Ingrese la altura del triangulo: ");
			scanf("%f",&c);
			printf("Ingrese la altura de la piramide: ");
			scanf("%f",&h);
			
			b=a*c;
			v=b*h;        
			
			printf("\nEl resultado del volumen del prisma cuadrangular es: %.2f",v);
			printf("\n");
			
			break;
		case 2: //Prisma Cuadrangular
			system("cls");
			printf("Ingrese un lado de la base: ");
			scanf("%f",&a);
			printf("Ingrese la altura: ");
			scanf("%f",&h);
			
			b=a*a;
			v=b*h;        
			
			printf("\nEl resultado del volumen del prisma cuadrangular es: %.2f",v);
			printf("\n");
			
			break;
		case 3: //Prisma Pentagonal
			system("cls");
			printf("Ingrese el lado: ");
			scanf("%f",&a);
			printf("Ingrese la apotema: ");
			scanf("%f",&b);
			printf("Ingrese la altura: ");
			scanf("%f",&h);
			
			p=a*5;
			c=(p*b)/2;  
			v=c*h;        
			
			printf("\nEl resultado del volumen del prisma pentagonal es: %.2f",v); 
			printf("\n");  
			
			break;
		case 4: //Cubo
			system("cls");
			printf("Ingrese el lado: ");
			scanf("%f",&a);
			
			v=pow(a,3);        
			
			printf("\nEl resultado del volumen del cubo es: %.2f",v);
			printf("\n");
			
			break;
		
		case 5: //Piramide
			system("cls");
			printf("Ingrese valor del lado de la base: "); 
			scanf("%f",&a);
			printf("Ingrese valor de la altura: "); 
			scanf("%f",&h);
			
			b=a*a;
			v=(1/3)*b*h;
			
			printf("\nEl resultado del volumen de la piramide es: %.2f",v);
			printf("\n");
			
			break;
		case 6: //Cilindro
			system("cls");
			printf("Ingrese el radio: ");
			scanf("%f",&r);
			printf("Ingrese la altura: ");
			scanf("%f",&h);
			
			v=pi*pow(r,2)*h;        
			
			printf("\nEl resultado de la area del volumen del cilindro es: %.2f",v);
			printf("\n");
		
			break;
		case 7: //Cono
			system("cls");
			printf("Ingrese el radio: ");
			scanf("%f",&r);
			printf("Ingrese la altura: ");
			scanf("%f",&h);
			
			v=(1/3)*pi*pow(r,2)*h;        
			
			printf("\nEl resultado del volumen del cono es: %.2f",v);
			printf("\n");
		
			break;
		case 8: //Esfera
			system("cls");
			printf("Ingrese el radio: ");
			scanf("%f",&r);
			
			v=(4/3)*pi*pow(r,3);        
			
			printf("\nEl resultado del volumen de la esfera es: %.2f",v);
			printf("\n");
		
			break;
		case 9: //Paralelepipedo
			system("cls");
			printf("Ingrese la base del romboide: ");
			scanf("%f",&a);
			printf("Ingrese la altura del romboide: ");
			scanf("%f",&b);
			printf("Ingrese la altura del paralelepipedo: ");
			scanf("%f",&h);
			
			c=a*b;
			v=c*h;
			
			printf("\nEl resultado de la area del Pentagono es: %.2f",v);
			printf("\n");
		
			break;
		default:
			system("cls");
			printf("\nGracias");
		}
	} while(funcion!=10);
	return 0;
}
