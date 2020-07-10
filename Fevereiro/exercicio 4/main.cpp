#include <stdio.h>
#include <conio.h>
main() 
{
	float P_fab,P_final,resultado=0;
	
	printf("preco fabricacao : ");
	scanf("%f",&P_fab);
	printf("preco final:");
	scanf("%f",&P_final);
	resultado= (P_final + P_fab *0.45+P_fab*0.23);
	
	printf("  %.2f",resultado);
	
	
	
	


}
