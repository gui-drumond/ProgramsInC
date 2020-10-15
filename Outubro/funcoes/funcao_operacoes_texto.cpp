#include<stdio.h>

 #include<stdlib.h>

 #include<time.h>

 #include<math.h>

 #include<conio.h>



//ÁREA PARA O DESENVOLVIMENTO DAS FUNÇÕES

 //<tipo de retorno> <nome> <parametros recebido(s)>

 void escreve(char st[50],char letra)

 {

 printf("%s nota %c\n",st,letra);

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

 void divi(float a, float b)

 {

 float d;

 d=a/b;

 printf("Divisao = %.2f\n",d);

 }





main()

 {

 int m,n1,n2;

 printf("Informe o primeiro valor ");

 scanf("%d",&n1);

 printf("Informe o segundo valor ");

 scanf("%d",&n2);

 escreve("Centro Profissional Dom Bosco - CPDB",'A');

 soma(n1,n2);//soma os valores passados como parâmetro

 divi(n1,n2);

 m=mult(n1,n2);

 printf("Multiplicacao = %d\n",m);



 }
