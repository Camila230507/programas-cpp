/*
Criar um programa capaz de receber 3 valores de mensalidade de um usuário;
Solicitar ao usuário informar se haverá ou não incidência de taxa (* 1.27);

Resultados (Saída no terminal)
Mostrar o nome do usuário;
Mostrar a média dos valores da mensalidade sem taxa
Mostrar a média dos valores da mensalidade com taxa aplicada
*/

# include <stdio.h>

int main(void){

    char nome[50];

    printf("Usuario, informe um nome: ");
    fgets(nome, sizeof(nome), stdin);

    printf("Digite o valor da primeira mensalidade: ");
    float n1;
    scanf("%f", &n1);

    printf("Digite o valor da segunda mensalidade: ");
    float n2;
    scanf("%f", &n2);

    printf("Digite o valor da terceira mensalidade: ");
    float n3;
    scanf("%f", &n3);

    printf("Esses valores terao incidencia de taxa (S ou N)?");
    char taxa;
    scanf(" %c", &taxa);

    printf("\nO nome do usuario: %s", nome);

    if(taxa == 'N'){
        printf("A media dos valores da mensalidade sem taxa e: %f", (n1+n2+n3)/3);
    }
    else if(taxa == 'S'){
        printf("A media dos valores da mensalidade com taxa e: %f", ((n1+n2+n3)/3)*1.27);
    }
    else{
        printf("Resposta inválida...");
    }

    return 0;

}