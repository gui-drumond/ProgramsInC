#include <conio.h>
#include <stdio.h>
 main()
 {
		float  faren = 1, resultado = 0;
	
	
		for(float i=50; i < 151; i++)
		{	
			faren = ((i - 32) * 5/9 ); 
			printf(" %.0f F  = %fºC  \n",i,faren);
		}
		
}
