#include <conio.h>
#include <stdio.h>


/*
main() 
{
	int a,b;
	printf("informe o valor: ");
	scanf("%d",&a);
	if(a<0)
	{
		b=a*-1;
		printf("%d",b);
	}
	else
	{
		printf("%d",a);
	}
	
}
*/

main() 
{
	int a,b,c,t;
	printf("informe o valor: ");
	scanf("%d",&a);
	printf("informe o valor 2 : ");
	scanf("%d",&b);
	printf("informe o valor 3 : ");
	scanf("%d",&c);
	
	t = b+c>=a || b+a>=c || a+c>=b? 1  : 0 ;
	if(t==1)
	{
		printf("esta no padrao para ser um triangulo !\n ");
		if(a==b && a==c && b==c && b==a && c==a && c==b )
		{
			printf("eh uma traingulo : equilatero!\n");
		}
		if(a==b && a==c || b==c && b==a||c==a && c==b)
		{
			printf("eh uma traingulo : isoceles!\n");
		}
		if(a!=b && a!=c && b!=c && b!=a && c!=a && c!=b)
		{
			printf("eh uma traingulo : escaleno!\n");
		}
		
	}
	
	printf("\n FIM!...");
	
}

