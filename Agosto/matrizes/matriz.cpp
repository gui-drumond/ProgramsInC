#include<stdio.h>
#include<stdlib.h>
#include<time.h>

main()
{
	int m[4][3] ,i_m[3][4]; // Declaracao da matriz "m" de 3 linhas e 2 colunas
	int i,j,ac=0;
	
	srand(time(NULL));
	
	for(i=0;i<=4;i++)
		for(j=0;j<=3;j++)
		{
			m[i][j] = rand()%10;
		//printf("digite m[%d] [%d] = %d \n",i,j,m[i][j]);
			
		}
		
	for(i=0;i<=4;i++)
		for(j=0;j<=3;j++)
		{
		ac=ac+m[i][j];
		i_m[j][i] = m[i][j];
		
		//printf("digite m[%d] [%d] = %d \n",i,j,m[i][j]);
			
		}
	printf("\n Matriz 1:\n");
	
	//mostrar o vetor em formato de matriz 1
	for(i=0;i<=4;i++)
	{
		
		for(j=0;j<=3;j++)
		{
			printf("%d ",m[i][j]);
					
		}
		printf("\n\n");
	}
	
//	printf("Soma dos valores = %d \n",ac);
	printf("\n Matriz Transposta:\n");
		//mostrar o vetor em formato de matriz transposta
		
		
	for(i=0;i<=4;i++)
	{
		
		for(j=0;j<=3;j++)
		{
			printf("%d ",i_m[i][j]);
					
		}
		printf("\n\n");
	}

//	printf("Soma dos valores = %d \n",ac);
}
