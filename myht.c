#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define m 11
#define LINESIZE 10

int main (){
    char linha[LINESIZE];   /* string com operacao e valor  */
    char oper[5];           /* tipo de operacao             */
    int valor;              /* Valor da operacao            */

    fgets(linha, LINESIZE, stdin);
    while(linha[0] != '\n'){

        strncpy(oper, strtok(linha, " "), strlen(linha));
        valor = atoi(strtok(NULL, "\n"));

        if (!strcmp(oper, "i"))
            insere_hash();
        else if (!strcmp(oper, "r"))
            remove_hash();
        else
            fprintf(stderr, "Operacao invalida\n");

        linha[0] = '\n';
        fgets(linha, LINESIZE, stdin);
    }

    imprime_hash();

    return 0;
}

/* Implementação:
 * Estrutura de dados: 2 vetores;
 * Operações: inserção, remoção e busca;
 */
