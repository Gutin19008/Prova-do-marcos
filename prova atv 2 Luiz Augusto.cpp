#include <stdio.h>
main(){


int resposta;


printf("---------------------------------------------\n");
printf("-  ===========Menu de ecolhas=============  -\n");
printf("---------------------------------------------\n");
printf("- 1 = Cadastrar                             -\n");
printf("- 2 = Buscar                                -\n");
printf("- 3 = Atualizar                             -\n");
printf("- 4 = Excluir                               -\n");
printf("- 5 = Sair                                  -\n");
printf("---------------------------------------------\n");
printf(" escolha uma opcao\n");
scanf("%d",&resposta);


if(resposta==1){
printf("Voce escolheu a opcao 1");
}
else if(resposta==2){
printf("Voce escolheu a opcao 2");
}
else if(resposta==3){
printf("Voce escolheu a opcao 3");
}
else if(resposta==4){
printf("Voce escolheu a opcao 4");
}
else if(resposta==5){
printf("Voce escolheu a opcao 5");
}
else{
printf("essa opcao e invalida, tente novamente");
}


} 

