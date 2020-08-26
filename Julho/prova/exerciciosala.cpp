#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
#include <time.h>




main(){
    
    int vet[10];
    int maior = 0, pos = 0;
    srand(time(NULL));
    
    for(int i = 0; i <= 9; i++)
    {
        vet[i] = rand()%50;
        printf("vet[%2d] = %2d\n", i, vet[i]);
        
        if(vet[i] > maior)
        {
            maior = vet[i];
            pos = i;
        }
    }
    
    printf("O maior numero e: %d\nNa posicao: %d", maior, pos);
    
}
