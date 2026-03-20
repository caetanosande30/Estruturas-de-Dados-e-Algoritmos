#ifndef FUNCOES_H
#define FUNCOES_H

#define MAX 50

typedef struct Documento {
    char nome[MAX];
    int prioridade;
    struct Documento* prox;
} Documento;

typedef struct {
    Documento* inicio;
    Documento* fim;
} Fila;

void inicializar(Fila* f);
Documento* criarDocumento(char nome[], int prioridade);

void adicionar(Fila* f, char nome[], int prioridade);
void imprimir(Fila* f);
void mostrar(Fila* f);

#endif
