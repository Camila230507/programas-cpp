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

    //5. Área do círculo

    int raio = 4;
    float pi = 3.14;
    
    float area = raio * raio * pi;

    printf("\nA area da circunferencia = %f", area);

    //6. Idade

    int idade = 18;

    int dias_vividos = idade * 365;

    printf("\nTotal de dias vividos: %d", dias_vividos);

    //7. Sinal

    int num = -15;

    if (num < 0) {
        printf("\nO numero %d e negativo!", num);
    }
    else if (num > 0){
        printf("\nO numero %d e positivo!", num);
    }
    else{
        printf("\nO numero %d e zero!", num);
    }

    //8. Maior e menor

    int num_1 = 26;
    int num_2 = 12;

    if (num_1 > num_2){
        printf("\nO numero %d e maior que o numero %d", num_1, num_2);
    }
    else if (num_1 < num_2){
        printf("\nO numero %d e maior que o numero %d", num_2, num_1);
    }
    else{
        printf("\nOs números são iguais!");
    }

    //9. Média

    int nota_1 = 100;
    int nota_2 = 89;
    int nota_3 = 73;

    float media = (nota_1+nota_2+nota_3)/3;

    if(media>=7){
        printf()
    }

    printf("\nA media de sua nota e: %d", media);


    int contador = 0;

    printf("\n\nNumeros de 1 a 100:\n");
    while (contador < 101){
        printf("%d\n", contador);
        contador++;
    }



    return 0;

}


