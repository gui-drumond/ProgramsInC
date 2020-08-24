/*
ex 3 da prova
*/
#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#include<math.h>
main()
{
	float vet[100],sorteado=0,maior,menor;
	int i,pos=0,pos1=0;
	srand(time(NULL));
	
	for(i=0;i<=100;) 
	{
		
        sorteado = sqrt(rand()%6009);
        
        if (sorteado>=23.50 && sorteado<=68.70)
		{
            vet[i] = sorteado * -1;
            printf("Vet[%d] = %.2f\n",i,vet[i]);
			i++;   
        }
	}	
		maior=vet[0];
    	menor=vet[0];
	    for(i=0;i<=100;i++)
		{
	        if(vet[i] > maior)
			{
	            maior=vet[i];
	            pos=i;
	        }
	        if(vet[i] < menor)
			{
	            menor= vet[i];
	            pos1=i;
	        }
	    } 
	
		printf("O valor maior: \t %f \n",vet[pos]);   
		printf("O valor menor: \t %f \n",vet[pos1]);    
}
