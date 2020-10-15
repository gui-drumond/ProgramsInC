/*Faça um algoritmo que leia uma matriz bidimensional 3x4, em seguida, calcule e
mostre sua transposta. */

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

main () {
    int a[3][5], b[3][5],c[3][5];
	int i,j,ac=0; 
    srand(time(NULL));
    //entrada de dados na matriz...
    for(int i=0;i<=2;i++)
        for(int j=0;j<=4;j++){
            a[i][j] = rand()%10;    
			b[i][j] = rand()%10;     
			c[i][j] = a[i][j]+b[i][j];          
        }
        
    //processamento...
    for(int i=0;i<=2;i++)
	{
	
        for(int j=0;j<=4;j++)
		{
            printf("%d ",a[i][j]);
        }
        printf("\n\n");
	}
	printf("\n\n\n\n");
	 for(int i=0;i<=2;i++)
	 {
	
        for(int j=0;j<=4;j++)
		{
            printf("%d ",b[i][j]);
        }
        printf("\n\n");
	}
	printf("\n\n\n\n");
	for(int i=0;i<=2;i++)
	{
	
        for(int j=0;j<=4;j++)
		{
            printf("%2d ",c[i][j]);
        }
        printf("\n\n");
	}
	
        
    
}
