#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

#include "hash.h"

int hash1(int k){
    return k % m;
}

int hash2(){
    return floor(m*(k*0.9 - floor(k*0.9)));
}

void insere_hash(hash_t T1[], int T2[], int k){
    int index = hash1(k);

    if (T1[index]->status == VAZIO || T1[index]->status == EXCLUIDO){
        T1[index] = k;
        T1[index]->status = CHEIO;
    }
    else if (T1[index] != k){
        T2[hash2(T1[index])] = T1[index];   /* Copia de T1 para T2 */
        T1[index] = k;
    }

}

void remove_hash(int T1[], int T2[], int k){
    int index = hash2(k);

    if (T2[index] == k)
        T2[index] = NULL;

    else {
        
        index = hash1(k);

        if (T1[index] == k)

}

int busca_hash(int T1[], int T2[], int k){
    int index = hash1(k);

    if (T1[index] != k)
        return NULL;
    
        


}


void imprime_hash(int T1[], int T2[]){




}

void zera_hash(hash_t T){
    int i;

    for(i=0; i<M ;i++)
        T[i]->status = 0;
}





