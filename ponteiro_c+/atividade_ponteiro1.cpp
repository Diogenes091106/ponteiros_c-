#include <stdio.h>

#define SIZE 10

float calcularMedia(int *vetor, int tamanho) {
    int soma = 0;
    for (int i = 0; i < tamanho; i++) {
        soma += *(vetor + i);
    }
    return (float)soma / tamanho;
}


int encontrarMaximo(int *vetor, int tamanho) {
    int max = *vetor;
    for (int i = 1; i < tamanho; i++) {
        if (*(vetor + i) > max) {
            max = *(vetor + i);
        }
    }
    return max;
}


int encontrarMinimo(int *vetor, int tamanho) {
    int min = *vetor; 
    for (int i = 1; i < tamanho; i++) {
        if (*(vetor + i) < min) {
            min = *(vetor + i);
        }
    }
    return min;
}

int main() {
    int vetor[SIZE];
    int *ptr = vetor;

    
    printf("Digite %d inteiros:\n", SIZE);
    for (int i = 0; i < SIZE; i++) {
        printf("Elemento %d: ", i + 1);
        scanf("%d", (ptr + i));
    }

    
    float media = calcularMedia(ptr, SIZE);
    
    
    int maximo = encontrarMaximo(ptr, SIZE);
    int minimo = encontrarMinimo(ptr, SIZE);

    
    printf("\nMédia dos elementos: %.2f\n", media);
    printf("Valor máximo: %d\n", maximo);
    printf("Valor mínimo: %d\n", minimo);

    return 0;
}

