
#include <stdio.h>
#include <time.h>
#include <stdlib.h>
#include<math.h>

void escreva(void)
{
 printf("CPDB \n");
   
}
void geranum (int n)
{
	int numero;
    srand(time(NULL));
    numero = rand()%n;
    printf("Numero aletorio : %d \n",numero);
}    
  
    
float raiz(float n)
{
	float resposta = sqrt(n);
	printf("Raiz: %f \n ", resposta);
	
}
void eleva(int n1, int n2)
{
	int numero;
    
    for(int i=1;i<n2;i++)
        numero=numero+(n1*n2);
    
    printf("%d ^ %d = %d\n",n1,n2,numero);
    
}
void maiuscula(char frase[40])
{
     int casas ;
	 casas = strlen(frase);
	 	printf("Letra maiusca :");
     for(int i = 0;i<=casas;i++)
	 {
     	printf(" %c",toupper(frase[i]));
 	 }
 	 printf("\n");
}

void verifica(char frase[40], char letra){
    int qtd=0;
    for (int i=0;i<=strlen(frase)-1;i++)
        qtd=(frase[i]==letra) ? qtd+=1 : qtd+=0;
    printf("\nQuantidade de vezes que a letra se repetiu = %d",qtd);    
}
