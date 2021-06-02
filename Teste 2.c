#include <stdio.h>


void procedimentoTest(){

    int num1, num2, soma;
    
    printf("Informe o primeiro número para iniciar a soma:");
    scanf("%d", &num1);
    printf("Informe o segundo número para iniciar a soma:");
    scanf("%d", &num2);
    soma=num1+num2;
    printf("O resultado da soma é %d\n", soma);
     
}

void main(){
   int i;
   
   for(i=0; i<5;i++){
       procedimentoTest();
    }
    
    
}