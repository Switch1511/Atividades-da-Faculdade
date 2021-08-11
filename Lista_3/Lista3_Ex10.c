#include <stdio.h>
#include <time.h>

int i, z;


int main(){

    int tabela[5][4], meio[4], num, qtd;

    printf("-------------- BINGO --------------\n\n");

    srand(time(NULL));

    printf("Quantas cartelas de Bingo voce quer: ");
    scanf("%i", &qtd);

    printf("\n\n");


    for(int y = 0; y < qtd; y++){

        for(i = 0; i < 4; i++){

            for(z = 0; z < 5; z++){

                    if(i == 0){
                        tabela[z][i] = rand() % 15 + 1;
                        for(int x = 0; x < 5; x++){
                            if(tabela[z][i] == tabela[z - x][i] && z != 0){
                                tabela[z][i] = rand() % 15 + 1;
                                x = 0;
                            }
                        }
                    }

                    if(i == 1){
                        tabela[z][i] = rand() % 15 + 16;
                        for(int x = 0; x < 5; x++){
                            if(tabela[z][i] == tabela[z - x][i] && z != 0){
                                tabela[z][i]= rand() % 15 + 16;
                                x = 0;
                            }
                        }
                    }

                    if(i == 2){
                        tabela[z][i] = rand() % 15 + 46;
                        for(int x = 0; x < 5; x++){
                            if(tabela[z][i] == tabela[z - x][i] && z != 0){
                                tabela[z][i]= rand() % 15 + 46;
                                x = 0;
                            }
                        }
                    }

                    if(i == 3){
                        tabela[z][i] = rand() % 15 + 61;
                        for(int x = 0; x < 5; x++){
                            if(tabela[z][i] == tabela[z - x][i] && z != 0){
                                tabela[z][i]= rand() % 15 + 61;
                                x = 0;
                            }
                        }
                    }
                }

            meio[i]= rand() % 15 + 31;
                for(int x = 0; x < 4; x++){
                    if(meio[i] == meio[i - x] && i != 0){
                        meio[i]= rand() % 15 + 31;
                        x = 0;
                    }
                }
            }

        bingoCabecalho();

        for(i = 0; i < 5; i++){

            for(z = 0; z < 4; z++){

                if(z == 2 && i < 2){
                    printf("%i      ", meio[i]);
                }
                else if(z == 2 && i == 2){
                    printf("*       ");
                }
                else if(z == 2 && i > 2){
                    printf("%i      ", meio[i - 1]);
                }


                printf("%i      ", tabela[i][z]);
                if(tabela[i][z] < 10){
                    printf(" ");
                }

            }

            printf("\n\n");

        }

        printf("-----------------------------------\n\n");
    }



    return 0;
}

int bingoCabecalho(){

    char cabecalho[5] = "BINGO";

    for(i = 0; i < 5; i++){
        printf("%c       ", cabecalho[i]);
    }
    printf("\n\n");

    return;
}
