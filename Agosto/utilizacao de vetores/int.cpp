/*
	Preencher um vetor "vet" de 10 posicoes com numeros inteiros
	de 5.00 ate 10.00
*/
#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#include<math.h>
main()
{
	int vet[10];
	int i,tenta=0;
	srand(time(NULL));
	for(i=0;i<=9;i++)
	{
		tenta =rand()%11;
		 while (tenta<5)
		{ 
		tenta =rand()%11;
		}
		vet[i] = tenta;
		printf("Vet[%d] = %d \n",i,vet[i]);
		
	}
}
