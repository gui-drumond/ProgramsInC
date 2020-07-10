#include <conio.h>
#include <stdio.h>
 main()
 {
		float numerador = 1,denominador = 1, resultado = 0, resultado2 = 0;
	
	
		for(int i=0; i < 50; i++)
		{	
			resultado = numerador / denominador; 
			printf(" %f+ %f = %f \n",numerador,denominador,resultado);
			numerador = numerador + 2;
			denominador = denominador + 1;
			
			
			resultado2 += resultado;
					
					
		
			
			
		}printf("SOMATORIA FINAL ->>>> %f ",resultado2 );
}
