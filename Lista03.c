#include <stdio.h>
#include <stdlib.h>


//2. Passagem por referência


void trocar(int *a, int *b){

    int var_num;
    var_num = *a;
    *a = *b;
    *b = var_num;
}

//6. Desafio Final

int maiorValor(int *vet, int tamanho) {
    int i;
    int maior = *vet;
    for (i = 1; i < tamanho; i++) {
        if (*(vet + i) > maior) {
            maior = *(vet + i);
        }
    }
    return maior;
}

 


int main(){


    //1. Ponteiro básico

    printf("\n%s\n\n", "1. Ponteiro Basico");

    int var1;
    var1 = 15;
    int *ptr1;
    ptr1 = &var1;

    printf("Valor da variavel: %d\n", var1);
    printf("Endereco da variavel: %p\n", &var1);
    printf("Valor armazenado no ponteiro: %p\n", ptr1);
    printf("Valor acessado pelo ponteiro: %d\n", *ptr1);



    //2. Passagem por referência

    printf("\n%s\n\n", "2. Passagem por Referencia");
    int num1, num2;

    printf("Digite o primeiro numero: ");
    scanf("%d", &num1);
    printf("Digite o segundo numero: ");
    scanf("%d", &num2);

    printf("\nAntes da troca: \nPrimeiro Numero: %d\nSegundo Numero: %d\n\n", num1, num2);

    trocar(&num1, &num2);

    printf("Depois da troca: \nPrimeiro Numero: %d\nSegundo Numero: %d\n\n", num1, num2);



    //3. Ponteiros e vetores

    printf("\n%s\n\n", "3. Ponteiros e Vetores");

    int vet3[5];
    int *ptr3;
    ptr3 = vet3;
    int i;

    for(i=0; i<5; i++){
        printf("Digite o valor %d: ", i + 1);
        scanf("%d", (ptr3 + i));
    }

    printf("\nElementos do vetor: ", i++);
    for(i=0; i<5; i++){
        printf("%d", *(ptr3+i));
    }

    printf("\n");



    //4. Ponteiros e strings

    printf("\n%s\n\n", "4. Ponteiros e Strings");

    char vet4[51];
    char *ptr4;
    int vogais = 0;

    while (getchar() != '\n');

    printf("Digite uma string (até 50 caracteres): ");
    fgets(vet4, sizeof(vet4), stdin);

    printf("\nO string do usuario: %s", vet4);

    for (ptr4 = vet4; *ptr4 != '\0'; ptr4++) {
        char contar = *ptr4;
        
        if (contar == 'a' || contar == 'A' ||
            contar == 'e' || contar == 'E' ||
            contar == 'i' || contar == 'I' ||
            contar == 'o' || contar == 'O' ||
            contar == 'u' || contar == 'U') {
            vogais++;
        }
    }

    printf("A string possui %d vogais.\n\n", vogais);



    //5. Ponteiros para ponteiros

    printf("\n%s\n\n", "5. Ponteiros para Ponteiros");

    int x = 99;
    int *p = &x;
    int **pp = &p;
    **pp = 123;

    printf("\nNovo valor de x: %d\n\n", x);



    //6. Desafio final

    printf("\n%s\n\n", "6. Desafio final");

    int n, i6;
    int *vet6 = NULL;

    printf("Digite a quantidade de numeros: ");
    scanf("%d", &n);

    vet6 = (int*) malloc(n *sizeof(int));
    if (vet6 == NULL) {
        printf("Erro de alocacao de memoria!\n");
        return 1;
    }

    for (i6 = 0; i6 < n; i6++) {
        printf("Digite o valor %d: ", i6 + 1);
        scanf("%d", vet6 + i6);
    }

    int maior = maiorValor(vet6, n);

    printf("\nO maior valor digitado foi: %d\n", maior);

    free(vet6);

    return 0;
}