#include<stdio.h>
#include<conio.h>
#include<ctype.h>

main(){

  int map[7][7] = {0,2,11,6,15,11,1,
                  2,0,7,12,4,2,15,
                11,7,0,11,8,3,13,
                6,12,11,0,10,2,1,
                15,4,8,10,0,5,13,
                11,2,3,2,5,0,14,
                1,15,13,1,13,14,0};

    printf("MOSTRANDO A PARTE DE CIMA");
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

    printf("\n\nMOSTRANDO A PARTE DE BAIXO");
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

    int c1 = 0;
    int c2 = 1;
    printf("\n\nNUMEROS ENTRE 0 E 7\n");
    while(c1!=c2){
        printf("\nInsira a primeira cidade: ");
        scanf("%d",&c1);
        printf("Insira a segunda cidade: ");
        scanf("%d",&c2);
        printf("A distancia entre as cidades: %d horas",map[c1][c2],"\n");
    }

    printf("\n\nCOMEÇANDO A VIAGEM NUMEROS ENTRE 0 E 7\n");
    int dist = 0;
    while(c1!=3){
        printf("\nInsira a primeira cidade: ");
        scanf("%d",&c1);
        printf("Insira a próxima cidade: ");
        scanf("%d",&c2);
        dist += map[c1][c2];
        printf("A distancia entre as cidades: %d horas \n A distancia total de sua viagem: %d",map[c1][c2],dist,"\n");
    }
}
