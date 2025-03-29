#include <stdio.h>

// Definindo as funções recursivas
void movimentoTorre(int casas,char *direcao) {
	if (casas > 0) {
		printf("%s\n", direcao);
		movimentoTorre(casas - 1, direcao);
	}
}

void movimentoRainha(int casas, char *direcao) {
	if (casas > 0) {
		printf("%s\n", direcao);
		movimentoRainha(casas - 1, direcao);
	}
}

void movimentoBispo(int casas, char *direcao1, char *direcao2) {
	if (casas > 0) {
		for (int i = 0, j = 0; i < 1 && j < 2; i++) {         // não acho que seja a melhor maneira de fazer, porém foi pedido pela faculdade
			do {
				printf("%s\n", direcao1);
				j++;
			} while (j < 2);
			printf("%s\n", direcao2);
		}
		movimentoBispo(casas - 1, direcao1, direcao2);
	}
}

void movimentoCavalo(char *direcao1, char *direcao2) {
	// O cavalo tem movimentos fixos, então não precisa de recursão
	// Aqui, um exemplo de como poderia ser implementado. Utilizei o modelo que foi pedido pela faculdade.
	for (int i = 0, j = 0; i < 1 && j < 2; i++) {
		do {
			printf("%s\n", direcao1);
			j++;
		} while (j < 2);
		printf("%s\n", direcao2);
	}
}

int main() {
	int direcaoSwitch, quantidadeCasas;
	char *direcaoNome = "";

	// Escolha de movimentos da torre (casas e direção) e printf para o usuário
	printf("** Movimentos da Torre **\n");
	printf("Escolha a direção: (1) Cima, (2) Baixo, (3) Direita, (4) Esquerda.\n");
	scanf("%d", &direcaoSwitch);

	switch (direcaoSwitch) {
        case 1: direcaoNome = "Cima"; break;
        case 2: direcaoNome = "Baixo"; break;
        case 3: direcaoNome = "Direita"; break;
        case 4: direcaoNome = "Esquerda"; break;
        default: printf("Opção inválida\n"); break;
    }

	printf("Escolha quantas casas deseja mover para %s: ", direcaoNome);
	scanf("%d", &quantidadeCasas);
	printf("Movendo %d casas para %s\n", quantidadeCasas, direcaoNome);
	movimentoTorre(quantidadeCasas, direcaoNome);

	// Escolha de movimentos da rainha (casas e direção) e printf para o usuário
	printf("\n** Movimentos da Rainha **\n");
	printf("Escolha a direção: (1) Cima, (2) Baixo, (3) Direita, (4) Esquerda, (5) Cima Direita, (6) Cima Esquerda, (7) Baixo Direita, (8) Baixo Esquerda.\n");
	scanf("%d", &direcaoSwitch);

	switch (direcaoSwitch) {
        case 1: direcaoNome = "Cima"; break;
        case 2: direcaoNome = "Baixo"; break;
        case 3: direcaoNome = "Direita"; break;
        case 4: direcaoNome = "Esquerda"; break;
        case 5: direcaoNome = "Cima Direita"; break;
        case 6: direcaoNome = "Cima Esquerda"; break;
        case 7: direcaoNome = "Baixo Direita"; break;
        case 8: direcaoNome = "Baixo Esquerda"; break;
        default: printf("Opção inválida\n"); break;
    }

	printf("Escolha quantas casas deseja mover para %s: ", direcaoNome);
	scanf("%d", &quantidadeCasas);
	printf("Movendo %d casas para %s\n", quantidadeCasas, direcaoNome);
	movimentoRainha(quantidadeCasas, direcaoNome);

	// Escolha de movimentos do bispo (casas e direção) e printf para o usuário
	char *direcaoNome2 = "";
	printf("\n** Movimentos do Bispo **\n");
	printf("Escolha a direção: (1) Cima Direita, (2) Cima Esquerda, (3) Baixo Direita, (4) Baixo Esquerda.\n");
	scanf("%d", &direcaoSwitch);

    switch (direcaoSwitch) {
        case 1: direcaoNome = "Cima"; direcaoNome2 = "Direita"; break;
        case 2: direcaoNome = "Cima"; direcaoNome2 = "Esquerda"; break;
		case 3: direcaoNome = "Baixo"; direcaoNome2 = "Direita"; break;
		case 4: direcaoNome = "Baixo"; direcaoNome2 = "Esquerda"; break;
        default: printf("Opção inválida\n"); break; return 1;
    }

	printf("Escolha quantas casas deseja mover para %s %s: ", direcaoNome,direcaoNome2);
	scanf("%d", &quantidadeCasas);
	printf("Movendo %d casas para %s %s\n", quantidadeCasas, direcaoNome,direcaoNome2);
	movimentoBispo(quantidadeCasas, direcaoNome, direcaoNome2);

	// Escolha de movimentos do cavalo (direção) e printf para o usuário
	// O cavalo tem movimentos fixos, então não precisa de recursão
    printf("\n** Movimentos do Cavalo **\n");
    printf("Escolha a direção do salto:\n");
    printf("(1) Cima Direita, (2) Cima Esquerda, (3) Direita Cima, (4) Direita Baixo,\n");
    printf("(5) Baixo Direita, (6) Baixo Esquerda, (7) Esquerda Cima, (8) Esquerda Baixo.\n");
    scanf("%d", &direcaoSwitch);

    switch (direcaoSwitch) {
        case 1: direcaoNome = "Cima"; direcaoNome2 = "Direita"; break;
        case 2: direcaoNome = "Cima"; direcaoNome2 = "Esquerda"; break;
		case 3: direcaoNome = "Direita"; direcaoNome2 = "Cima"; break;
		case 4: direcaoNome = "Direita"; direcaoNome2 = "Baixo"; break;
		case 5: direcaoNome = "Baixo"; direcaoNome2 = "Direita"; break;
		case 6: direcaoNome = "Baixo"; direcaoNome2 = "Esquerda"; break;
		case 7: direcaoNome = "Esquerda"; direcaoNome2 = "Cima"; break;
		case 8: direcaoNome = "Esquerda"; direcaoNome2 = "Baixo"; break;
        default: printf("Opção inválida\n"); break; return 1;
    }

	printf("Movendo o cavalo para %s e %s\n", direcaoNome, direcaoNome2);
	movimentoCavalo(direcaoNome, direcaoNome2);
}