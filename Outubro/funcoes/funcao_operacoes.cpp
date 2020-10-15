#include<stdio.h>

 #include<stdlib.h>

 #include<time.h>

 #include<math.h>

 #include<conio.h>



//ÁREA PARA O DESENVOLVIMENTO DAS FUNÇÕES

 //<tipo de retorno> <nome> <parametros recebido(s)>

 void escreve(void)

 {

 printf("CPDB\n");

 }

 void soma(int a,int b)

 {

 int s;

 s=a+b;

 printf("Soma = %d\n",s);

 }

 int mult(int a,int b)

 {

 int mu;

 mu=a*b;

 return(mu);

 }

void divi(float a,float b)

 {
	
	if(b!=0){
		float div;
	
	 div=a/b;
	
	 printf("Divisao = %f \n",div);
	 
	}
	 
	 else {
	 	printf("Não será possível dividir por zero");
	 }
	

 }
	




 main()

 {

 int m,n1,n2;

 printf("Informe o primeiro valor ");

 scanf("%d",&n1);

 printf("Informe o segundo valor ");

 scanf("%d",&n2);

 escreve();//escreve ne tela CPDB

 soma(n1,n2);//soma os valores passados como parâmetro

 divi(n1,n2);

 m=mult(n1,n2);

 printf("Multiplicacao = %d\n",m);



 }
