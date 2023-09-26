#include <stdio.h>
#include <stdlib.h>


main() {
    int opcao, num1, num2;
    

    printf(" 1. multiplicação \n ");
     printf(" 2. divisão \n ");
    printf("Escolha uma opcao");
    scanf("%d",&opcao);
    
    while (opcao<1||opcao>2){
        printf("Digite uma opcao valida");

        printf("Escolha uma opcao");
        scanf("%d",&opcao);
    }

    printf("Digite o numero1");
    scanf("%d",&num1);

    printf("Digite o numero2");
    scanf("%d",&num2);

    if (opcao==1){
    printf("Resultado é:", num1*num2);
}
    else (num2==0){
        printf("Não é possivel fazer divisão por zero");
    }


    
}
