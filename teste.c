#include<stdio.h>

int main(void){

    //1. Nome, Idade e Curso

    printf("\nHello World");
    printf("\nCamila");
    printf("\n18");
    printf("\nLicenciatura em Computação");

    //2. Poema

    printf("\n\nO luar prateia a noite serena,\nE a brisa suave, a folhagem acena.\nO amor floresce em meu peito,\nE a saudade me leva ao leito.");

    //3. Tabuada

    printf("\n\n2x0 = 0\n2x1 = 2\n2x2 = 4\n2x3 = 6\n2x4 = 8\n2x5 = 10\n2x6 = 12\n2x7 = 14\n2x8 = 16\n2x9 = 18\n2x10 = 20");
    
    //Etapa 02

    //4. Soma, sub...

    int var_1 = 2;
    int var_2 = 4;

    int soma = var_1 + var_2;

    printf("\nO resultado da soma = %d.\n", soma);

    int subtracao = var_1 - var_2;

    printf("\nO resultado da subtracao = %d.\n", subtracao);
    
    int multiplicacao = var_1 * var_2;

    printf("\nO resultado da multiplicacao = %d.\n", multiplicacao);

    int divisao = var_1 / var_2;

    printf("\nO resultado da divisao = %d.\n", divisao);

    int resto = var_1 % var_2;

    printf("\nO resto da divisao = %d.\n", resto);

    int raio = 4;
    float pi = 3.14;
    
    float area = raio * pi;

    printf("\nA area da circunferencia = %f", area);

}


