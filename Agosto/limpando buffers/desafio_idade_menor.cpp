#include <stdio.h>
#include <string.h>

/*

b - mostrar na tela o nome e a idade da pessoa mais velha

*/

main () {
    char nome[5][50]; // String com 5 posições em cada posição poderão entrar 50 caracteres
    int id[5];
    int i;
    int menor =0;
    int pos = 0;
    for(i=0;i<=4;i++) 
	{	
        printf("Digite o %do. nome ", i+1);
        gets(nome[i]);
        printf("Digite a %da. idade ", i+1);
        scanf("%d", &id[i]);
        fflush(stdin); // limpa o buffer do teclado
        
        
    }    
	
		menor = id[i];
    for(i=0;i<=4;i++) 
	{
		if(id[i]< menor)
		{
			menor = id[i];
			pos = i;
		}
	}
		
        printf("%s\t%d\n",nome[pos],id[pos]);    
}
