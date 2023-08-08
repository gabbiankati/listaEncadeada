#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(){
    char *nome;

    printf("Informe o seu nome: ");
    scanf(" %[^\n]", nome);

    printf("Seu nome é %s", nome);

    return 0;
}