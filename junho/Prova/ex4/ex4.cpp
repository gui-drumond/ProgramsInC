#include <conio.h>
#include <stdio.h>
 main()
 {
		int  numero1 = 0, numero2=0 ,resultado = 0, acumulador;
		printf("Insira o primeiro valor \n");
		scanf( "%d",&numero1);
		printf("Insira o segundo valor \n");
		scanf( "%d",&numero2);
	//	printf("%d",numero1,numero2,acumulador);
		printf("%d",acumulador);
		for(int i=0; i < numero2; i++) 
	    {
	        acumulador = acumulador + numero1;
			printf(" + %d",numero1);
	    }
				printf(" = %d",acumulador);
	
}
