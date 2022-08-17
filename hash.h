#ifndef _AUX_
#define _AUX_

#define M 11
#define VAZIO 0
#define EXCLUIDO 1
#define CHEIO 2

typedef struct hash {
    int chave;
    int status;
} hash_t;

/* Status:
 * 0 - Posição vazia e nao excluido
 * 1 - Posição vazia e excluido
 * 2 - Posição com valor
 */

void insere_hash(hash_t T1[], hash_t T2[], int k);

void remove_hash(hash_t T1[], hash_t T2[], int k);

hash_t busca_hash(hash_t T1[], hash_t T2[], int k);

void imprime_hash(hash_t T1[], hash_t T2[]);

void zera_hash(hash_t T);

#endif
