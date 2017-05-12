/*
 * File:   pilha.h
 * Author: Matheus de Oliveira Vieira	13/0126420
 */

typedef struct lista
{
    double info;
    struct lista *prox;
} Lista;

typedef struct tpPilha
{
    Lista *topo;
} tipoPilha;

tipoPilha* criarPilha(void);

void inserirPilha(tipoPilha* p, double n);

double removerPilha(tipoPilha* p);

double topoPilha(tipoPilha* p);

int pilha_vazia(tipoPilha* p);

void pilha_libera (tipoPilha* p);
