#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>

// Declaração das funções que o promagrama vai utilizar
int num_digitos(long long num_cartao);
int dois_primeiros(long long num_cartao, int numero_de_digitos);
int multiplicar(long long num_cartao);
int somar(long long num_cartao);
void valido(int resultado_algoritmo, int dois_primeiros_digitos, int numero_de_digitos);

int main(void) {
    char input[20]; // String para armazenar a entrada do usuário
    long long num_cartao; // Variável para armazenar o número do cartão

    
    printf("Numero:\n");
    fgets(input, sizeof(input), stdin); // Lê a entrada do usuário como string


    num_cartao = atoll(input); // Converte a string para um número do tipo long long

    // Verifica se o número do cartão é válido (maior que zero)
    if (num_cartao <= 0) {
        printf("INVALIDO\n");
        return 1; 
    }

    // Calcula o número de dígitos do cartão
    int numero_de_digitos = num_digitos(num_cartao);
    // Obtém os dois primeiros dígitos do cartão
    int dois_primeiros_digitos = dois_primeiros(num_cartao, numero_de_digitos);
    // Calcula a parte da multiplicação no algoritmo de Luhn
    int multiplicacao = multiplicar(num_cartao);
    // Calcula a parte da soma no algoritmo de Luhn
    int soma = somar(num_cartao);

    // Soma os resultados das funções de multiplicação e soma
    int resultado_algoritmo = multiplicacao + soma;

    // Verifica se o cartão é válido e imprime o tipo (AMEX, MASTERCARD, VISA) ou "INVALIDO"
    valido(resultado_algoritmo, dois_primeiros_digitos, numero_de_digitos);
}

// Função para contar o número de dígitos do número do cartão
int num_digitos(long long num_cartao) {
    int num_digitos = 0;

    // Divide o número por 10 até que ele se torne zero, contando quantas vezes a divisão ocorre
    while (num_cartao > 0) {
        num_cartao /= 10;
        num_digitos++;
    }

    return num_digitos; 
}

// Função para obter os dois primeiros dígitos do número do cartão
int dois_primeiros(long long num_cartao, int numero_de_digitos) {
    // Divide o número do cartão por 10^(n-2), onde n é o número de dígitos
    // Isso resulta nos dois primeiros dígitos do número do cartão
    return num_cartao / pow(10, numero_de_digitos - 2);
}

// Função para realizar a multiplicação de dígitos segundo o algoritmo de Luhn
int multiplicar(long long num_cartao) {
    int multiplicacao = 0;

    // Itera sobre os dígitos do cartão, de dois em dois (começando do penúltimo)
    while (num_cartao > 0) {
        num_cartao /= 10; // Remove o último dígito
        int operacao = (num_cartao % 10) * 2; // Multiplica o dígito por 2

        // Se o resultado da multiplicação for maior que 9, soma os dígitos do resultado
        if (operacao > 9) {
            operacao = (operacao % 10) + (operacao / 10);
        }

        multiplicacao += operacao; // Soma o resultado ao total
        num_cartao /= 10; // Remove o próximo dígito, pulando um
    }

    return multiplicacao; 
}

// Função para somar os dígitos restantes do número do cartão
int somar(long long num_cartao) {
    int soma = 0;

    // Itera sobre os dígitos do cartão, de dois em dois, começando do último
    while (num_cartao > 0) {
        soma += (num_cartao % 10); // Adiciona o dígito atual à soma
        num_cartao /= 100; // Remove os dois últimos dígitos
    }

    return soma; 
}

// Função para verificar se o cartão é válido e determinar seu tipo
void valido(int resultado_algoritmo, int dois_primeiros_digitos, int numero_de_digitos) {
    
    if (resultado_algoritmo % 10 == 0) {

        if ((dois_primeiros_digitos == 34 || dois_primeiros_digitos == 37) && (numero_de_digitos == 15)) {
            printf("AMEX\n");
        }else if ((dois_primeiros_digitos >= 51 && dois_primeiros_digitos <= 55) && (numero_de_digitos == 16)) {
            printf("MASTERCARD\n");
        }else if ((dois_primeiros_digitos >= 40 && dois_primeiros_digitos <= 49) && (numero_de_digitos >= 13 && numero_de_digitos <= 16)) {
            printf("VISA\n");
        } else {
            printf("INVALIDO\n");
        }
    } 
    else {
        printf("INVALIDO\n");
    }
}
