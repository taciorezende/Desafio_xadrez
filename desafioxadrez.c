#include <stdio.h>

/*
 * Simula o movimento de 3 peças de xadrez:
 * - Torre: 5 casas para a cima (usando for)
 * - Bispo: 5 casas na diagonal para cima e à direita (usando while)
 * - Rainha: 8 casas para a esquerda (usando do-while)
 */

int main() {
    int i, torre,bispo,rainha;

    // ===================== TORRE =====================
    // Movimento: Casas para a Direita
    // Estrutura: for
    printf("Movimento da Torre:\n");
    printf("Quantas casas a Torre vai se mover?(máx. 5)\n");
    scanf("%d", &torre);
    for (i = 0; i <torre; i++) {
        printf("Direita\n");
    }

    printf("\n");

    // ===================== BISPO =====================
    // Movimento: Casas na diagonal para cima e à direita
    // Estrutura: while
    printf("Movimento do Bispo:\n");
    printf("Quantas casas o Bispo vai se mover?(máx. 5)\n");
    scanf("%d", &bispo);
    i = 0;
    while (i <bispo) {
        printf("Cima e Direita\n");
        i++;
    }

    printf("\n");

    // ===================== RAINHA =====================
    // Movimento: Casas para a esquerda
    // Estrutura: do-while
    printf("Movimento da Rainha:\n");
    printf("Quantas casas a Rainha vai se mover? (máx. 8)\n");
    scanf("%d", &rainha);
    if(rainha>8){
        printf("Movimento Invalido! a rainha só pode se mover 8 casas\n");
    }

else{
    i =0;
    do { 
        printf("Esquerda\n");
        i++;
    } while (i <rainha);

}

    
printf("-------------------------------------------------------\n");

    return 0;
}