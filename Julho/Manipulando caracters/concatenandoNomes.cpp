/*
elefante
01234567
st[0] = e
st[0] = e
st[0] = a
st[0] = e
*/


#include <stdio.h> //
#include <string.h>//para mexer com variaveis em texto 
#include <ctype.h> //
#include <conio.h> //
main()
{
	char palavra1[50],palavra2[50],frase[100];

	printf("Digite seu nome ou frase ! \n");
	gets(palavra1);//gets   Lê um texto até que seja pressionado enter 
	printf("Digite seu sobrenome ou frase ! \n"); 
	gets(palavra2);
	
	strcat(palavra1," ");//
	
	strcat(palavra1,palavra2);//pega as duas variaveis/vetores e retira o "/0" contido nas strings
	
	strcpy(frase, palavra1);//
	
	strupr(frase);//deixa maisculo
	
	
	
	puts(frase); //imprimir na tela
}

