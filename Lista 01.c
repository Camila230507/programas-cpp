#include<stdio.h>

#define MAX 256

int main(void){

    //1. Nome, Idade e Curso

    printf("\n\n**Apresentacao**\n");

    printf("\nHello World");
    printf("\nCamila");
    printf("\n18");
    printf("\nLicenciatura em Computação");

    //2. Poema

    printf("\n\n**Poema**\n");

    printf("\nO luar prateia a noite serena,\nE a brisa suave, a folhagem acena.\nO amor floresce em meu peito,\nE a saudade me leva ao leito.");

    //3. Tabuada

    printf("\n\n**Tabuada**\n");

    printf("\n2x0 = 0\n2x1 = 2\n2x2 = 4\n2x3 = 6\n2x4 = 8\n2x5 = 10\n2x6 = 12\n2x7 = 14\n2x8 = 16\n2x9 = 18\n2x10 = 20");
    
    //Etapa 02

    //4. Soma, sub...
    printf("\n\n**Operacoes**\n");

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
    printf("\n**Area do circulo**\n");

    int raio = 4;
    float pi = 3.14;
    
    float area = raio * raio * pi;

    printf("\nA area da circunferencia = %f", area);

    //6. Idade
    printf("\n\n**Idade**\n");

    int idade = 18;

    int dias_vividos = idade * 365;

    printf("\nTotal de dias vividos: %d", dias_vividos);

    //7. Sinal
    printf("\n\n**Sinal**\n");

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

    printf("\n\n**Maior e menor**\n");

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

    printf("\n\n**Media de suas notas**\n");

    int nota_1 = 100;
    int nota_2 = 89;
    int nota_3 = 73;

    float media = (nota_1+nota_2+nota_3)/3;

    if(media >= 7){
        printf("\nVoce foi aprovado com nota %f, parabens!", media);
    }

    else if(media >= 5){
        printf("\nVoce esta de recuperacao com nota %f!", media);
    }

    else{
        printf("\nVoce esta reprovado!", media);
    }

    //11. Números de 1 a 100

    int contador = 0;

    printf("\n\n**Numeros de 1 a 100:**\n");
    while (contador < 101){
        printf("%d\n", contador);
        contador++;
    }

    //12. Tabuada usando for

    printf("\n\n**Tabuada do 1 ao 10**\n");

    int i, j;

    for (i = 1; i <= 10; i++) {
        printf("\nTabuada do %d:\n", i);
        for (j = 1; j <= 10; j++) {
            printf("%d x %d = %d\n", i, j, i * j);
        }
    }

    //13. Somatoria

    printf("\n\n**Soma dos numeros digitados**\n");

    int numeros, soma_da_13 = 0;

    do {
        printf("Digite um numero (0 para sair): ");
        scanf("%d", &numeros);
        soma_da_13 += numeros;
    } while (numeros != 0);

    printf("A soma total e: %d\n", soma_da_13);

    //13. Calculadora Simples

    printf("\n\n**Calculadora Simples**\n");

    printf("Digite o primeiro numero: ");
    float primeiro_num;
    scanf("%f", &primeiro_num);

    printf("Digite o segundo numero: ");
    float segundo_num;
    scanf("%f", &segundo_num);

    printf("Digite a operacao que voce quer realizar (+, -, *, /)");
    char operacao;
    scanf(" %c", &operacao);

    if(operacao == '+'){
        printf("O resultado de sua operacao e: %f + %f = %f", primeiro_num, segundo_num, primeiro_num+segundo_num);
    }

    else if(operacao == '-'){
        printf("O resultado de sua operacao e: %f - %f = %f", primeiro_num, segundo_num, primeiro_num-segundo_num);
    }

    else if(operacao == '*'){
        printf("O resultado de sua operacao e: %f * %f = %f", primeiro_num, segundo_num, primeiro_num*segundo_num);
    }

    else if(operacao == '/'){
        printf("O resultado de sua operacao e: %f / %f = %f", primeiro_num, segundo_num, primeiro_num/segundo_num);
    }

    else{
        printf("Caracter nao reconhecido");
    }

    //14. Conversor de temperaturas

    printf("\n\n**Calculadora de Temperaturas**\n");

    printf("Digite qual é a temperatura: ");
    float temperatura_numerica;
    scanf("%f", &temperatura_numerica);

    printf("Digite para que tipo de medida quer converter sua temperatura(C ou F): ");
    char temperatura;
    scanf(" %c", &temperatura);

    if(temperatura == 'C'){
        printf("A sua temperatura convertida e: %f", (temperatura_numerica*1.8)+32);
    }

    else if(temperatura == 'F'){
        printf("A sua temperatura convertida e: %f", (temperatura_numerica-32)/1.8);
    }

    //15. Escrita inversa

    char frase[MAX];
    int k = 0, tamanho = 0;

    printf("Digite uma frase: ");
    fgets(frase, MAX, stdin);

    // descobrir tamanho "na unha"
    while (frase[tamanho] != '\0' && frase[tamanho] != '\n') {
        tamanho++;
    }

    // imprimir de trás pra frente
    printf("Frase invertida: ");
    for (k = tamanho - 1; k >= 0; k--) {
        printf("%c", frase[k]);
    }
    printf("\n");

    return 0;
}