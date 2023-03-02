#include <stdio.h>
#include <stdlib.h>



void  multiplicacao(float a , float b){

        printf("%.2f\n\n",a*b);

 }

void soma(float a , float b){

        printf("%.2f\n\n",a+b);

 }
void divisao(float a , float b){

        printf("%.2f\n\n",a/b);

 }
void subtracao(float a ,float b){

        printf("%.2f\n\n",a-b);

 }
int main()
{
 float valor1,valor2;
 char oper = '0';

 do{
     

        printf("\t\t>>>>>>>>  calculadora  <<<<<<<<\n\n") ;
        
        printf("informe o primeiro numero: ");
        scanf("%f",&valor1);

        printf("informe o segundo numero: ");
        scanf("%f",&valor2);

        printf("\n");

        printf(" (+)Soma\n (-)subtracao\n (*)multiplicacao\n (/)divisao\n\n ");
        printf("informe qual operacao deseja realizar: ");

            oper = getche();

        printf("\n");

        printf("%.2f %c %.2f = ",valor1,oper,valor2);

       switch(oper){

       case '+': soma(valor1,valor2);
       break;

       case '-': subtracao(valor1,valor2);
       break;

       case '*': multiplicacao(valor1,valor2);
       break;

       case '/': divisao(valor1,valor2);
      

     }

       printf("digite ('0') para escolher outra operacao");
       getch();
       system("cls");
 
 }
 
       while(oper != '0');

       return 0;
}
   