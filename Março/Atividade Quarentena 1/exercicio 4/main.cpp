#include <conio.h>
#include <stdio.h>


 main()
{
	int vi,vf;
	
	printf("Digite o valor inicial :\n");
	scanf("%d",&vi);
	printf("Digite o valor final :\n"	);
	scanf("%d",&vf);
	
	if(vi<vf)
	{
		for(int i=vi+1;i<vf;i++)
		{
			printf("%d \n",i);
		}
		
	}
	else if(vi>vf)
	{
		for(int i=vi;i>=vf;i--)
		{
			printf("%d \n",i);
			if(vf==vi){
			break;
			}
		}
		
	}
	else
	{
	
		printf("Ja estao em igualdade");
	}

	
}
