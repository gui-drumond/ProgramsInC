#include<stdio.h>
#include<conio.h>
#include<ctype.h>
#include<stdlib.h>


main(){

  int map[7][7] = {
		  				0,2,11,6,15,11,1,
		                2,0,7,12,4,2,15,
		                11,7,0,11,8,3,13,
		                6,12,11,0,10,2,1,
		                15,4,8,10,0,5,13,
		                11,2,3,2,5,0,14,
		                1,15,13,1,13,14,0
				  };

    int cd1 = 0;
    int cd2 = 1;

    printf("\n\n A VIAGEM FOI INICIADA SAO NUMEROS ENTRE 0 E 7\n");
    int dist = 0;
    while(cd1!=0 || cd2 !=0){
    	
		printf("\n\n A VIAGEM CONTINUA !!! VALORES ENTRE 0 E 7\n");
        
		printf("\nInsira a primeira cidade: ");
        scanf("%d",&cd1);
        printf("Insira a proxima cidade: ");
        scanf("%d",&cd2);
        dist += map[cd1][cd2];
        printf("A distancia entre as cidades: %d horas \n A distancia total de sua viagem: %d",map[cd1][cd2],dist,"\n");
    	getch();
    	system("cls");
	}
    printf("\n Fim");

    
}
