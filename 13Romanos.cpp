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
				int m,c,x,i,a,s;
				printf("Ingrese el numero que quiere convertir (entre 1 y 3999): \n");
				scanf("%i",&a);
				printf("El numero %i es equivalente en Romanos a: ",a);
				m = a/1000;
				c = (a%1000)/100;
				x = (a%100)/10;
				i = (a%10);
				for(s=1;s<(m+1);s++)
				{
					printf("M");
				}
				switch(c)
				{
					case 1:
						printf("C");
						break;
					case 2:
						printf("CC");
						break;
					case 3:
						printf("CCC");
						break;
					case 4:
						printf("CD");
						break;
					case 5:
						printf("D");
						break;
					case 6:
						printf("DC");
						break;
					case 7:
						printf("DCC");
						break;
					case 8:
						printf("DCCC");
						break;
					case 9:
						printf("CM");
						break;
					default:
						break;
				}
				switch(x)
				{
					case 1:
						printf("X");
						break;
					case 2:
						printf("XX");
						break;
					case 3:
						printf("XXX");
						break;
					case 4:
						printf("XL");
						break;
					case 5:
						printf("L");
						break;
					case 6:
						printf("LX");
						break;
					case 7:
						printf("LXX");
						break;
					case 8:
						printf("LXXX");
						break;
					case 9:
						printf("XC");
						break;
					default:
						break;
				}
				switch(i)
				{
					case 1:
						printf("I");
						break;
					case 2:
						printf("II");
						break;
					case 3:
						printf("III");
						break;
					case 4:
						printf("IV");
						break;
					case 5:
						printf("V");
						break;
					case 6:
						printf("VI");
						break;
					case 7:
						printf("VII");
						break;
					case 8:
						printf("VIII");
						break;
					case 9:
						printf("IX");
						break;
					default:
						break;
				}
			case 2:
				break;
			default:
				printf("Esa no es una opcion valida\n\n");
		}
		printf("\n\n");
	}while(sal!=2);
	return 0;
}
