#include <stdio.h>
#include <string.h>
#include "funcoes.h"

int main() {
    Fila fila;
    inicializar(&fila);

    int opcao;
    char nome[50];
    int prioridade;

    do {
        printf("\n1 - Adicionar documento\n");
        printf("2 - Imprimir documento\n");
        printf("3 - Mostrar fila\n");
        printf("0 - Sair\n");
        printf("Escolha: ");
        scanf("%d", &opcao);
        getchar();

        switch (opcao) {
            case 1:
                printf("Nome do documento: ");
                fgets(nome, 50, stdin);
                nome[strcspn(nome, "\n")] = 0;

                printf("Prioridade (1 = Alta, 0 = Normal): ");
                scanf("%d", &prioridade);
                getchar();

                adicionar(&fila, nome, prioridade);
                break;

            case 2:
                imprimir(&fila);
                break;

            case 3:
                mostrar(&fila);
                break;
        }

    } while (opcao != 0);

    return 0;
}
