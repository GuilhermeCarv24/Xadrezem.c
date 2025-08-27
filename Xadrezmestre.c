#include <stdio.h>

// Torre: recursividade simples
void moverTorre(int casas) {
    if (casas == 0) return; // condição de parada
    printf("Direita\n");
    moverTorre(casas - 1); // chamada recursiva
}

// Bispo: recursividade + loops aninhados
void moverBispo(int casas) {
    if (casas == 0) return;

    // loop externo = movimento vertical
    for (int i = 0; i < 1; i++) {
        // loop interno = movimento horizontal
        for (int j = 0; j < 1; j++) {
            printf("Cima direita\n");
        }
    }

    moverBispo(casas - 1); // chamada recursiva
}

// Rainha: recursividade (simula do-while)
void moverRainha(int casas) {
    if (casas == 0) return;
    printf("Esquerda\n"); 
    moverRainha(casas - 1);
}

// Cavalo: loops complexos com break e continue
void moverCavalo(int casasVertical, int casasHorizontal) {
    for (int i = 1; i <= casasVertical; i++) {
        if (i > 2) break; // cavalo só pode andar 2 casas para cima
        printf("Cima\n");
    }

    for (int j = 1; j <= casasHorizontal; j++) {
        if (j > 1) continue; // cavalo só anda 1 casa para a direita
        printf("Direita\n");
    }
}

int main() {
    int casastorres = 5;
    int casasbispo = 5;
    int casasrainha = 8;
    int casasVertical = 2;
    int casasHorizontal = 1;

    printf("Movimento da Torre:\n");
    moverTorre(casastorres);
    printf("\n");

    printf("Movimento do Bispo:\n");
    moverBispo(casasbispo);
    printf("\n");

    printf("Movimento da Rainha:\n");
    moverRainha(casasrainha);
    printf("\n");

    printf("Movimento do Cavalo:\n");
    moverCavalo(casasVertical, casasHorizontal);
    printf("\n");

    return 0;
}
