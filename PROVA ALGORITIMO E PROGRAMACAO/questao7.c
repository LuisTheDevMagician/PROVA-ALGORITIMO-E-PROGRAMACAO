#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main() {
    char palavra[100];
    char criptografada[100];
    size_t i; // Use size_t para evitar comparações entre tipos diferentes
    int cripto;

    // Solicita a chave de criptografia
    printf("Chave de criptografia:\n");
    scanf("%d", &cripto);

    // Ajusta a chave para 1 se for 11111, ou reduz ao intervalo 0-25
    if (cripto == 11111) {
        cripto = 1;
    } else {
        cripto = cripto % 26;
    }

    // Solicita a palavra a ser criptografada
    printf("Texto simples:");
    scanf(" %[^\n]", palavra); // Lê uma linha inteira, incluindo espaços

    // Criptografa a palavra
    for (i = 0; i < strlen(palavra); i++) {
        char letra = palavra[i];

        if (isalpha(letra)) {  // Verifica se é uma letra
            char base = islower(letra) ? 'a' : 'A';
            // Aplicação da fórmula ci = (pi + K) % 26
            criptografada[i] = (letra - base + cripto) % 26 + base;
        } else {
            criptografada[i] = letra;  // Mantém caracteres não alfabéticos inalterados
        }
    }

    criptografada[i] = '\0';  // Adiciona o terminador de string

    // Exibe a palavra criptografada
    printf("Texto cifrado: %s", criptografada);

    return 0;
}
