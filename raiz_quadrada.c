#include <stdio.h>
#include <math.h>
#include <stdlib.h>

/**
 * Programa para calcular a raiz quadrada de um número
 * 
 * Este programa solicita um número ao usuário, calcula sua raiz quadrada
 * e exibe o resultado. Inclui validação de entrada para números negativos.
 * 
 * @author Sistema
 * @date 2024
 */

int main() {
    double numero, resultado;
    
    // Solicita o número ao usuário
    printf("========================================\n");
    printf("  CALCULADORA DE RAIZ QUADRADA\n");
    printf("========================================\n\n");
    printf("Digite um numero: ");
    
    // Lê o número digitado
    if (scanf("%lf", &numero) != 1) {
        printf("\nErro: Entrada invalida! Por favor, digite um numero valido.\n");
        return 1; // Retorna código de erro
    }
    
    // Verifica se o número é negativo
    if (numero < 0) {
        printf("\nErro: Nao e possivel calcular a raiz quadrada de um numero negativo!\n");
        printf("      (A raiz quadrada de numeros negativos resulta em numeros complexos)\n");
        return 1; // Retorna código de erro
    }
    
    // Calcula a raiz quadrada usando a função sqrt() da biblioteca math.h
    resultado = sqrt(numero);
    
    // Exibe o resultado formatado
    printf("\n----------------------------------------\n");
    printf("Resultado:\n");
    printf("  Raiz quadrada de %.2f = %.6f\n", numero, resultado);
    printf("----------------------------------------\n");
    
    return 0; // Programa executado com sucesso
}

