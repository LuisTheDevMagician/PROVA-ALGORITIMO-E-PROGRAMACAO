#include <ctype.h>
#include <stdio.h>
#include <string.h>

// Pontos atribuídos a cada letra do alfabeto
int pontos[] = {1, 3, 3, 2, 1, 4, 2, 4, 1, 8, 5, 1, 3, 1, 1, 3, 10, 1, 1, 1, 1, 4, 4, 8, 4, 10};

int calculo_pontuacao(char *palavra);

int main(void)
{
    // Buffers para armazenar as palavras dos jogadores
    char palavra1[100];
    char palavra2[100];

    // Solicita ao usuário por duas palavras
    printf("Jogador 1: ");
    fgets(palavra1, sizeof(palavra1), stdin);
    palavra1[strcspn(palavra1, "\n")] = '\0'; // Remove o caractere de nova linha, se houver

    printf("Jogador 2: ");
    fgets(palavra2, sizeof(palavra2), stdin);
    palavra2[strcspn(palavra2, "\n")] = '\0'; // Remove o caractere de nova linha, se houver

    // Calcula a pontuação de cada palavra
    int pontuacao1 = calculo_pontuacao(palavra1);
    int pontuacao2 = calculo_pontuacao(palavra2);

    // Imprime o vencedor
    if (pontuacao1 > pontuacao2)
    {
        printf("Jogador 1 vence!\n");
    }
    else if (pontuacao2 > pontuacao1)
    {
        printf("Jogador 2 vence!\n");
    }
    else
    {
        printf("Empate!\n");
    }
}

int calculo_pontuacao(char *palavra)
{
    // Mantém o controle da pontuação
    int pontuacao = 0;

    // Calcula a pontuação para cada caractere
    for (int i = 0, len = strlen(palavra); i < len; i++)
    {
        if (isupper(palavra[i]))
        {
            pontuacao += pontos[palavra[i] - 'A'];
        }
        else if (islower(palavra[i]))
        {
            pontuacao += pontos[palavra[i] - 'a'];
        }
    }

    return pontuacao;
}
