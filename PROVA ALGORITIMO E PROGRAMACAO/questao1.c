#include <stdio.h> 

// Função que soma os elementos do array
int soma_array(int array[], int tamanho) {
    int soma = 0; 
    for(int i = 0; i < tamanho; i++) { 
        soma += array[i]; 
    }
    return soma; 
}

int main() {
    int tamanho; 
    int resultado; 

    printf("Digite o tamanho do array: \n"); 
    scanf("%d", &tamanho); 

    int array[tamanho]; 

    printf("Digite %d numeros:\n", tamanho); 
    for(int i = 0; i < tamanho; i++) { 
        printf("numero %d:\n", i+1); 
        scanf("%d", &array[i]); 
    }

    // Chama a função soma_array passando o array e seu tamanho como argumentos, e armazena o resultado na variável resultado
    resultado = soma_array(array, tamanho); 

    printf("A soma dos elementos do array e: %d", resultado); 

    return 0; 
}
