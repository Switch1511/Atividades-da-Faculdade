#include <stdio.h>

int main(){

    int numeros[20], impares[20], pares[20], p = 0, im = 0;

    printf("---- Digite 20 numeros inteiros ----\n");

    for(int i = 0; i < 20; i++){

        printf("Numero %i: ", i + 1);
        scanf("%i", &numeros[i]);               // O scanf vai pegar cada número digitado e atribuir
                                                // para cada indice 'i' dentro do vetor numeros[]
        if(numeros[i] % 2 == 0){

            pares[p] = numeros[i];              // Se o resultado da divisão por 2 do número digitado for = 0
            p++;                                // O vetor pares[] vai receper esse número, sendo ele par

        }
        else{

            impares[im] = numeros[i];           // Se for impar, sera o vetor impares[] que vai receber o número
            im++;

        }
    }

    printf("\nOs numeros digitados foram: ");   // Os 'for' a seguir, iram printrar na tela os valores de cada vetor

    for(int i = 0; i < 20; i++){
        printf("%i ", numeros[i]);

    }

    printf("\n\nOs numeros pares sao: ");

    for(int i = 0; i < p; i++){
        printf("%i ", pares[i]);

    }

    printf("\n\nOs numeros impares sao: ");

    for(int i = 0; i < im; i++){
        printf("%i ", impares[i]);

    }

    printf("\n");


    return 0;
}
