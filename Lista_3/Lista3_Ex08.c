#include <stdio.h>
#include <string.h>

int main(){

    char palavra[30], caractere, resposta[30], tentativa[30];
    int i, x, z;


     printf("Digite uma palavra: ");

    do{
        caractere = getchar();
        palavra[i] = caractere;
        resposta[i] = caractere;
        ++i;

    }while(caractere != '\n');

    palavra[i - 1] = '\0';
    resposta[i - 1] = '\0';

    int num = contarTamanho(palavra);

    printf("\nO Resultado foi: ");

    for(i = 0; i < (num/2) + 1; i++){
        palavra[(num/2) + i] = '_';
    }

    for(i = 0; i < num; i++){
        printf("%c", palavra[i]);
    }

    printf("\n\n");

    printf("A palavra digitada possue %i letra(s)\n\n", num);


    while(1){

        printf("Qual foi a palavra digitada: ");

        i = 0;
        z = 0;

        do{
            caractere = getchar();
            tentativa[i] = caractere;
            ++i;

        }while(caractere != '\n');

        tentativa[i - 1] = '\0';

        for(x = 0; x < num; x++){
            if(tentativa[x] == resposta[x]){
                z++;
            }
        }

        if(z == num && tentativa[num] == '\0'){
            printf("\nParabens, voce acertou!!!\n\n\n");
            break;
        }
        else{
            printf("\nVoce errou, tente novamente!\n\n");

        }


    }




    return 0;
}

int contarTamanho(char string[]){

    int tamanho = 0;
    while(string[tamanho] != '\0'){
        ++tamanho;
    }

    return tamanho;
}



