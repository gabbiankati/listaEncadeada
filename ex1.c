#include <stdio.h>
#include <stdlib.h>

typedef struct item {
    int valor;
    struct Item* proximo;
} Item;

int main() {
    Item* primeiro = NULL;
    primeiro = malloc(sizeof(Item));
    primeiro->valor = 5;
    primeiro->proximo = NULL;

    Item* segundo = malloc(sizeof(Item));
    segundo->valor = 3;
    segundo->proximo = NULL;

    primeiro->proximo = segundo;

    Item* terceiro = malloc(sizeof(Item));
    terceiro->valor = 7;
    terceiro->proximo = NULL;

    segundo->proximo = terceiro;

    Item* quarto = malloc(sizeof(Item));
    quarto->valor = 10;
    quarto->proximo = NULL;

    terceiro->proximo = quarto;

    Item* item = primeiro;
    while (item != NULL) {
        printf("%d \n", item->valor);
        item = item->proximo;
    }

    return 0;
}