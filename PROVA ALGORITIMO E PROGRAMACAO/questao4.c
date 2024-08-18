#include<stdio.h>

int main(void) {
    double troco;
    double moedas[] = {25, 10, 5, 1};
    int i, qtd=0; 

    // Recebe o valor do troco a dar em centavos
    do {
        printf("Informe o valor do troco em centavos:\n");
        scanf("%lf", &troco);
    } while(troco <= 0);

    
    // Diminui o valor do troco moeada a moeda até o troco ser melor que a moeda na posição de i e então se necessário vai para próxima moeda
    for(i = 0; i < 4; i++) {  
        while(troco - moedas[i] >= 0) {
            troco -= moedas[i];
            qtd++;// acumula a quantidade de moedas necessárias
    }
 }

    
    printf("Total de moedas necessarias: %d\n", qtd);
    
}

