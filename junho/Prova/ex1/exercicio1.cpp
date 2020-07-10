#include <conio.h>
#include <stdio.h>
 main()
 {
		int numero =0 ,numero2 = 0, resultado = 0;
	
	
		for(int i=1 ; i < 21 ; i++)
		{	
		
			
			if(i % 3 == 0)
			{
		
				resultado +=i;
				
			}
			printf(" %d ,",i);
			
		//	printf(" %d /",resultado);
		}
		
	
		printf("\n resultado: %d",resultado);
}

