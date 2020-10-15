/*Faça um algoritmo que leia uma matriz bidimensional 3x4, em seguida, calcule e
mostre sua transposta. */

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

main () {
    int m[3][4], mt[4][3]; 
    srand(time(NULL));
    //entrada de dados na matriz...
    for(int i=0;i<=2;i++)
        for(int j=0;j<=3;j++){
            m[i][j] = rand()%10;            
        }
    //processamento...
    for(int i=0;i<=3;i++)
        for(int j=0;j<=2;j++){
            mt[i][j] = m[j][i];
        }
        
    //mostrar resultado no formato de matriz...
    for(int i=0;i<=2;i++) {
        for(int j=0;j<=3;j++){
            // printf("m[%d][%d] = %d\n",i,j,m[i][j]);
            printf("%d ",m[i][j]);
        }
        printf("\n");
    }
    
    printf("\n\n");
            
    //mostrar resultado no formato de matriz transposta...
    for(int i=0;i<=3;i++) {
        for(int j=0;j<=2;j++){
            printf("%d ",mt[i][j]);
        }
        printf("\n");
    }
}
