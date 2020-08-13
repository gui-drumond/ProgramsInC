#include <stdio.h>
#include <string.h>

/*
a - Digitar os nomes e as idades de 5 pessoas. Os nomes serão digitados em uma
string  "nome" e as idades em um vetor "id", após isso mostrar na tela os nomes
e as idades digitadas


b - mostrar na tela o nome e a idade da pessoa mais velha

*/

main () {
    char nome[5][50]; // String com 5 posições em cada posição poderão entrar 50 caracteres
    int id[5];
    int i;
    
    for(i=0;i<=4;i++) 
	{	
        printf("Digite o %do. nome ", i+1);
        gets(nome[i]);
        printf("Digite a %da. idade ", i+1);
        scanf("%d", &id[i]);
        fflush(stdin); // limpa o buffer do teclado
    }
    
    for(i=0;i<=4;i++){
        printf("%s\t%d\n",nome[i],id[i]);
    }
}
