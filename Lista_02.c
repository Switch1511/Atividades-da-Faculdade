#include <stdio.h>
#include <stdlib.h>
#include  <locale.h>
#include <unistd.h>
#include <time.h>

int main () {
    setlocale(LC_ALL , "Portuguese");

    system("color 03");

    int exercicio; //Variavel de escolha de exercicio
    char loop;

    while(loop != 'n'){  // Funcao pra perguntar no final se o usuario deseja continuar

        printf ("---------------------------------\n------------ GRUPO 2 ------------\n---------------------------------\n\n");
        printf ("\t Bruno Sakaguchi\n\tGustavo Pasqualli\n\tLorenzo Fortunatti\n\t   Vitor Melo\n\t    Giancalos\n\n");
        printf ("---------------------------------\n\n");

        printf ("Escolha um exercicio de 1 a 10: ");
        scanf ("%i", &exercicio);

        getchar();

        system("cls"); // Limpar tela

        switch(exercicio){

            case 1:{                    // Exercicio 1

                int soma = 0, i;

                for( i = 101; i <= 195; i = i + 2){
                    soma = soma + i;
                }

                printf("A soma dos numeros impares de compreendidos entre 101 e 195 e: %i\n\n", soma);

                printf ("Deseja escolher outro exercicio [n/s]? ");
                scanf ("%c", &loop);


                if(loop == 's'){

                    system("cls");
                    break;  // funcao que quebra o comando no final

                } else {

                    system("cls");
                    break;
                }


            }

            case 2:{                    // Exercicio 2


                 float a = 1, b = 1, soma_valores;



                while(a < 100){
                    a = a + 2;
                    b = b + 1;
                    soma_valores = soma_valores + (a/b);
                }

                printf("A soma da serie: (S = 1/1 + 3/2 + 5/3 + 7/4 + ... + 99/50)\ne igual a: %.2f\n\n", soma_valores);

                printf ("Deseja escolher outro exercicio [n/s]? ");
                scanf ("%c", &loop);


                if(loop == 's'){

                    system("cls");
                    break;  // funcao que quebra o comando no final

                } else {

                    system("cls");
                    break;
                }

            }

            case 3:{                    // Exercicio 3


                int fatorial, n = 0;

                printf("Digite um numero para calcular seu fatorial: ");
                scanf("%i", &n);

                getchar();

                for(fatorial = 1; n > 1; n = n - 1){
                    fatorial = fatorial * n;
                }

                printf("O resultado sera: %i\n\n", fatorial);

                printf ("Deseja escolher outro exercicio [n/s]? ");
                scanf ("%c", &loop);


                if(loop == 's'){

                    system("cls");
                    break;  // funcao que quebra o comando no final

                } else {

                    system("cls");
                    break;
                }
            }

            case 4:{                    // Exercicio 4

                float n = 0, qtd = 0;

                printf("Digite um numero para ser dividido por 2 até o resultado ser menor que 1: ");
                scanf("%f", &n);

                getchar();

                while(n >= 1){
                    qtd++;
                    n = n / 2;
                }
                printf("\nO resultado da ultima divisao efetuda e: %.2f\n\nA quantidade de divisoes efetuadar e: %.0f\n\n", n, qtd);

                printf ("Deseja escolher outro exercicio [n/s]? ");
                scanf ("%c", &loop);


                if(loop == 's'){

                    system("cls");
                    break;  // funcao que quebra o comando no final

                } else {

                    system("cls");
                    break;
                }
            }

            case 5:{                    // Exercicio 5

                int qtd = 0, cont;
                float cr = 0, ch = 0, nf = 0, numerador = 0, denominador = 0;

                printf("Informe a quantidade de disciplinas que estao sendo cursadas no semestre: ");
                scanf("%i", &qtd);
                getchar();

                for(cont = 0; qtd > 0; cont++){

                    printf("\n\nInforme a carga horaria da diciplia numero %i: ", cont + 1);
                    scanf("%f", &ch);

                    getchar();

                    printf("\nAgora informe sua nota final da mesma diciplica: ");
                    scanf("%f", &nf);

                    getchar();

                    qtd = qtd - 1;

                    numerador = numerador + (ch * nf);
                    denominador = denominador + ch;

                }

                denominador = denominador * 10;

                cr = numerador / denominador;


                printf("\n\nSeu coeficiente de rendimento e igual a: %.2f\n\n", cr);

                printf ("Deseja escolher outro exercicio [n/s]? ");
                scanf ("%c", &loop);


                if(loop == 's'){

                    system("cls");
                    break;  // funcao que quebra o comando no final

                } else {

                    system("cls");
                    break;
                }
            }

            case 6:{                    // Exercicio 6

                int meses, cont;
                float maior, menor, media = 0, kwh;

                printf("Digite a quantidade de meses a serem calculados: ");
                scanf("%i", &meses);

                getchar();


                for(cont = 0; meses > 0; cont ++){
                    meses--;

                    printf("\nDigite o consumo eletrico em KWh do mes %i: ", cont + 1);
                    scanf("%f", &kwh);

                    getchar();

                    media = media + kwh;

                    if(cont == 0){
                        maior = kwh;
                        menor = kwh;
                    }

                    if(kwh > maior){
                        maior = kwh;
                    }
                    if(kwh < menor){
                        menor = kwh;
                    }

                }


                media = media / cont;


                printf("\nA quantidade de meses fornecidos foram %i\n\n", cont);
                printf("A media do consumo gasto foi de: %.2f\n\n", media);
                printf("O maior valor gasto foi de: %.2f\n\n", maior);
                printf("O menor valor gasto foi de: %.2f\n\n", menor);

                printf ("Deseja escolher outro exercicio [n/s]? ");
                scanf ("%c", &loop);

                getchar();


                if(loop == 's'){

                    system("cls");
                    break;  // funcao que quebra o comando no final

                } else {

                    system("cls");
                    break;
                }

            }

            case 7:{                    // Exercicio 7

                int numero, resposta, tent;

                srand(time(NULL));
                numero = rand() % 500;

                for(tent = 0; numero != resposta; tent++){

                    printf("Qual e o numero magico entre 0 e 500? ");
                    scanf("%i", &resposta);

                    getchar();

                    if(resposta == numero){
                        printf("\nVOCE ACERTOU!!\n");

                        break;

                    }
                    if(numero > resposta){
                        printf("\nO numero magico e MAIOR. Tente novamente!\n\n");
                    }
                    if(numero < resposta){
                        printf("\nO numero magico e MENOR. Tente novamente!\n\n");
                    }
                }


                if(tent <= 3){
                    printf("\nSua classificacao foi de: MUITO SORTUDO\n\n");
                }
                else if(tent <= 6){
                    printf("\nSua classificacao foi de: SORTUDO\n\n");
                }
                else if(tent <= 10){
                    printf("\nSua classificacao foi de: NORMAL\n\n");
                }
                else if(tent > 10){
                    printf("\nSua classificacao foi de: AZARADO\n\n");
                }

                printf ("Deseja escolher outro exercicio [n/s]? ");
                scanf ("%c", &loop);


                if(loop == 's'){

                    system("cls");
                    break;  // funcao que quebra o comando no final

                } else {

                    system("cls");
                    break;
                }

            }

            case 8:{                    // Exercicio 8

                int numero, menor = 0, maior = 0, ii;
                float med;

                printf("--- Digite 20 numeros ---\n\n");

                for( ii = 0; ii != 20; ii++){

                    printf("Digite o %i numero: ", ii + 1);
                    scanf("%i", &numero);

                    getchar();

                    med = med + numero;

                     if(numero > maior){
                        if(maior > menor){
                            menor = maior;
                        }
                        maior = numero;
                    }
                    if(maior >= menor && numero != maior){
                        if(numero > menor){
                            menor = numero;
                        }
                    }


                }

                med = med / ii;

                printf("A media entre os numeros foi: %.2f\n\n", med);
                printf("O maior numero foi: %i\n", maior);
                printf("O segundo maior numero foi: %i\n\n", menor);

                printf ("Deseja escolher outro exercicio [n/s]? ");
                scanf ("%c", &loop);


                if(loop == 's'){

                    system("cls");
                    break;  // funcao que quebra o comando no final

                } else {

                    system("cls");
                    break;
                }

            }

            case 9:{                    // Exercicio 9

                int uteis, i, carga, entrada, saida, soma_var = 0, total;


                printf("Digite a quantidade de dias uteis no mes: ");
                scanf("%i", &uteis);

                getchar();

                printf("Informe sua carga horaria diaria: ");
                scanf("%i", &total);

                getchar();

                for(i = 0; i != uteis; i++){

                    printf("\n\nInforme a hora de entrada do dia %i: ", i + 1);
                    scanf("%i", &entrada);

                    getchar();

                    printf("\nInforme a hora de saida do dia %i: ", i + 1);
                    scanf("%i", &saida);

                    getchar();

                    soma_var = soma_var + (saida - entrada);

                }

                carga = uteis * total;

                if(carga > soma_var){
                    printf("\nVoce tera que repor %i hora(s)!\n\n", (carga - soma_var));
                }
                if(carga < soma_var){
                    printf("\nVoce tem %i hora(s) sobrando!\n\n", (soma_var - carga));
                }
                if(carga == soma_var){
                    printf("\nVoce trabalhou a quatidade perfeita de horas!\n\n");
                }


                printf ("Deseja escolher outro exercicio [n/s]? ");
                scanf ("%c", &loop);


                if(loop == 's'){

                    system("cls");
                    break;  // funcao que quebra o comando no final

                } else {

                    system("cls");
                    break;
                }

            }

            case 10:{                   // Exercicio 10

                int i, numero, tentativa, acertos = 0, erros = 0;

                srand(time(NULL));
                numero = rand() % 11;

                printf("---Tente adivinhar todos os resultados da tabuada---\n");


                for(i=0; i<10; i++){

                    printf("\n%i X %i = ",numero, i + 1);
                    scanf("%i", &tentativa);

                    getchar();

                    if(tentativa == (numero * (i + 1))){
                        acertos++;
                    }else{ erros++; }

                }

                if(erros <= 3){
                    printf("VOCE ESTA DE PARABENS!\n");
                }
                else if(erros <= 5){
                    printf("ESTA BOM, MAS VOCE DEVE ESTUDAR MAIS!\n");
                }
                else{
                    printf("VOCE PRECISA ESTUDAR MAIS!\n");
                }


                printf("Acertos = %i\nErros = %i\n\n", acertos, erros);



                printf ("Deseja escolher outro exercicio [n/s]? ");
                scanf ("%c", &loop);


                if(loop == 's'){

                    system("cls");
                    break;  // funcao que quebra o comando no final

                } else {

                    system("cls");
                    break;
                }

            }
        }
    }


    while(1){

        printf ("                                                                 \n");
        printf ("                                                                 \n");
        printf ("                                                           _____/\n");
        printf ("                                                          /3  ---\n");
        printf ("                                                         |___| O \n");
        printf ("____________________________________________________________  ---\n");

        system("cls");

        printf ("                                                             ____\n");
        printf ("                                                            / /|-\n");
        printf ("                                                      _____/ /_|_\n");
        printf ("                                                     /3  ---     \n");
        printf ("                                                    |___| O |____\n");
        printf ("_______________________________________________________  ---  ___\n");

        system("cls");

        printf ("                                                        _________\n");
        printf ("                                                       / /|--||--\n");
        printf ("                                                 _____/ /_|__||__\n");
        printf ("                                                /3  ---     |    \n");
        printf ("                                               |___| O |____|___|\n");
        printf ("__________________________________________________  ---  ______  \n");

        system("cls");

        printf ("                                                   __________ \n");
        printf ("                                                  / /|--||-- \\__\n");
        printf ("                                            _____/ /_|__||___\\  \n");
        printf ("                                           /3  ---     |    ---  \n");
        printf ("                                          |___| O |____|___| O |_\n");
        printf ("_____________________________________________  ---  ______  ---  \n");

        system("cls");

        printf ("                                              __________ \n");
        printf ("                                             / /|--||-- \\__ \n");
        printf ("                                       _____/ /_|__||___\\  \\__ \n");
        printf ("                                      /3  ---     |    ---   C\\ \n");
        printf ("                                     |___| O |____|___| O |____| \n");
        printf ("________________________________________  ---  ______  ---  _____\n");

        system("cls");

        printf ("                                         __________ \n");
        printf ("                                        / /|--||-- \\__ \n");
        printf ("                                  _____/ /_|__||___\\  \\__ \n");
        printf ("                                 /3  ---     |    ---   C\\ \n");
        printf ("                                |___| O |____|___| O |____| \n");
        printf ("___________________________________  ---  ______  ---  __________\n");

        system("cls");

        printf ("                                    __________ \n");
        printf ("                                   / /|--||-- \\__ \n");
        printf ("                             _____/ /_|__||___\\  \\__ \n");
        printf ("                            /3  ---     |    ---   C\\ \n");
        printf ("                           |___| O |____|___| O |____| \n");
        printf ("______________________________  ---  ______  ---  _______________\n");

        system("cls");

        printf ("                               __________ \n");
        printf ("                              / /|--||-- \\__ \n");
        printf ("                        _____/ /_|__||___\\  \\__ \n");
        printf ("                       /3  ---     |    ---   C\\ \n");
        printf ("                      |___| O |____|___| O |____| \n");
        printf ("_________________________  ---  ______  ---  ____________________\n");

        system("cls");

        printf ("                          __________ \n");
        printf ("                         / /|--||-- \\__ \n");
        printf ("                   _____/ /_|__||___\\  \\__ \n");
        printf ("                  /3  ---     |    ---   C\\ \n");
        printf ("                 |___| O |____|___| O |____| \n");
        printf ("____________________  ---  ______  ---  _________________________\n");

        system("cls");

        printf ("                     __________ \n");
        printf ("                    / /|--||-- \\__ \n");
        printf ("              _____/ /_|__||___\\  \\__ \n");
        printf ("             /3  ---     |    ---   C\\ \n");
        printf ("            |___| O |____|___| O |____| \n");
        printf ("_______________  ---  ______  ---  ______________________________\n");

        system("cls");

        printf ("                __________ \n");
        printf ("               / /|--||-- \\__ \n");
        printf ("         _____/ /_|__||___\\  \\__ \n");
        printf ("        /3  ---     |    ---   C\\ \n");
        printf ("       |___| O |____|___| O |____| \n");
        printf ("__________  ---  ______  ---  ___________________________________\n");

        system("cls");

        printf ("           __________ \n");
        printf ("          / /|--||-- \\__ \n");
        printf ("    _____/ /_|__||___\\  \\__ \n");
        printf ("   /3  ---     |    ---   C\\ \n");
        printf ("  |___| O |____|___| O |____| \n");
        printf ("_____  ---  ______  ---  ________________________________________\n");

        system("cls");

        printf ("      __________ \n");
        printf ("     / /|--||-- \\__ \n");
        printf ("____/ /_|__||___\\  \\__ \n");
        printf ("  ---     |    ---   C\\ \n");
        printf ("_| O |____|___| O |____| \n");
        printf ("  ---  ______  ---  _____________________________________________\n");

        system("cls");

        printf (" __________ \n");
        printf ("/ /|--||-- \\__ \n");
        printf (" /_|__||___\\  \\__ \n");
        printf ("     |    ---   C\\ \n");
        printf ("|____|___| O |____| \n");
        printf ("  ______  ---  __________________________________________________\n");

        system("cls");

        printf ("______ \n");
        printf ("-||-- \\__ \n");
        printf ("_||___\\  \\__ \n");
        printf ("|    ---   C\\ \n");
        printf ("|___| O |____| \n");
        printf ("___  ---  _______________________________________________________\n");

        system("cls");

        printf ("_ \n");
        printf (" \\__ \n");
        printf ("_\\  \\__ \n");
        printf ("---   C\\ \n");
        printf (" O |____| \n");
        printf ("---  ____________________________________________________________\n");

        system("cls");

        printf ("_ \n");
        printf (" \\__ \n");
        printf ("_\\  \\__ \n");
        printf ("---   C\\ \n");
        printf (" O |____| \n");
        printf ("---  ____________________________________________________________\n");

        system("cls");

        printf ("\n");
        printf (" \n");
        printf ("\\__ \n");
        printf (" C\\ \n");
        printf ("___| \n");
        printf ("_________________________________________________________________\n");

        system("cls");

        printf ("\n");
        printf ("\n");
        printf ("\n");
        printf ("\n");
        printf ("\n");
        printf ("_________________________________________________________________\n");

        system("cls");

    }

 return 0;

}
