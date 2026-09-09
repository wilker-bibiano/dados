#include <stdio.h>

int buscasequencial(int vetor[], int tamanho, int valor) {
    for (int i = 0; i < tamanho; i++) {
        if (vetor[i] == valor) {
            return i;
        }
    }
    return -1;
}

int main(void) {
    int numeros [5] = {1, 2, 3, 4, 5};
    int valor;

    printf("Digite um valor: ");
    scanf("%d", &valor);

    int resultado = buscasequencial(numeros, 5, valor);

    if (resultado != -1) {
        printf("valor encontrado na posicao %d", resultado);
    } else {
        printf("valor nao encontrao!");
    }

    return 0;
}
