#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

#include "hash.h"

/* OK */
int hash1(int k){
    return k % M;
}

/* OK */
int hash2(int k){
    return floor(M*(k*0.9 - floor(k*0.9)));
}


/* OK */
void insere_hash(hash_t T1[], hash_t T2[], int k){
    int index = hash1(k);

    if (T1[index].status != CHEIO)
    {
        T1[index].chave = k;
        T1[index].status = CHEIO;
    }
    else if (T1[index].chave != k)
    {
        int i = hash2(T1[index].chave);
        T2[i].chave = T1[index].chave;   /* Copia de T1 para T2 */
        T2[i].status = CHEIO;
        T1[index].chave = k;
    }
}

//OK
void remove_hash(hash_t T1[], hash_t T2[], int k){
    int index = hash2(k);

    /* Busca em T2 */
    if (T2[index].chave == k)
        T2[index].status = EXCLUIDO;
    else {
        /* Busca em T1 */
        index = hash1(k);
        if (T1[index].chave == k)
            T1[index].status = EXCLUIDO;
    }
}

void busca_hash(hash_t T1[], hash_t T2[], int k, int *T, int *pos){
    int index = hash1(k);

    /* Testa T1 vazio */
    if (T1[index].status == VAZIO){
        *T = 0;
        *pos = -1;

    } else if (T1[index].status == CHEIO && T1[index].chave == k){
        *T = 1;
        *pos = index;
    } else {
        index = hash2(k);
        if (T2[index].status == CHEIO && T2[index].chave == k){
            *T = 2;
            *pos = index;
        } else {
            *T = 0;
            *pos = -1;
        }
    }

}


void imprime_hash(hash_t T1[], hash_t T2[]){
    int i;

    /* Impressão de T2 */
    for (i=0; i<M ;i++)
        if (T2[i].status == CHEIO)
            fprintf(stdout,"%d,T2,%d\n",T2[i].chave, i);

    /* Impressão de T1 */
    for (i=0; i<M ;i++)
        if (T1[i].status == CHEIO)
            fprintf(stdout,"%d,T1,%d\n",T1[i].chave, i);
}

void zera_hash(hash_t T[]){
    int i;

    for(i=0; i<M ;i++)
        T[i].status = 0;
}





