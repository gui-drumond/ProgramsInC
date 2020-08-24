#include <stdio.h>
#include <string.h>

/*

1- mostrar na tela o nome e a altura da pessoa mais alta

*/

main () {
    char nome[5][50]; // String com 5 posições em cada posição poderão entrar 50 caracteres
    int alt[5];
    int i;
    int maior;
    int pos = 0;
    for(i=0;i<=4;i++) 
	{	
        printf("Digite o nome de uma pessoa %d \n", i+1);
        gets(nome[i]);
        printf("Digite a Altura da pessoa em centimentros%d\n", i+1);
        scanf("%d", &alt[i]);
        fflush(stdin); // limpa o buffer do teclado
        
        
    }    
	
		maior = alt[i];
    for(i=0;i<=4;i++) 
	{
		if(alt[i]> maior)
		{
			maior = alt[i];
			pos = i;
		}
	}
		
        printf("A pessoa mais alta eh :%s\t com %d de altura ! \n",nome[pos],alt[pos]);    
}
