#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "funcoes.h"

void inicializar(Fila* f) {
    f->inicio = NULL;
    f->fim = NULL;
}

Documento* criarDocumento(char nome[], int prioridade) {
    Documento* novo = (Documento*) malloc(sizeof(Documento));
    strcpy(novo->nome, nome);
    novo->prioridade = prioridade;
    novo->prox = NULL;
    return novo;
}

void adicionar(Fila* f, char nome[], int prioridade) {
    Documento* novo = criarDocumento(nome, prioridade);

    if (f->inicio == NULL) {
        f->inicio = novo;
        f->fim = novo;
    }
    else if (prioridade == 1) {
        novo->prox = f->inicio;
        f->inicio = novo;
    }
    else {
        f->fim->prox = novo;
        f->fim = novo;
    }

    printf("Documento '%s' adicionado!\n", nome);
}

void imprimir(Fila* f) {
    if (f->inicio == NULL) {
        printf("Fila vazia!\n");
        return;
    }

    Documento* temp = f->inicio;
    printf("Imprimindo: %s\n", temp->nome);

    f->inicio = temp->prox;
    free(temp);

    if (f->inicio == NULL) {
        f->fim = NULL;
    }
}

void mostrar(Fila* f) {
    Documento* temp = f->inicio;

    if (temp == NULL) {
        printf("Fila vazia!\n");
        return;
    }

    printf("\n--- Fila de Impressão ---\n");
    while (temp != NULL) {
        printf("Documento: %s | Prioridade: %s\n",
               temp->nome,
               temp->prioridade == 1 ? "Alta" : "Normal");
        temp = temp->prox;
    }
}#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "funcoes.h"

void inicializar(Fila* f) {
    f->inicio = NULL;
    f->fim = NULL;
}

Documento* criarDocumento(char nome[], int prioridade) {
    Documento* novo = (Documento*) malloc(sizeof(Documento));
    strcpy(novo->nome, nome);
    novo->prioridade = prioridade;
    novo->prox = NULL;
    return novo;
}

void adicionar(Fila* f, char nome[], int prioridade) {
    Documento* novo = criarDocumento(nome, prioridade);

    if (f->inicio == NULL) {
        f->inicio = novo;
        f->fim = novo;
    }
    else if (prioridade == 1) {
        novo->prox = f->inicio;
        f->inicio = novo;
    }
    else {
        f->fim->prox = novo;
        f->fim = novo;
    }

    printf("Documento '%s' adicionado!\n", nome);
}

void imprimir(Fila* f) {
    if (f->inicio == NULL) {
        printf("Fila vazia!\n");
        return;
    }

    Documento* temp = f->inicio;
    printf("Imprimindo: %s\n", temp->nome);

    f->inicio = temp->prox;
    free(temp);

    if (f->inicio == NULL) {
        f->fim = NULL;
    }
}

void mostrar(Fila* f) {
    Documento* temp = f->inicio;

    if (temp == NULL) {
        printf("Fila vazia!\n");
        return;
    }

    printf("\n--- Fila de Impressão ---\n");
    while (temp != NULL) {
        printf("Documento: %s | Prioridade: %s\n",
               temp->nome,
               temp->prioridade == 1 ? "Alta" : "Normal");
        temp = temp->prox;
    }
}
