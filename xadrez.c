#include <stdio.h>
#include <string.h>

// Biblioteca padrão "stdio.h" para entrada/saída e "string.h" para manipulação de strings.

// Função para movimentar a torre.
void movimentar_torre() {
    char lado[10]; // Variável para armazenar a direção do movimento.
    int vezes;     // Quantidade de casas que a torre será movida.

    // Pergunta o lado para o qual a torre deve se mover.
    printf("movimentar torre para qual lado? (Direito, Esquerdo, cima e baixo) \n");
    scanf("%s", lado);

    // Pergunta quantas vezes a torre deve ser movida.
    printf("movimentar torre quantas vezes? (maximo 5 casas) \n");
    scanf("%d", &vezes);

    // Verifica se o número de movimentos ultrapassa o limite permitido.
    if (vezes > 5) {
        printf("Numero de vezes excede o máximo permitido (5).\n");
        return; // Sai da função se o limite for excedido.
    }

    // Loop para exibir o movimento da torre.
    for (int i = 0; i < vezes; i++) {
        printf("(%d) Torre para %s\n", i + 1, lado);
    }
}

// Função para movimentar o bispo.
void movimentar_bispo() {
    char lado[15]; // Variável para armazenar a diagonal de movimento.
    int vezes;     // Quantidade de casas que o bispo será movido.

    // Pergunta para qual diagonal o bispo deve ser movido.
    printf("movimentar bispo para qual Diagonal? (DiretaCima, EsquerdaCima, DiretaBaixo, EsquerdaBaixo) \n");
    scanf("%s", lado);

    // Pergunta quantas vezes o bispo deve ser movido.
    printf("movimentar Bispo quantas vezes? (maximo 5 casas) \n");
    scanf("%d", &vezes);

    // Verifica se o número de movimentos ultrapassa o limite permitido.
    if (vezes > 5) {
        printf("Numero de vezes excede o máximo permitido (5).\n");
        return;
    }

    // Loop para exibir o movimento do bispo.
    for (int i = 0; i < vezes; i++) {
        printf("(%d) Bispo para diagonal %s\n", i + 1, lado);
    }
}

// Função para movimentar a rainha.
void movimentar_rainha() {
    char lado[15];      // Variável para armazenar o lado de movimento.
    int vezes;          // Quantidade de casas que a rainha será movida.
    char movimento[15]; // Tipo de movimento (diagonal, vertical ou horizontal).

    // Pergunta se a rainha deve se mover na diagonal ou horizontal/vertical.
    printf("movimentar Rainha para diagonal ou vertical/horizontal? \n");
    scanf("%s", movimento);

    // Verifica o tipo de movimento escolhido.
    if (strcmp(movimento, "diagonal") == 0) {
        // Se for diagonal, pergunta qual diagonal.
        printf("Movimentar Rainha para qual Diagonal? (DiretaCima, EsquerdaCima, DiretaBaixo, EsquerdaBaixo) \n");
        scanf("%s", lado);
    } else if (strcmp(movimento, "vertical") == 0 || strcmp(movimento, "horizontal") == 0) {
        // Se for vertical ou horizontal, pergunta o lado.
        printf("Movimentar Rainha para qual lado? (Direta, Esquerda, Cima, Baixo) \n");
        scanf("%s", lado);
    } else {
        // Se o movimento for inválido, exibe mensagem e retorna.
        printf("Movimento inválido!!\n");
        return;
    }
    
    // Pergunta quantas vezes a rainha deve se mover.
    printf("movimentar Rainha quantas vezes? (maximo 8 casas) \n");
    scanf("%d", &vezes);

    // Verifica se o número de movimentos ultrapassa o limite permitido.
    if (vezes > 8) {
        printf("Numero de vezes excede o máximo permitido (8).\n");
        return;
    }

    // Loop para exibir o movimento da rainha.
    for (int i = 0; i < vezes; i++) {
        printf("(%d) rainha para %s %s\n", i + 1, movimento, lado);
    }
}

void movimentar_cavalo(){
    char movimento [15];
    char movimento2 [15];
    int j=0;
    printf("movimentar cavalo para cima ou para baixo?\n ");
    scanf("%s", movimento);

    printf("movimentar cavalo para direita ou esquerda?\n ");
    scanf("%s", movimento2);

    do{
        for(int i= 0;i<2;i++){
            printf("Cavalo se movimentou para %s\n", movimento);
        }
        printf("Cavalo se movimentou para %s\n", movimento2);
    } while (j>1);

}

// Função principal do programa.
int main() {
    int escolha; // Variável para armazenar a escolha do jogador.

    // Saudação inicial do programa.
    printf("Bem vindo ao Xadrez - Mate Check\n\n");

    // Loop principal que exibe o menu e processa as escolhas do jogador.
    do {
        // Exibe o menu com as opções.
        printf("\n[1] Movimentar torre\n");
        printf("[2] Movimentar bispo\n");
        printf("[3] Movimentar rainha\n");
        printf("[4] Movimentar cavalo\n");
        printf("[5] sair do jogo\n");
        scanf("%d", &escolha);

        // Executa a opção escolhida usando `switch`.
        switch (escolha) {
            case 1:
                movimentar_torre(); // Chama a função para movimentar a torre.
                break;
            case 2:
                movimentar_bispo(); // Chama a função para movimentar o bispo.
                break;
            case 3:
                movimentar_rainha(); // Chama a função para movimentar a rainha.
                break;
            case 4:
                movimentar_cavalo();
                break;
            case 5:
                printf("Adeus D:\n"); // Mensagem de saída.
                break;
            default:
                printf("Opção inválida\n"); // Mensagem para opções fora do menu.
                break;
        }
    } while (escolha != 5); // Repete o menu até que a opção 5 (sair) seja selecionada.

    return 0; // Finaliza o programa.
}
