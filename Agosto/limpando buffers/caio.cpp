#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<ctype.h>
#include<conio.h>

	struct todos_dados
    {
        int idade[6], nota[6];
        char nome[6][128];//Array de string com 6 palavras de ate 128 caracteres
    };
	struct todos_dados aluno;//Uma estrutura ja e suficiente

main() 
{
    int c;

    printf("\n -- REGISTRO --\n");
    for(c=0;c < 6;c++)
	{
        printf("\nNome do aluno:");
        scanf("%s",aluno.nome[c]);//Array de string
        printf("Idade do aluno:");
        scanf("%d",&aluno.idade[c]);
        printf("Nota do aluno:");
        scanf("%d",&aluno.nota[c]);
    }
    printf("\n -- LEITURA --\n");
    for(c = 0;c < 6;c++)
	{
        printf("Nome do aluno:%s\n",aluno.nome[c]);
        printf("Idade do aluno:%d\n",aluno.idade[c]);
        printf("Nota do aluno:%d\n\n",aluno.nota[c]);
        getch();
    }
	
}

