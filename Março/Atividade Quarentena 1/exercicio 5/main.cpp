#include <conio.h>
#include <stdio.h>
 main()
 {
		int vi,fi,resultado,soma;
		printf("digite o primeiro numero agora. \n");
		scanf("%d",&vi);
		printf("digite o segundo numero agora. \n");
		scanf("%d",&fi);
		printf(" \n");
		resultado=vi;
		for(int i=vi+1;i<fi;i++)
		{
			printf("%d \n",i);
			soma=soma+i;
			
		}
		printf("\n resultado: %d",soma);
}
