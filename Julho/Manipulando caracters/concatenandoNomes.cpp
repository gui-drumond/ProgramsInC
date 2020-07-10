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
	char st[50],st1[50],st2[100];

	printf("Digite seu nome ou frase ! \n");
	gets(st);//gets   Lê um texto até que seja pressionado enter 
	printf("Digite seu sobrenome ou frase ! \n"); 
	gets(st1);
	strcpy(st1,st);//pega as duas variaveis/vetores e retira o "/0" contido nas strings
	strcat(st2,st1);//concatena os espacos em branco e junta as duas variaveis
	strcat(st2," ");//
	
	
	printf("  ! %c \n" , st2);
}

