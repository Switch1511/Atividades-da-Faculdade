#include <stdio.h>
#include <string.h>

int main(){

    char numeros[50], contrario, caractere;
    int i = 0;

    printf("Digite um numero para inverter: ");

    do{
        caractere = getchar();
        numeros[i] = caractere;
        ++i;

    }while(caractere != '\n');

    numeros[i - 1] = '\0';

    int num = contarTamanho(numeros);

    for(i = 0; i < num; i++){

        contrario = numeros[i];
        numeros[i] = numeros[num];
        numeros[num] = contrario;

        --num;
    }

    printf("\nO resultado foi: %s\n", numeros);

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

