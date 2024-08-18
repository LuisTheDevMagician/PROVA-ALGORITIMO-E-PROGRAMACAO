#include <stdio.h>
#include <math.h>

int main() {
    int A, B, C; 

    // Loop infinito para processar várias entradas
    while (1) {
       
        // Lê três inteiros da entrada padrão (A, B, C)
        scanf("%d %d %d", &A, &B, &C);
        
        // Se qualquer um dos valores for zero, o loop é encerrado
        if (A == 0 || B == 0 || C == 0) break; 
          
        // Calcula a área da casa
        int areaCasa = A * B;

        // Calcula a área do terreno com base na porcentagem C
        // Dividindo a área da casa pela porcentagem (convertida para fração)
        double areaTerreno = areaCasa / (C / 100.0);

        // Calcula o comprimento do lado do terreno assumindo forma quadrada
        double ladoTerreno = sqrt(areaTerreno);

        // Converte o comprimento do lado para um número inteiro (truncando a parte decimal)
        int ladoconvertido = (int)ladoTerreno;

        
        printf("%d\n", ladoconvertido);
    }

    return 0;
}

     
