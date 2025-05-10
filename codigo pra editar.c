#include <stdio.h>

int main(){

char nome[100];
int numero1,numero2,soma;

printf("Digite o primeiro numero e o segundo numero);
scanf("%d %d",&numero1,&numero2);
soma = numero1 + numero2;

printf("A soma deles é: %d",soma);

printf("Digite o seu nome: ");
scanf("%99s",&nome);

printf("Seu nome e: %s",nome);



}
