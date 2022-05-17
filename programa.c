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
            printf(" Em qual ordem deseja mostrar os numeros ? \n C- CRESCENTE \n D- DECRESCENTE \n ");
            // impede que o programa salte direto pro switch
            getchar();
            // define os numeros entre A e B
            ordem = getchar();
            // Verifica a opcao do usuario.
            switch (ordem)
            {
                // mostra em ordem crescente.
                case 'c' :
                case 'C' :
                printf("\n ORDEM CRESCENTE: ");
                // Loop que adiciona o numero a e os numeros entre o A e o B, na ordem crescente
                while (a != b)
                {
                printf(" %d", a);
                a++;
                }
                // Adiciona o último numero da sequência (o próprio b)
                printf(" %d \n", b);
                n = 0;
                break;
                // mostra em ordem decrescente.
                case 'd' :
                case 'D' :
                printf(" ORDEM DECRESCENTE: ");
                // Loop que adiciona o numero a e os numeros entre o A e o B, na ordem crescente
                while (b != a)
                {
                printf(" %d", b);
                b--;
                }
                // Adiciona o último numero da sequência (o próprio a)
                printf(" %d \n", a);
                n = 0;
                break;
                // verifica se o usuário não digitou outro valor diferente do menu.
                default : printf("Por favor, utilize apenas as opcoes do menu. \n");
                break;
            }
        }
        else
        {
            printf(" ERRO: Por favor, insira os numeros na ordem requisitada e no intervalo definido. \n \n");
        }
    }
}
