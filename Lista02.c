#include <stdio.h>


//1. Vetor – Soma dos elementos


int funcao(int vet[], int tamanho){

    int i;

    int soma = 0;
    for (i = 0; i < tamanho; i++){
        soma += vet[i];
    }

    return soma;

}



//2. Vetor – Maior elemento

float funcao2(float vet2[], int tamanho2) {
    int j;
    float maior = vet2[0];
    for (j = 1; j < tamanho2; j++) {
        if (maior < vet2[j]) {
            maior = vet2[j]; // Correção aqui
        }
    }
    return maior;
}



//3. Vetor - Procedimento de preenchimento

void troca(int vet3[], int tamanho) {
    int i;
    for (i = 0; i < tamanho; i++) {
        vet3[i] = i + 1; // Preenche com 1,2,3,...
    }
}



//4. Matriz – Soma dos elementos

int somaMatriz(int matriz[3][3]) {
    int i4, j4, soma = 0;

    for (i4 = 0; i4 < 3; i4++) {
        for (j4 = 0; j4 < 3; j4++) {
            soma += matriz[i4][j4];
        }
    }
    return soma;
}



//5. Matriz – Transposta


void transposta(int matriz[3][3], int matrizT[3][3]) {
    int i, j;
    for (i = 0; i < 3; i++) {
        for (j = 0; j < 3  ; j++) {
            matrizT[j][i] = matriz[i][j];
        }
    }
}

void imprimeMatriz(int matriz[3][3]) {
    int i, j;
    for (i = 0; i < 3; i++) {
        for (j = 0; j < 3; j++) {
            printf("%4d", matriz[i][j]);
        }
        printf("\n");
    }
}



//6. Matriz – Diagonal principal

int diagonalPrincipal(int matriz6[3][3]){
    int i, soma6 = 0;
    for (i = 0; i < 3; i++){
        soma6 += matriz6[i][i];
    }

    return soma6;
}



//7. Vetor e Funções Combinadas

void lerVetor(int vet7[], int tamanho) {
    int i;
    for (i = 0; i < tamanho; i++) {
        printf("Digite o valor %d: ", i + 1);
        scanf("%d", &vet7[i]);
    }
}

float calcularMedia(int vet7[], int tamanho) {
    int soma = 0;
    int i;
    for (i = 0; i < tamanho; i++) {
        soma += vet7[i];
    }
    return (float)soma / tamanho;
}

void imprimirAcimaMedia(int vet7[], int tamanho, float media) {
    printf("\nValores acima da média (%.2f):\n", media);
    int i;
    for (i = 0; i < tamanho; i++) {
        if (vet7[i] > media) {
            printf("%d ", vet7[i]);
        }
    }
    printf("\n");
}




/*Função Principal*/




int main(void) {
    // 1. Soma vetor
    printf("%s\n", "1. Soma Vetor");
    int vetor[3] = {1, 2, 3};

    int soma = funcao(vetor, 3);
    printf("A soma do vetor e: %d\n\n", soma);



    // 2. Maior elemento
    printf("%s\n", "2. Maior Elemento");
    float vet2[10] = {1,2,3,4,5,6,7,8,9,10};
    float maior = funcao2(vet2, 10);
    printf("O maior elemento e: %.2f\n\n", maior);



    // 3. Preenchimento do vetor
    printf("%s\n", "3. Preenchimento do Vetor");
    int vet3[5];
    troca(vet3, 5);
    printf("Vetor preenchido: ");

    int i;

    for (i = 0; i < 5; i++) {
        printf("%d ", vet3[i]);
    }
    printf("\n\n");



    // 4. Soma da matriz
    printf("%s\n", "4. Soma da Matriz");
    int matriz[3][3];
    int i4, j4;
    printf("Digite os elementos da matriz 3x3:\n\n");
    for (i4 = 0; i4 < 3; i4++) {
        for (j4 = 0; j4 < 3; j4++) {
            printf("Elemento [%d][%d]: ", i4, j4);
            scanf("%d", &matriz[i4][j4]);
        }
    }

    int resultado = somaMatriz(matriz);
    printf("A soma de todos os elementos da matriz e: %d\n\n", resultado);



    // 5. Matriz Transposta
    printf("%s\n", "5. Matriz Transposta");
    int matriz5[3][3], matrizT[3][3];
    printf("Digite os elementos da matriz 3x3:\n\n");
    for (i4 = 0; i4 < 3; i4++) {
        for (j4 = 0; j4 < 3; j4++) {
            printf("Elemento [%d][%d]: ", i4, j4);
            scanf("%d", &matriz5[i4][j4]);
        }
    }
    printf("\nMatriz original:\n");
    imprimeMatriz(matriz5);
    transposta(matriz5, matrizT);
    printf("\nMatriz transposta:\n");
    imprimeMatriz(matrizT);
    printf("\n");
 

    //6. Diagonal principal
    printf("%s\n", "6. Diagonal Principal");
    int matriz6[3][3];
    int i6, j6;
    printf("Digite os elementos da matriz 3x3:\n\n");
    for (i6 = 0; i6 < 3; i6++) {
        for (j6 = 0; j6 < 3; j6++) {
            printf("Elemento [%d][%d]: ", i6, j6);
            scanf("%d", &matriz6[i6][j6]);
        }
    }

    int resultado6 = diagonalPrincipal(matriz6);
    printf("A soma dos elementos da diagonal principal da matriz é: %d\n\n", resultado6);


    //7. Vetor e Funções Combinadas
    printf("%s\n", "7. Vetor e Funcoes Combinadas");
    int n;

    printf("Quantos elementos o vetor terá? ");
    scanf("%d", &n);

    int vetor7[n];

    lerVetor(vetor7, n);
    float media = calcularMedia(vetor7, n);
    imprimirAcimaMedia(vetor7, n, media);

    return 0;
}