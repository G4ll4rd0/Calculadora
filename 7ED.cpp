#include <stdio.h>

int main()
{
	int n, marks[n], i, sum = 0, media, mediana, moda, j, temp, s, contModa=0, arrModa[n], posModa=0, posMayorModa=0, mayorModa;

    printf("Enter n: ");
    scanf("%d", &n);
	
	//Media
    for(i=0; i<n; ++i)
    {
        printf("Enter number%d: ",i+1);
        scanf("%d", &marks[i]);
        sum += marks[i];
    }
    media = sum/n;
    printf("La media es : %d", media);
     
     //Mediana
    for (i = 0; i < (n - 1); ++i)
	{
    	for (j = 0; j < n - 1 - i; ++j )
    	{
           if (marks[j] > marks[j+1])
           {
                temp = marks[j+1];
                marks[j+1] = marks[j];
                marks[j] = temp;
           }
           
    	}
	}
	if(n%2!=0) 
	{
        printf("\nLa mediana es : %d\n",marks[n/2]);
    } else {
    	printf("\nLa mediana 1 es : %d\n",marks[n/2]);
        printf("\nLa mediana 2 es : %d\n",marks[(n/2)-1]);
    }
	 
     //Moda 
    for(i=0;i<n;i++) 
	{
        arrModa[i]=0;
    }
	for(i=0;i<n;i++)
	{
        contModa = marks[i];
        posModa = i;
        for(j=i;j<n;j++) 
		{
            if(marks[j]==contModa) 
			{
			arrModa[posModa]++;
			}
        }
    }
    mayorModa=arrModa[0];
    posMayorModa = 0;
    for(i=0;i<n;i++) 
	{
        if(arrModa[i]>mayorModa) 
		{
            posMayorModa=i;
            mayorModa=arrModa[i];
        }
    }
    printf("\nLa moda es : %d",marks[posMayorModa]);

	return 0;
}
