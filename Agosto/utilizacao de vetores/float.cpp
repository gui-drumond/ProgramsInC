/*
	Preencher um vetor "v" de 10 posicoes com numeros reais
	de 0.00 ate 10.00
*/
#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#include<math.h>
main()
{
	float vet[10],sorteado;
	int i;
	srand(time(NULL));
	for(i=0;i<=10;i++)
	{
		sorteado = rand()% 11;
		vet[i] = sorteado/11+rand()% 11;
		printf("Vet[%d] = %.2f \n",i,vet[i]);
		
	}
}
