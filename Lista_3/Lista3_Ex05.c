#include <stdio.h>


int main(){

    int colunas, linhas, num;

    printf("Digite o numero de linhas para sua matriz: ");
    scanf("%i", &linhas);
    printf("Digite o numero de colunas para sua matriz: ");
    scanf("%i", &colunas);

    printf("\nSua matriz sera uma %iX%i\n", linhas, colunas);

    int matriz[linhas][colunas], transposta[colunas][linhas];

    for(int i = 0; i < linhas; i++){


        for(int z = 0; z < colunas; z++){

            printf("\nDigite o numero da posicao [%i][%i]: ", i+1, z+1);
            scanf("%i", &matriz[i][z]);
        }
    }

    printf("\nO resultado da sua matrix e:\n");

    for(int i = 0; i < linhas; i++){


        for(int z = 0; z < colunas; z++){

            printf("%i ", matriz[i][z]);
        }
        printf("\n");
    }



    for(int i = 0; i < linhas; i++){


        for(int z = 0; z < colunas; z++){

            num = matriz[i][z];
            transposta[z][i] = num;
        }

    }

    printf("\nA Transposta da sua matrix e:\n");

    for(int i = 0; i < colunas; i++){


        for(int z = 0; z < linhas; z++){

            printf("%i ", transposta[i][z]);
        }
        printf("\n");
    }









   return 0;
}
