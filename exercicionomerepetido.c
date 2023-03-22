#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <locale.h>
/*Elabore um programa que leia um nome completo de no máximo 100 caracteres e imprima as iniciais deste nome. Exemplo: João Carlos Nascimento da Silva, será impresso JCNDS*/

int main()
 {
    setlocale(LC_ALL, "Portuguese");
    char nome[100];
    printf("Digite o nome completo de no máximo 100 caracteres:\n");
    fgets(nome, 100, stdin);
    int qtdA = 0;
    for (int i = 0; nome[i] != 0; i++) {
        if (nome[i] != ' ' && (i == 0 || nome[i - 1] == ' '))
        printf("%c",  toupper(nome[i]));
    }
    system("pause");
    return 0;
 }

