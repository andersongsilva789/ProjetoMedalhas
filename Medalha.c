#include "medalha.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void inserirMedalha(Medalha** medalhas, int* tamanho, Medalha novaMedalha) {
    *medalhas = (Medalha*) realloc(*medalhas, (*tamanho + 1) * sizeof(Medalha));
    if (*medalhas == NULL) {
        printf("Erro ao alocar memória.\n");
        exit(1);
    }
    (*medalhas)[*tamanho] = novaMedalha;
    (*tamanho)++;
}

void listarMedalhas(Medalha* medalhas, int tamanho) {
    for (int i = 0; i < tamanho; i++) {
        printf("Código: %d\n", medalhas[i].codigo);
        printf("Gênero: %c\n", medalhas[i].genero);
        printf("Modalidade: %s\n", medalhas[i].modalidade);
        printf("Cidade: %s\n", medalhas[i].cidade);
        printf("Ano: %d\n", medalhas[i].ano);
        printf("Tipo Medalha: %c\n", medalhas[i].tipo_medalha);
        printf("Nome Atleta: %s\n", medalhas[i].nome_atleta);
        printf("País Origem: %s\n", medalhas[i].pais_origem);
        printf("Resultado: %s\n", medalhas[i].resultado);
        printf("\n");
    }
}
