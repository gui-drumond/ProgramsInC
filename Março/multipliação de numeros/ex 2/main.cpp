
#include <conio.h>
#include <stdio.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
main()
{
	int r=1,ac=1,vezes=1;
	while(vezes<8)
	{
		vezes++;
		ac=r; 
		r=ac*vezes;
		printf("%d X %d = %d \n",ac,vezes,r);
	}
}
