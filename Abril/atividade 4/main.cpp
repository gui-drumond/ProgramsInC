#include <iostream>
#include <conio.h>
#include <stdio.h>
main() {
	
	char escolha;
		
	printf("Sim ou nao? \n");
	scanf("%c",&escolha);
	
	
	if(escolha=='s')
	{
		printf(
		"\n voce disse sim");	
	}
	else if(escolha=='n')
	{
		printf(
		"\n voce disse nao");	
	}
	else if(escolha!='n'&& escolha!='s'){
		printf(
		"\n amigao escolhe direito");
	}
	


}
