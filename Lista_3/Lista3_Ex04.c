#include <stdio.h>
#include <string.h>

int main(){

    char vogais[10] = "aeiouAEIOU",
         letras[50], caractere, result;
    int i = 0;

    printf("Digite algo: ");

    do{
        caractere = getchar();
        letras[i] = caractere;
        ++i;

    }while(caractere != '\n');

    letras[i - 1] = '\0';

    int num = contarTamanho(letras);


    printf("Deseja substituir todas as vogais por qual? [a] [e] [i] [o] [u]: ");
    scanf("%c", &result);

    for(i = 0; i < num; i++){

        for(int z = 0; z < 10; z++){

            if(letras[i] == vogais[z]){

                letras[i] = result;
            }
        }
    }

    printf("\nO resultado foi: %s\n", letras);




    return 0;
}

int contarTamanho(char string[]){

    int tamanho = 0;
    while(string[tamanho] != '\0'){
        ++tamanho;
    }

    return tamanho;
}




