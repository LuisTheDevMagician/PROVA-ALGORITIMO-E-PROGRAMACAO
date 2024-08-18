#include <stdio.h> 

// Função que multiplica duas matrizes quadradas de tamanho n x n
void multiplica_matrizes(int n, int A[n][n], int B[n][n], int C[n][n]) {
    
    // Loop duplo para percorrer as linhas e colunas da matriz resultante C
    for(int i = 0; i < n; i++) {
        for(int j = 0; j < n; j++) {
            C[i][j] = 0; 

            // Loop para multiplicar a linha da matriz A pela coluna da matriz B
            for(int k = 0; k < n; k++) {
                C[i][j] += A[i][k] * B[k][j]; 
            }
        }
    }
}

int main() {
    int n; // Variável que armazenará o tamanho das matrizes

    printf("Digite o tamanho da matriz: "); 
    scanf("%d", &n); 

    // Declaração das matrizes A, B, e C, todas de tamanho n x n
    int A[n][n], B[n][n], C[n][n];

    // Recebendo os elementos da matriz A
    printf("Digite os elementos da matriz A:\n");
    for(int i = 0; i < n; i++) { 
        for(int j = 0; j < n; j++) { 
            printf("A[%d][%d]: ", i, j); 
            scanf("%d", &A[i][j]); 
        }
    }

    // Recebendo os elementos da matriz B
    printf("Digite os elementos da matriz B:\n");
    for(int i = 0; i < n; i++) { 
        for(int j = 0; j < n; j++) { 
            printf("B[%d][%d]: ", i, j); 
            scanf("%d", &B[i][j]); 
        }
    }

    // Chama a função para multiplicar as matrizes A e B, armazenando o resultado em C
    multiplica_matrizes(n, A, B, C);

    // Exibe a matriz resultante C
    printf("Matriz Resultante:\n");
    for(int i = 0; i < n; i++) { 
        for(int j = 0; j < n; j++) { 
            printf("%d ", C[i][j]); 
        }
        printf("\n"); 
    }

    return 0; 
}

