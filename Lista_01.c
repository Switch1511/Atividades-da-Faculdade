#include <stdio.h>
#include <math.h>
#include  <locale.h>
#include <unistd.h>

int main () {
    setlocale(LC_ALL , "Portuguese");


    int exercicio; //Variavel de escolha de exercicio
    char loop;

    while(loop != 'n'){  // Funcao pra perguntar no final se o usuario deseja continuar

        printf ("---------------------------------\n------------ GRUPO 9 ------------\n---------------------------------\n\n");
        printf ("Bruno Sakaguchi   - Liminha\nGustavo Pasqualli - Switch\nLorenzo           - Leitor de livros\nVitor Melo        - Caramelo\n\n");
        printf ("---------------------------------\n\n");

        printf ("Escolha um exercicio de 1 a 10: ");
        scanf ("%i", &exercicio);

        system("cls"); // Limpar tela

        switch(exercicio){

            case 1:{                    // Exercicio 1

                int x1, y1, x2, y2;
                float  distancia;

                printf ("------ Digite os valores do primeiro ponto ------\n");
                printf ("x1:");
                scanf ("%i", &x1);
                printf ("y1:");
                scanf ("%i", &y1);

                printf ("------ Digite os valores do segundo ponto ------\n");
                printf ("x2:");
                scanf ("%i", &x2);
                printf ("y2:");
                scanf ("%i", &y2);
                getchar();
                distancia = sqrt(pow((x2-x1),2)+pow((y2-y1),2));  // Calcula a distancia

                printf ("A distancia entre os dois ponto e igual a: %.2f\n\n", distancia);

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

                int a, b, c, d, e, f;
                float x, y;

                printf ("Digite os valores a, b, c, d, e e f da equacao:\nax + by = c\ndx + ey = f\n---------------\n");
                printf ("a:");
                scanf ("%i", &a);

                printf ("b:");
                scanf ("%i", &b);

                printf ("c:");
                scanf ("%i", &c);

                printf ("d:");
                scanf ("%i", &d);

                printf ("e:");
                scanf ("%i", &e);

                printf ("f:");
                scanf ("%i", &f);
                getchar();


                x = (c*e - b*f) / (a*e - b*d);
                y = (a*f - c*d) / (a*e - b*d);

                printf ("O valor de x e: %.2f\nO valor de y e: %.2f\n\n", x, y);

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

                int n, num, mil = 0, cen = 0, dez = 0, uni = 0;


                printf ("Digite um número de ate 4 digitos: ");
                scanf ("%i", &n);
                getchar();
                num = n;

                if(num < 10000){  // Se num for menor que 10000, execute:

                    while(num != 0){  // Enquanto num for diferente que 0, execute:

                        if(num >= 1000) {
                            mil = num / 1000;
                            num = num - (mil * 1000);

                        }else if(num >= 100) {
                            cen = num / 100;
                            num = num - (cen * 100);

                        }
                        else if(num >= 10) {
                            dez = num / 10;
                            num = num - (dez * 10);

                        }
                        else if(num >= 1) {
                            uni = num / 1;
                            num = num - (uni * 1);

                        }
                    }

                printf ("O numero %i possue:\n\nMilhar:  %i\nCentena: %i\nDezena:  %i\nUnidade: %i\n\n", n, mil, cen, dez, uni);

                } else {

                    printf ("Você digitou um numero maior que o indicado, tente novamente\n\n");
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

            case 4:{                    // Exercicio 4

                int nseg, hora, min, seg;

                printf ("Digite um valor em segundos: ");
                scanf ("%i", &nseg);
                getchar();

                hora = nseg / 3600;
                min = (nseg - (hora * 3600)) / 60;
                seg = (nseg - (hora * 3600) - (min * 60));

                printf ("Horas = %i\nMinutos = %i\nSegundos = %i\n\n", hora, min, seg);

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

                int n1, n2, n3;
                float med;

                printf("------ Digite 3 notas de 0 - 10 ------\n");

                printf("Nota da prova 1: ");
                scanf("%i", &n1);

                printf("Nota da prova 2: ");
                scanf("%i", &n2);

                printf("Nota da prova 3: ");
                scanf("%i", &n3);
                getchar();

                med = (n1 + n2 + n3) / 3;

                if(med >= 6){
                    printf("APROVADO\n");
                    printf("Media de %.2f\n\n", med);
                } else {
                    printf ("REPROVADO\n\n");
                    printf("Media de %.2f\n\n", med);
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

            case 6:{                    // Exercicio 6

                int nota1, nota2, nota3, mednota;
                float medaulas, aulas, faltas;

                printf("------ Digite 3 notas de 0 - 10 ------\n");

                printf("Nota da prova 1: ");
                scanf("%i", &nota1);

                printf("Nota da prova 2: ");
                scanf("%i", &nota2);

                printf("Nota da prova 3: ");
                scanf("%i", &nota3);

                printf("------ Digite o numero aulas dadas e de faltas ------\n");

                printf("Numero de aulas dadas: ");
                scanf("%i", &aulas);

                printf("Numero de faltas: ");
                scanf("%i", &faltas);
                getchar();

                mednota = (nota1 + nota2 + nota3) / 3;
                medaulas = faltas / aulas;
                printf ("Frequencia de = %.2f\n", medaulas);

                if((mednota >= 6) && (medaulas < 0.25)){
                    printf("APROVADO\n\n");
                } else {
                printf ("REPROVADO\n\n");
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

            case 7:{                    // Exercicio 7

                float altura, ideal;
                char sexo;

                printf("------ Calculo de peso ideal ------\n\n");

                printf("Digite sua altura: ");
                scanf("%f", &altura);

                getchar();

                printf("Digite seu sexo [m/f]: ");
                scanf("%c", &sexo);
                getchar();

                if(sexo == 'f'){
                    ideal = 62.1 * altura - 44.7;
                    printf("Seu peso ideal e de: %.2f kg\n\n", ideal);
                } else {
                    ideal = 72.7 * altura - 58;
                    printf("Seu peso ideal e de: %.2f kg\n\n", ideal);
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

                int minutos, segundos, caixas;
                float cabo, sobra;

                printf ("--- Digite um valor em minutos ---\n");

                printf ("Minutos: ");
                scanf ("%i", &minutos);
                getchar();
                segundos = minutos * 60;
                cabo = segundos * 0.72;
                printf ("Foram produzidos %.2f metros de cabo\n------------\n\n", cabo);

                caixas = cabo / 302;
                printf ("Foram precisas %i caixas\n------------\n\n", caixas);

                sobra = cabo - (caixas * 302);
                printf ("Sobrou %.2f metros de cabo\n------------\n\n", sobra);

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

                float milhas, km;
                int escolha;

                printf ("---- Conversão de Milhas para Km e Km para Milhas ----\n");
                printf ("Milhas para Km digite = 0\nKm para Milhas digite = 1\n");
                printf ("Escolha: ");
                scanf ("%i", &escolha);
                getchar();

                switch(escolha){
                    case 0:
                        printf ("Digite o valor em Milhas: ");
                        scanf ("%f", &milhas);
                        getchar();
                        km = milhas * 1.60934;
                        printf ("%.2f Milhas e igual a %.2f Km\n\n", milhas, km);
                        break;
                    case 1:
                        printf ("Digite o valor em Km: ");
                        scanf ("%f", &km);
                        getchar();
                        milhas = km * 0.621371;
                        printf ("%.2f Km e igual a %.2f Milhas\n\n", km, milhas);
                        break;
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

                float ind;

                printf ("------ Indices de Poluição ------\n\n");
                printf ("Digite um indice de poluição entre 0 e 1: ");
                scanf ("%f", &ind);
                getchar();

                if(ind <= 0.25){  // Se ind for menor ou igual a 0,25

                printf("Indice Aceitavel\n\n");

                } else if((ind > 0.25) && (ind <= 0.3)){  // Se ind for maior que 0,25 e menor ou igual a 0,3

                printf("As industrias do primeiro grupo estão intimadas a suspenderem suas atividade\n\n");

                } else if((ind > 0.3) && (ind < 0.5)){  // Se ind for maior que 0,3 e menor que 0.5

                printf("As industrias do primeiro e segundo grupo estao intimadas a suspenderem suas atividade\n\n");

                } else if(ind >= 0.5) {  // Maior ou igual a 0,5

                printf("As industrias dos 3 grupos devem parar suas atividade\n\n");
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
