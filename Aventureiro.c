#include <stdio.h>

int main() {

    int i, contador; //i para for e do-while e contador para while

    printf("*** Bem-vindo ao Xadrez - Modo Novato! ***\n");
    
    //simulando o movimento da torre utilizando o for

    printf("### Movimento da Torre ###\n");
    for( i=1; i<=5; i++ ) {
        printf("Torre movendo para a direita\n");
    }

    printf("\n");

    //simulando o movimento do bispo utilizando o while
    printf("### Movimento do Bispo ###\n");
    contador = 1;
    while ( contador <= 5 ) {
        printf("Bispo movendo na diagonal direita-cima\n");
        contador++;
    }
    printf("\n");

//simulando o movimento da rainha utilizando o do-while

    printf("### Movimento da Rainha ###\n");
    i = 1;
    do {
        printf("Rainha movendo para esquerda\n");
        i++;
    } while ( i <= 8 );

    printf("\n");

    printf("### Movimento do Cavalo ###\n");
    for ( i = 1; i <= 1; i++ ) {
        int j = 1;
        while ( j <= 2 ) {
            printf("Cavalo movendo para baixo\n");
            j++;
        }
        
        printf("Cavalo movendo para esquerda\n");
        printf("\n");

    }

    printf("\nFim do modo Novato. Boa sorte!\n");
    
    return 0;
}