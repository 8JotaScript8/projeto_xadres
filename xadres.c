#include <stdio.h>

void movimentoTorre(int contadorT) {
    if(contadorT < 5) { // 5 = quantidade de movimentos da torre
        printf("Direita\n");
        movimentoTorre(contadorT + 1);
    }
}

void movimentoBispo(int contadorB) {
    if(contadorB < 5) {
        for(int coluna = 0; coluna < 1; coluna++) {
            printf("Cima\n");
            for(int linha = 0; linha < 1; linha++) {
                printf("Direita\n");
            }    
        }
        // Chamada recursiva para o próximo movimento
        movimentoBispo(contadorB + 1);  
    }
}

void movimentoRainha(int contadorQ) {
    contadorQ = 0;
    do {
        printf("Esquerda\n");
        contadorQ++;
    } while(contadorQ < 8);
}

int main() {
    int opcao;

    printf("Bem-vindo ao Protótipo de Xadrez da Jotas Companies\n");
    printf("\n");

    printf("Escolha sua peça para movimentação: \n");
    printf("1 - TORRE\n");
    printf("2 - BISPO\n");
    printf("3 - RAINHA\n");
    printf("4 - CAVALO\n");
    printf("5 - SAIR\n");

    printf("Opção: ");
    scanf("%d", &opcao);

    switch (opcao) {
        case 1:
            printf("Torre:\n");
            int passosT = 0; // Começa com 0
            movimentoTorre(passosT);
            break;
        
        case 2:
            printf("Bispo:\n");
            int passosB = 0;
            movimentoBispo(passosB);  // Movimento do Bispo
            break;

        case 3:
            printf("Rainha:\n");
            int passosQ = 0;
            movimentoRainha(passosQ);  // Movimento da Rainha
            break;

        case 4:
            printf("Cavalo:\n");
            int mov_em_L = 5;  // Cavalo vai fazer 5 movimentos
            while (mov_em_L--) {
                for (int i = 0; i < 2; i++) {
                    printf("Baixo\n");  // Movimento para baixo
                    if (i == 1) {
                        continue;
                    }
                }
                printf("Esquerda\n");  // Movimento para a esquerda
            }
            break;

        case 5:
            printf("Sair\n");
            break;

        default:
            printf("Opção inválida\n");
    }

    return 0;
}
