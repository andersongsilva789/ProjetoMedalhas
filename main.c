#include <stdio.h>
#include<stdlib.h>
#include "medalha.h"
#include "interface.h"
#include<string.h>

int main() {
    Medalha* medalhas = NULL;
    int tamanho = 0;
    int opcao;
    
    do {
        exibirMenuInicial();
        printf("Escolha uma opção: ");
        scanf("%d", &opcao);
        getchar(); // Limpar o buffer do stdin
        
        if (opcao == 1) {
            Medalha novaMedalha;
            novaMedalha.codigo = tamanho + 1; // Exemplo de código automático
            
            printf("Digite o gênero (M/F): ");
            scanf(" %c", &novaMedalha.genero);
            getchar();
            
            printf("Digite a modalidade: ");
            fgets(novaMedalha.modalidade, sizeof(novaMedalha.modalidade), stdin);
            novaMedalha.modalidade[strcspn(novaMedalha.modalidade, "\n")] = 0; // Remover o '\n'
            
            printf("Digite a cidade: ");
            fgets(novaMedalha.cidade, sizeof(novaMedalha.cidade), stdin);
            novaMedalha.cidade[strcspn(novaMedalha.cidade, "\n")] = 0; // Remover o '\n'
            
            printf("Digite o ano: ");
            scanf("%d", &novaMedalha.ano);
            getchar();
            
            printf("Digite o tipo de medalha (O/P/B): ");
            scanf(" %c", &novaMedalha.tipo_medalha);
            getchar();
            
            printf("Digite o nome do atleta: ");
            fgets(novaMedalha.nome_atleta, sizeof(novaMedalha.nome_atleta), stdin);
            novaMedalha.nome_atleta[strcspn(novaMedalha.nome_atleta, "\n")] = 0; // Remover o '\n'
            
            printf("Digite o país de origem: ");
            fgets(novaMedalha.pais_origem, sizeof(novaMedalha.pais_origem), stdin);
            novaMedalha.pais_origem[strcspn(novaMedalha.pais_origem, "\n")] = 0; // Remover o '\n'
            
            printf("Digite o resultado: ");
            fgets(novaMedalha.resultado, sizeof(novaMedalha.resultado), stdin);
            novaMedalha.resultado[strcspn(novaMedalha.resultado, "\n")] = 0; // Remover o '\n'
            
            inserirMedalha(&medalhas, &tamanho, novaMedalha);
        } else if (opcao == 2) {
            listarMedalhas(medalhas, tamanho);
        }
    } while (opcao != 3);
    
    free(medalhas);
    return 0;
}
