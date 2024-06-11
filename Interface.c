#include "interface.h"
#include <stdio.h>

void exibirMenuInicial() {
    printf("Bem-vindo ao sistema de gerenciamento de medalhas olimpicas!\n");
    printf("1. Inserir medalha\n");
    printf("2. Listar medalhas\n");
    printf("3. Sair\n");
}

void exibirSubmenu() {
    printf("Submenu:\n");
    printf("1. Alterar medalha\n");
    printf("2. Excluir medalha\n");
    printf("3. Voltar\n");
}
