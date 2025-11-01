#include <stdio.h>

void movimentoTorre(int casas) {
    if (casas > 0) {
        printf("Torre movendo para a direita\n");
        movimentoTorre(casas - 1);
    }
}

void movimentoBispo(int casas) {
    if (casas == 0) {
        return;
    }
    int i, j;
    for (i = 1; i <= 1; i++) {
        for (j = 0 ; j < 1; j++) {
            printf("Bispo movendo para cima\n");
            printf("Bispo movendo para direita\n"); 
    }
    }
    movimentoBispo(casas - 1);
}

void movimentoRainha(int casas) {
    if (casas > 0) {
        printf("Rainha movendo para esquerda\n");
        movimentoRainha(casas - 1);
    }
}


int main() {

    int i, contador; //i para for e do-while e contador para while

    printf("*** Bem-vindo ao Xadrez - Modo Mestre! ***\n");
    
    //simulando o movimento da torre utilizando o for

    printf("### Movimento da Torre ###\n");
        movimentoTorre(5);

    printf("\n");

    //simulando o movimento do bispo utilizando o while
    printf("### Movimento do Bispo ###\n");
    movimentoBispo(5);
    printf("\n");

//simulando o movimento da rainha utilizando o do-while

    printf("### Movimento da Rainha ###\n");
    movimentoRainha(8);

    printf("\n");

    printf("### Movimento do Cavalo ###\n");
    for ( int i = 1, j =1; i <= 1; i++, j++ ) {
        while ( j <= 2 ) {
            printf("Cavalo movendo para cima\n");
            j++;
        }
        
        printf("Cavalo movendo para direita\n");
        printf("\n");
        break;
    }

    printf("\nFim do modo Mestre. Boa sorte!\n");
    return 0;
}