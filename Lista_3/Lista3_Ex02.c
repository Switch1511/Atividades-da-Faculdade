#include <stdio.h>


int main(){

    char vogais[10] = "aeiouAEIOU",
         letras[50], caractere, result;
    int i = 0, vogal = 0, consoante = 0, space = 0;

    printf("Digite algo: ");

    do{                                     // esse bloco 'do while' permite o usuario digitar quantas letras ele quiser
        caractere = getchar();
        letras[i] = caractere;
        ++i;

    }while(caractere != '\n');              // o while ser? executa at? o usuario apertar no 'enter' que ? o mesmo que um '\n'

    letras[i - 1] = '\0';                   // Aqui ser? adicionado um '\0' no ultimo espa?o do vetor, para entender melhor oq significa esse '\0', consultar a apostila do professor

    int num = contarTamanho(letras);        // essa fun??o conta o n?mero de letras dentro do vetor


    for(i = 0; i < num; i++){

        for(int z = 0; z < 10; z++){

            if(letras[i] == vogais[z]){     // Aqui ocorre uma compara??o entre as letras digitadas e o vetor 'vogais'
                ++vogal;                    // Se a condi??o for True, vogal recebe +1
            }
        }
        if(letras[i] == ' '){
                ++space;                    // Condi??o para contrar os 'espa?os' entre as frases digitadas
            }
    }

    printf("\nO numero de vogais foi: %i\nE o de consoantes foi: %i\n", vogal, consoante = (num - vogal - space));

    return 0;
}

int contarTamanho(char string[]){           // fun??o que conta letras

    int tamanho = 0;
    while(string[tamanho] != '\0'){         // ela ser? executada at? encontrar o valor '\0'
        ++tamanho;
    }

    return tamanho;
}




