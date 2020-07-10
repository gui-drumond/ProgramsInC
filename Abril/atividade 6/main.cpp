#include <iostream>
#include <conio.h>
#include <stdio.h>

main() {
	int a,b,c;
	
	
	printf("Qual sua idade ?: ");
	scanf("%d",&a);
	printf("Qual sua idade ?: ");
	scanf("%d",&b);
	printf("Qual sua idade ?: ");
	scanf("%d",&c);
	
	if(a+b+c>99)
	{
		printf("Vcs 3 juntos tem MAIS de 100 anos");
	}
	else{
	printf("Vcs 3 juntos tem MENOS de 100 anos");
	}
	
	
}
