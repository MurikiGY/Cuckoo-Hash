#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#include "hash.h"

#define LINESIZE 10

int main (){
    char    linha[LINESIZE];    /* string com operacao e valor  */
    char    oper[5];            /* tipo de operacao             */
    int     valor;              /* Valor da operacao            */
    hash_t  T1[M];              /* Vetor de tabela 1            */
    hash_t  T2[M];                 /* Vetor de tabela 2            */

    /* Configura status das tabelas como vazio */
    zera_hash(T1);
    zera_hash(T2);

    fgets(linha, LINESIZE, stdin);
    while(linha[0] != '\n'){

        strncpy(oper, strtok(linha, " "), strlen(linha));
        valor = atoi(strtok(NULL, "\n"));

        if (!strcmp(oper, "i"))
            insere_hash(T1, T2, valor);

        else if (!strcmp(oper, "r"))
            remove_hash(T1, T2, valor);

        else
            fprintf(stderr, "Operacao invalida\n");

        linha[0] = '\n';
        fgets(linha, LINESIZE, stdin);
    }

    imprime_hash(T1, T2);

    return 0;
}

/* Implementação:
 * Estrutura de dados: 2 vetores;
 * Operações: inserção, remoção e busca;
 */
