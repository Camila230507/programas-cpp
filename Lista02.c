#include <stdio.h>

int funcao(int vet[], int tamanho){

    int i;

    int soma = 0;
    for (i = 0; i < tamanho; i++){
        soma += vet[i];
    }

    return soma;

}

int main(void){

    int vetor[3] = {1,2,3};

    printf("%d\n", vetor[0]);
    int soma;

    soma = funcao(vetor, 3);

    printf("A soma e: %d", soma);

    return 0;


}
