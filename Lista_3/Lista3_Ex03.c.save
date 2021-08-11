#include <stdio.h>
#include <string.h>

int main(){

    char letras[50], contrario, caractere;
    int i = 0;

    printf("Digite algo para inverter: ");

    do{
        caractere = getchar();
        letras[i] = caractere;
        ++i;

    }while(caractere != '\n');

    letras[i - 1] = '\0';

    int num = contarTamanho(letras);

    for(i = 0; i < num; i++){

        contrario = letras[i];
        letras[i] = letras[num];
        letras[num] = contrario;

        --num;
    }

    printf("\nO resultado foi: %s\n", letras);

    return 0;
}

int contarTamanho(char string[]){

    int tamanho = 0;
    while(string[tamanho] != '\0'){
        ++tamanho;
    }
    --tamanho;

    return tamanho;
}

