#include <stdio.h>

int main(){

    int numeros[20], impares1[5], impares2[5], impares3[5], impares4[5], pares1[5], pares2[5], pares3[5], pares4[5], p = 0, im = 0;

    printf("---- Digite 20 numeros inteiros ----\n");

    for(int i = 0; i < 20; i++){

        printf("Numero %i: ", i + 1);
        scanf("%i", &numeros[i]);

        if(numeros[i] % 2 == 0){

            if(p < 5){

                pares1[p] = numeros[i];
                p++;

            }
            else if(p - 5 < 5){

                pares2[p - 5] = numeros[i];
                p++;

            }
            else if(p - 10 < 5){

                pares3[p - 10] = numeros[i];
                p++;

            }
            else if(p - 15 < 5){

                pares4[p - 15] = numeros[i];
                p++;

            }

        }
        else{

            if(im < 5){

                impares1[im] = numeros[i];
                im++;

            }
            else if(im - 5 < 5){

                impares2[im - 5] = numeros[i];
                im++;

            }
            else if(im - 10 < 5){

                impares3[im - 10] = numeros[i];
                im++;

            }
            else if(im - 15 < 5){

                impares4[im - 15] = numeros[i];
                im++;

            }
        }
    }

    printf("\nOs numeros digitados foram: ");

    for(int i = 0; i < 20; i++){
        printf("%i ", numeros[i]);

    }

    printf("\n\nOs numeros pares sao: ");

    printf("{ ");

    for(int i = 0; i < p; i++){
        printf("%i ", pares1[i]);
        if(i == 4){
            break;
        }
    }
    printf("} { ");

    for(int i = 0; i < p - 5; i++){
        printf("%i ", pares2[i]);
        if(i == 4){
            break;
        }

    }
    printf("} { ");

    for(int i = 0; i < p - 10; i++){
        printf("%i ", pares3[i]);
        if(i == 4){
            break;
        }

    }
    printf("} { ");

    for(int i = 0; i < p - 15; i++){
        printf("%i ", pares4[i]);
        if(i == 4){
            break;
        }

    }

    printf("}");

    printf("\n\nOs numeros impares sao: ");

    printf("{ ");

    for(int i = 0; i < im; i++){
        printf("%i ", impares1[i]);
        if(i == 4){
            break;
        }
    }
    printf("} { ");

    for(int i = 0; i < im - 5; i++){
        printf("%i ", impares2[i]);
        if(i == 4){
            break;
        }

    }
    printf("} { ");

    for(int i = 0; i < im - 10; i++){
        printf("%i ", impares3[i]);
        if(i == 4){
            break;
        }

    }
    printf("} { ");

    for(int i = 0; i < im - 15; i++){
        printf("%i ", impares4[i]);
        if(i == 4){
            break;
        }
    }

    printf("}");

    printf("\n");


    return 0;
}
