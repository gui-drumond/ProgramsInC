/*
elefante
01234567
st[0] = e
st[0] = e
st[0] = a
st[0] = e
*/


#include <stdio.h> //
#include <string.h>//para mexer com variaveis em texto 
#include <ctype.h> //
#include <conio.h> //
main()
{
	char st[50];
	int i=0, cont_vogal = 0;
	printf("Digite a palavra ou frase ! \n");
	gets(st);//gets   Lê um texto até que seja pressionado enter 
	strlwr(st);
	for(i=0; i < strlen(st);i++ )
	{
		
		 if(st[i] == 'a'|| st[i] == 'e'||st[i] == 'i'||st[i] == 'o'||st[i] == 'u')
		{
            cont_vogal = cont_vogal + 1;
            printf("st[%d] = %c VOGAL \n",i,st[i]);
        }
        else {
			printf("st[%d] = %c CONSOANTE  \n",i,st[i]);
		}
		
	}
}

