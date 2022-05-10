/* * * * * * * * * * * * * * * * * * * * *
 *                                       *
 *  Aluno : Lucas Carvalho               *
 *  Data : 10/05/2022                    *
 *  Curso : 1° Período EAI               *
 *  Aula : Laboratório de Programação    *
 *                                       *
 * * * * * * * * * * * * * * * * * * * * */

/************************************************************
*                                                           *
*   Este programa verifica se os dois numeros indicados,    *
*   que estão entre 0 e 20, sendo o primeiro o menor e o    *
*   maior e sua diferença maior ou igual à 5, e ordena de   *
*   forma crescente ou decrescente.                         *
*                                                           *
*************************************************************/

#include <stdio.h>
#include <stdlib.h>

int a, b;
int numeros, ordem, n, diferenca;

int main()
{
    n = 1;
    while (n)
    {
        // Requisição dos números ao usuário.
        printf(" Insira dois numeros entre 0 e 20 \n");
        printf(" Insira o menor numero: ");
        scanf("%d", &a);
        printf(" Insira o maior numero: ");
        scanf(" %d", &b);
        diferenca = b - a;

        if(diferenca <= 5)
        {
            printf(" ERRO: A diferenca de a e b e menor do que 5. \n");
        }

        // Verifica se os dois números estão contidos entre 0 e 20.
        if ((b>=0) && (b<=20) && (a>=0) && (a<=20) && (b > a) && (diferenca >= 5))
        {

            // Pede o usuário para indicar a ordem desejada.
            printf(" Em qual ordem deseja mostrar os numeros ? \n 0- CRESCENTE \n 1- DECRESCENTE \n ");
            scanf(" %d", &ordem);

            // define os numeros entre A e B
            

            // Verifica a opcao do usuario.
            switch (ordem)
            {
                // mostra em ordem crescente.
                case 0 :
                printf("\n ORDEM CRESCENTE: ");
                printf(" %d, %d \n", a, b);
                break;
                // mostra em ordem decrescente.
                case 1 :
                printf(" ORDEM DECRESCENTE: ");
                printf(" %d, %d \n", b, a);
                break;
                // verifica se o usuário não digitou outro valor diferente do menu.
                default : printf("Por favor, utilize apenas as opcoes do menu. \n");
            }
        }
        printf(" ERRO: Por favor, insira os numeros na ordem requisitada e no intervalo definido. \n \n");
    }
}
