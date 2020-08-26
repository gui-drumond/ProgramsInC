

#include <stdio.h>
#include <string.h>
#include <ctype.h>

main()
{
    char palavra[30], invertida[30];
    int tamanho, palindroma ,space = 0, digitos = 0, ponto = 0;
    
    printf("Digite uma palavra: ");
    
    gets(palavra);
    for(int i = 0; i < strlen(palavra); i++)
    {    
        if(isspace(palavra[i]))
        {
            space += 1;
        }
        
        if(isdigit(palavra[i]))
        {
            digitos += 1;
        }
        
        if(ispunct(palavra[i]))
        {
            ponto += 1;
        }
        
        if(palavra[i] == 'A' or palavra[i] == 'a')
        {
            palavra[i] = '&';
        }
    }
    
    puts(palavra);
    
    strcpy(invertida, palavra);
    strrev(invertida);
    palindroma = strcmp(palavra, invertida);
    
    if(palindroma == 0)
    {
    	
        printf("\n  A palavra digitada eh palindroma ! \n");
    
	}
	
    else
    {
    	
        printf("\n Nao eh a frase/palavra palindromas !\n");
    
	}
    
    
    printf("\n Espacos Na palavra ou frase: %d ", space);
    printf("\n Digitos Na palavra ou frase: %d ", digitos);
    printf("\n Pontos  Na palavra ou frase: %d ", ponto);
    
    
}
