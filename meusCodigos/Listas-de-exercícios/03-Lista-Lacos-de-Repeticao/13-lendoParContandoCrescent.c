#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

/*QUESTÃO 13 - Faça um programa que leia um número inteiro positivo par N e imprima todos os números
pares de 0 até N em ordem crescente.*/

void main(){
    //Para utilizar acentos.
    setlocale(LC_ALL,"");

    //Definindo variáveis.
    int N, i = 0, verif = 1;

    //Lendo N e verificando se é par.
    do{
        printf("Digite um número INTEIRO, POSITIVO E PAR para limite da contagem: ");
        scanf("%d", &N);
        if(N % 2 == 0 && N > 0){
            verif = 0;
        }else{
            printf("\n#####################################\n");
            printf("ERROR: NÚMERO INVÁLIDO! DEVE SER:\n   1-INTEIRO;\n   2-POSITIVO;\n   3-PAR.");
            printf("\n--- TENTE NOVAMENTE! ---\n#####################################\n\n");
        }
    }while(verif == 1);

    //Imprimindo todos os pares de 0 até N.
    printf("\n======= NÚMEROS PARES DE 0 ATÉ %d =======\n", N);
    while(i <= N){
        if(i % 2 == 0){
            printf(" %d", i);
            i++;
        }
        i++;
    }
    printf("\n=========================================\n\n");
}