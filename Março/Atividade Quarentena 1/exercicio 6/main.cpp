#include <conio.h>
#include <stdio.h>
 main()
 {
		int valor,vezes,resultado;
		printf("De qual numero vc quer a tabuada? \n");
		scanf("%d",&valor);
		printf(" \n");
		
		for(int i=0;i<=10;i++)
		{
			resultado=i*valor;
			printf("%d X %d = %d \n",valor,i,resultado);
		}
		
}
