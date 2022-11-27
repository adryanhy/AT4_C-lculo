#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <unistd.h>

void header(){
    printf("*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*\n\n");
}

int main() {
    float a, b, k, result;
    int accessMenu;
    do{

        header();
        printf("Escolha a funcao a qual deseja obter a integral de f(x) com x de a ate b: \n\n");
        printf("\tMENU \n\n");
        printf("1. f(x) = k\n");
        printf("2. f(x) = x^k\n");
        printf("3. f(x) = 1/x \n");
        printf("4. SAIR\n\n");
        header();
        scanf("%d", &accessMenu);

        switch(accessMenu){

                case 1:
                    printf("f(x) = k\n");
                    printf("Digite o valor de k para a construcao da funcao desejada\n");
                    scanf("%f", &k);
                    printf("Digite o valor A do extremo inferior da integral\n");
                    scanf("%f", &a);
                    printf("Digite o valor B do extremo superior da integral\n");
                    scanf("%f", &b);
                    result = (k * b) - (k * a);
                    printf("O valor da integral da funcao de A ate B eh: %f\n\n", result);
                    system("pause");
                    break;

                case 2:
                    printf("f(x) = x^k\n");
                    printf("Digite o valor de k para a construcao da funcao desejada.\n");
                    scanf("%f", &k);
                    if(k == -1){
                        printf("Valor de K invalido\n");
                    }else{
                    printf("Digite o valor A do extremo inferior da integral.\n");
                    scanf("%f", &a);
                    printf("Digite o valor B do extremo superior da integral.\n");
                    scanf("%f", &b);
                    result = pow(b, k + 1) / (k + 1) - pow(a, k + 1) / (k + 1);
                    printf("O valor da integral da funcoa de A ate B eh: %.4f\n\n", result);
                    system("pause");}
                    break;

                case 3:
                    printf("f(x) 1/x\n");
                    printf("Digite o valor A do extremo inferior da integral.\n");
                    scanf("%f", &a);
                    printf("Digite o valor B do extremo superior da integral.\n");
                    scanf("%f", &b);
                    result = log(b) - log(a);
                    printf("O valor da integral da funcao de A ate B eh: %.4f\n\n", result);
                    system("pause");
                    break;

                case 4:
                    system("cls || clear");
                    printf("Agradecemos por utilizar nossa calculadora! \n\n");
                    printf("Saindo...");
                    sleep(2);
                    exit(1);
                    break;

                default:
                    printf("Opcao invalida\n");
                    break;
            }

 } while (accessMenu != 4);

	return 0;
}
