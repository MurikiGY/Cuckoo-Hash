#ifndef _AUX_
#define _AUX_

#define m 11

typedef struct hash {
    int chave;
    int status;
} hash_t;

void insere_hash(hash_t T1[], hash_t T2[], int k);

void remove_hash(hash_t T1[], hash_t T2[], int k);

hash_t busca_hash(hash_t T1[], hash_t T2[], int k);

void imprime_hash(hash_t T1[], hash_t T2[]);


#endif
