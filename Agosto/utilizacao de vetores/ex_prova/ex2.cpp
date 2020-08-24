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
	int vet[20];
	int i,tenta=0,qtd_m5=0,qtd_m11=0;
	srand(time(NULL));
	printf("\n VETORES PRIMARIO \n -------------------------\n");
	for(i=0;i<=20;i++)
	{
		tenta = rand()%26;
		 while (tenta<5)
		{ 	
			tenta = rand()%26;
		}
		vet[i] = tenta;
		printf("\t Vet[%d] = %d \n ",i,vet[i]);
	}
		printf("\n VETORES M5 \n -------------------------\n");
	for(i=0;i<=20;i++)
	{
		if(vet[i] %5 == 0)
			{
				qtd_m5++;
				
			int m5[qtd_m5];				
				m5[qtd_m5]=vet[i] ;
				printf("\t Divisivel por  m5[%d] = %d \n  ",qtd_m5,m5[qtd_m5]);
			}						
	}
	printf("\n VETORES M11 \n -------------------------\n");
	for(i=0;i<=20;i++)
	{
		if(vet[i] %11==0)
			{			
				qtd_m11++;
				
			int m11[qtd_m11];					
				m11[qtd_m11]=vet[i] ;		
			printf("Divisivel por  m11[%d] = %d \n ",qtd_m11,m11[qtd_m11]);	
			}
	}	
}
