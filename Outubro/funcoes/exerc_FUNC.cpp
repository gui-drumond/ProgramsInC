#include<conio.h>
#include<stdio.h>
#include<math.h>
#include<string.h>
#include<ctype.h>
#include<stdlib.h>
#include<time.h>
#include "./biblioteca_contas/funcoes.h"

    
     
main()
{
	
      int a,b,elevado;
      char st[30],letra;
      float r;
      
      printf("Digite o valor para a ");
      scanf("%d",&a);
      printf("Digite o valor para b ");
      scanf("%d",&b);
      fflush(stdin);
      printf("Digite a palavra ");
      gets(st);
      

	eleva(a,b);
	escreva();
    geranum(100);
	maiuscula (st);
	raiz(a);
	raiz(b);
	verifica(st,'e');
	gets(st);
	
      
getch();
}
