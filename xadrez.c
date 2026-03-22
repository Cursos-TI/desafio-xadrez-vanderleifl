#include <stdio.h>

// Desafio de Xadrez - MateCheck
// Este código inicial serve como base para o desenvolvimento do sistema de movimentação das peças de xadrez.
// O objetivo é utilizar estruturas de repetição e funções para determinar os limites de movimentação dentro do jogo.

int main() {
    // Nível Novato - Movimentação das Peças
    // Sugestão: Declare variáveis constantes para representar o número de casas que cada peça pode se mover.
    printf("Bem-vindo ao jogo de xadrez!\n");
    // Variavel para o usuário escolher a peça a mover
    char peca;
    // Constantes com o número de casas a mover para cada peça
    const int casasTorre = 5;
    const int casasBispo = 5;
    const int casasRainha = 8;
    
    do {
        // Exibindo o menu para o usuário
        printf("Entre com a letra correspondente à peça que você deseja mover:\n");
        printf("T - Torre\n");
        printf("B - Bispo\n");
        printf("R - Rainha\n");
        printf("F - Finalizar o jogo\n");
        // Lendo a opção
        scanf(" %c", &peca);

        // Verificando a opção escolhida
        switch (peca)
        {
            case 'T':
            case 't':
                printf("Torre selecionada. Movendo 5 casas para a direita.\n");
                for (int i = 1; i <= casasTorre; i++) {
                    printf("Direita\n");
                }
                break;
            case 'B':
            case 'b':
                printf("Bispo selecionado. Movendo 5 casas na diagonal para cima e à direita.\n");
                for (int i = 1; i <= casasBispo; i++) {
                    printf("Cima, Direita\n");
                }
                break;
            case 'R':
            case 'r':
                printf("Rainha selecionada. Movendo 8 casas para a esquerda.\n");
                for (int i = 1; i <= casasRainha; i++) {
                    printf("Esquerda\n");
                }
                break;
            case 'F':
            case 'f':
                printf("Finalizando o jogo...\n");
                break;
            default:
                printf("Opção inválida. Tente novamente.\n");
                break;
        }

    } while (peca != 'F' && peca != 'f');

    printf("Jogo finalizado. Obrigado por jogar!\n");

    // Nível Aventureiro - Movimentação do Cavalo
    // Sugestão: Utilize loops aninhados para simular a movimentação do Cavalo em L.
    // Um loop pode representar a movimentação horizontal e outro vertical.

    // Nível Mestre - Funções Recursivas e Loops Aninhados
    // Sugestão: Substitua as movimentações das peças por funções recursivas.
    // Exemplo: Crie uma função recursiva para o movimento do Bispo.

    // Sugestão: Implemente a movimentação do Cavalo utilizando loops com variáveis múltiplas e condições avançadas.
    // Inclua o uso de continue e break dentro dos loops.

    return 0;
}
