#include <stdio.h>

int main() {
    char nome[100];
    int X, Y, soma, subtracao, multiplicacao;
    float divisao;

    printf("Digite o primeiro numero e o segundo numero: ");
    scanf("%d %d", &X, &Y);

    soma = X + Y;
    subtracao = X - Y;
    multiplicacao = X * Y;
    divisao = (float)X / Y;

    printf("\nResultados das operacoes:\n");
    printf("Soma: %d\n", soma);
    printf("Subtracao: %d\n", subtracao);
    printf("Multiplicacao: %d\n", multiplicacao);
    printf("Divisao: %.2f\n", divisao);

    getchar();

    printf("\nDigite o seu nome: ");
    fgets(nome, sizeof(nome), stdin);

    printf("Oi, %sVocê é brabo(a)! Seu código rodou!\n", nome);

    return 0;
}
