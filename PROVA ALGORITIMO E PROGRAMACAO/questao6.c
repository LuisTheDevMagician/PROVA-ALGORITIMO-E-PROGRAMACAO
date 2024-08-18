#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main() {
    
    // Chave de substituição para criptografia
    char chave[] = {'n','q','x','p','o','m','a','f','t','r','h','l','z','g','e','c','y','j','i','u','w','s','k','d','v','b'};
    // Alfabeto normal para referência
    char alfabeto[] = {'a', 'b', 'c', 'd', 'e', 'f', 'g', 'h', 'i', 'j', 'k', 'l', 'm', 'n', 'o', 'p', 'q', 'r', 's', 't', 'u', 'v', 'w', 'x', 'y', 'z'};
    
    char palavra[100]; // Armazena a palavra digitada pelo usuário
    char incriptada[100]; // Armazena a palavra criptografada
    
    int i, j;
    
    // Solicita ao usuário uma palavra para criptografar
    printf("Texto claro:");
    scanf("%s", palavra);
    
    // Itera sobre cada caractere da palavra digitada
    for (i = 0; i < strlen(palavra); i++) {
        char letra = palavra[i]; // Caractere atual
        int encontrado = 0; // Flag para indicar se a letra foi encontrada no alfabeto
        
        // Itera sobre o alfabeto para encontrar a correspondência na chave
        for (j = 0; j < 26; j++) {
            // Se a letra atual (convertida para minúscula) for igual a uma letra do alfabeto
            if (tolower(letra) == alfabeto[j]) {
                // Criptografa a letra usando a chave correspondente
                // Mantém a letra em maiúscula se a original era maiúscula
                incriptada[i] = isupper(letra) ? toupper(chave[j]) : chave[j];
                encontrado = 1; // Marca como encontrada
                break; 
            }
        }

        // Se a letra não for encontrada no alfabeto mantém a original
        if (!encontrado) {
            incriptada[i] = letra;
        }
    }
    
    incriptada[i] = '\0'; // Adiciona o caractere nulo ao final da string criptografada
    
    
    printf("Texto cifrado: %s", incriptada);
    
    return 0; 
}
