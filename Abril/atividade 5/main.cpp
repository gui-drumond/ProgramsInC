#include <iostream>
#include <conio.h>
#include <stdio.h>


main() 
{
	int f;
	float c;
	
	printf("Qual a temperatura em Farenheit que vc quer em Celcius? :\n");
	scanf("%d",&f);
	
	c=((f-32)*5/9);
	printf("Em celcius a temperatura e : %f",c);
		
	
}
