#include <stdio.h>

int main(){

    int dados[3][5], maiorPrecipitacao, periodo, posto, i, z;
    float mediaPosto[5], mediaTotal = 0;

    for(i = 0; i < 5; i++){

        printf("\nDigite a precipitacao do posto %i no periodo da:\n\n", i + 1);

        for(z = 0; z < 3; z++){


            mostrarPeriodo(z);
            printf(": ");
            scanf("%i", &dados[z][i]);
            mediaPosto[i] = mediaPosto[i] + dados[z][i];
            mediaTotal = mediaTotal + dados[z][i];

            if(z == 0 && i == 0){

                maiorPrecipitacao = dados[z][i];
                periodo = z;
                posto = i;
            }
            else if(dados[z][i] > maiorPrecipitacao){

                maiorPrecipitacao = dados[z][i];
                periodo = z;
                posto = i;

            }
        }

        mediaPosto[i] = mediaPosto[i] / 3;
    }

    mediaTotal = mediaTotal / 15;

    printf("\n\n");

    printf("A Precipitacao media de cada posto foi:\n");

    for(i = 0; i < 5; i++){

        printf("Posto %i: %.2f\n", i + 1, mediaPosto[i]);

    }

    printf("\nA Precipitacao media do dia foi: %.2f\n", mediaTotal);

    printf("\nA maior Precipitacao foi %i no Posto %i no Periodo da ", maiorPrecipitacao, posto + 1);
    mostrarPeriodo(periodo);

    printf("\n\n\n");

    return 0;
}

int mostrarPeriodo(int num){
    if(num == 0){
        printf("Manha");
    }
    if(num == 1){
        printf("Tarde");
    }
    if(num == 2){
        printf("Noite");
    }
    return;
}

