#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

#include "hash.h"

/* OK */
int hash1(int k){
    return k % m;
}

/* OK */
int hash2(){
    return floor(m*(k*0.9 - floor(k*0.9)));
}


/* OK */
void insere_hash(hash_t T1[], int T2[], int k){
    int index = hash1(k);

    if (T1[index]->status != CHEIO)
    {
        T1[index]->chave = k;
        T1[index]->status = CHEIO;
    }
    else if (T1[index]->chave != k)
    {
        int i = hash2(T1[index]->chave);
        T2[i]->chave = T1[index]->chave;   /* Copia de T1 para T2 */
        T2[i]->status = CHEIO;
        T1[index]->chave = k;
    }
}


void remove_hash(int T1[], int T2[], int k){
    int index = hash2(k);

    /* Busca em T2 */
    if (T2[index]->chave == k)
        T2[index]->status = EXCLUIDO;
    else {

}

int busca_hash(int T1[], int T2[], int k){
    int index = hash1(k);

    if (T1[index] != k)
        return NULL;
    
        


}


void imprime_hash(int T1[], int T2[]){
    int i;

    /* Impressão de T2 */
    for (i=0; i<M ;i++)
        if (T2[i]->status == CHEIO)
            fprintf(stdout,"%d,T2,%d\n",T2[i]->chave, i);

    /* Impressão de T1 */
    for (i=0; i<M ;i++)
        if (T1[i]->status == CHEIO)
            fprintf(stdout,"%d,T1,%d\n",T1[i]->chave, i);
}

void zera_hash(hash_t T){
    int i;

    for(i=0; i<M ;i++)
        T[i]->status = 0;
}





