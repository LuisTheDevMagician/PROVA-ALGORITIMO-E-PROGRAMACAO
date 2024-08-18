#include <stdio.h>
#include <string.h>

int main()
{
    int T; 
    scanf("%d", &T); 
    
    // Loop para processar cada caso de teste
    for (int i = 1; i <= T; i++) {
        char a[8], b[8], c[15]; 

        // Lê duas strings da entrada padrão (a e b) representando as jogadas
        scanf("%s %s", a, b);

        // Verifica se a jogada a vence a jogada b
        if ((strcmp(a, "tesoura") == 0 && strcmp(b, "papel") == 0) || 
            (strcmp(a, "papel") == 0 && strcmp(b, "pedra") == 0) || 
            (strcmp(a, "pedra") == 0 && strcmp(b, "lagarto") == 0) || 
            (strcmp(a, "lagarto") == 0 && strcmp(b, "Spock") == 0) || 
            (strcmp(a, "Spock") == 0 && strcmp(b, "tesoura") == 0) || 
            (strcmp(a, "tesoura") == 0 && strcmp(b, "lagarto") == 0) || 
            (strcmp(a, "lagarto") == 0 && strcmp(b, "papel") == 0) || 
            (strcmp(a, "papel") == 0 && strcmp(b, "Spock") == 0) || 
            (strcmp(a, "Spock") == 0 && strcmp(b, "pedra") == 0) || 
            (strcmp(a, "pedra") == 0 && strcmp(b, "tesoura") == 0)) {
            // Se a jogada a vence a jogada b, define o resultado como "Bazinga!"
            strcpy(c, "Bazinga!");
        } else if (strcmp(a, b) == 0) {
            // Se as jogadas são iguais, define o resultado como "De novo!"
            strcpy(c, "De novo!");
        } else {
            // Se a jogada a não vence a jogada b e elas não são iguais, define o resultado como "Raj trapaceou!"
            strcpy(c, "Raj trapaceou!");
        }

        
        printf("Caso #%d: %s\n", i, c);
    }

    return 0; 
}
