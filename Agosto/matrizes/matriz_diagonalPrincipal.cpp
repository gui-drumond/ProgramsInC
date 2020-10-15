/*Faça um algoritmo que leia uma matriz bidimensional 3x4, em seguida, calcule e
mostre sua transposta. */

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

main () {
    int m[4][4], mt[4][4]; 
    int i,j,ac=0; 
    srand(time(NULL));
    //entrada de dados na matriz...
    for(int i=0;i<4;i++)
	{
	
        for(int j=0;j<4;j++){
            m[i][j] = rand()%10;            
        }
	}
	//processamento...
    for(int i=0;i<4;i++)
	{
	
        for(int j=0;j<4;j++){
        	
            
            printf("%2d ",m[i][j]);
        }
          printf("%2d \n",m[i][j]);
	}
	printf("\n\n\n",m[i][j]);
    
    for(i=0;i<4;i++)
	{
	
		for(j=0;j<4;j++)
		{
			mt[i][j] = m[j][i];
			if(i==j)
			{
				
				mt[i][j]=mt[i][j]* mt[i][j];
				printf("%2d ",mt[i][j]);
			}
			printf("%2d ",mt[i][j]);
		//printf("digite m[%d] [%d] = %d \n",i,j,m[i][j]);
			
		}
		printf("%2d \n",mt[i][j]);
	}
	
	
}
