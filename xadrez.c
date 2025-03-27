#include <stdio.h>

int main() {
    // Definindo as variáveis para os movimentos das peças
    int movTorre = 5;
    int movBispo = 5;
    int movRainha = 8; 

    // Exibindo os movimentos de cada peça
    printf("**Movimentos da Torre**\n");

    for (int i = 0; i < movTorre; i++) {
        printf("Direita\n");
    }

    printf("\n**Movimentos do Bispo**\n");
    
    while (movBispo > 0) {
        printf("Cima direita\n");
        movBispo--;
    }

    printf("\n**Movimentos da Rainha**\n");

    do {
        printf("Esquerda\n");
        movRainha--;
    } while (movRainha > 0);

    return 0;
}
