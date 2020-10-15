

#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <conio.h>

main(){
	
	
	int map[7][7] = {0,2,11,6,15,11,1,
  				2,0,7,12,4,2,15,
				11,7,0,11,8,3,13,
				6,12,11,0,10,2,1,
				15,4,8,10,0,5,13,
				11,2,3,2,5,0,14,
				1,15,13,1,13,14,0};
				
				
	printf("\n\n MOSTRANDO A PARTE DE BAIXO");
	for(int i=0;i<7;i++){
		printf("\n");
		for(int j=0;j<7;j++){
			if(j<i || j==i){
				printf("%d ",map[i][j]);
			}else{
				printf("* ");
			}
		}
	}			
				
	printf("\n\n MOSTRANDO A PARTE DE CIMA");
	for(int i=0;i<7;i++){
		printf("\n");
		for(int j=0;j<7;j++){
			if(j>i || j==i){
				printf("%d ",map[i][j]);
			}else{
				printf("* ");
			}
		}
	}
	
}
