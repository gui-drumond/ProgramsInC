/*
Faça um programa que irá gerar 20 valores aleatórios reais
na faixa de 0.00 a 10.00 e atribuir os valores em um vetor.
após isso, calcular a média dos valores e informar quantos
valores gerados estão acima da média calculada.
*/
#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#include<math.h>
main()
{
	float vet[20],sorteado,calc=0,media;
	int i=0;
	srand(time(NULL));
	for(;i<=19;i++)
	{
		sorteado = rand()% 11;
		vet[i] = sorteado/11+rand()% 10;
		printf("Vet[%d] = %.2f \n",i,vet[i]);
		calc = calc + vet[i];
	}
	media= calc/i;
	printf("A media total eh: %.2f",media);
}
