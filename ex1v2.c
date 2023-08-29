#include <stdio.h>
#include <stdlib.h>

typedef struct item {
    int valor;
    struct Item* proximo;
} Item;

Item* criarItem(int valor) {
    Item* novoItem = malloc(sizeof(Item));
    novoItem->valor = valor;
    novoItem->proximo = NULL;

    return novoItem;
}

void adicionarItem(Item** primeiro, int valor){
    Item* novoItem = criarItem(valor);

    if (*primeiro == NULL) {
        *primeiro = novoItem;
    } else {
        Item* atual = *primeiro;
        while (atual->proximo != NULL) {
            atual = atual->proximo;
        }
        atual->proximo = novoItem;
    }
}

Item* obterItem(Item** inicio, int pos) {
    Item* item = *inicio;
    int i = 0;

    while (i < pos && item != NULL){
        item = item->proximo;
        i ++;
    }

    return item;
}


int main() {
    Item* primeiro = NULL;
    adicionarItem(&primeiro, 5);
    adicionarItem(&primeiro, 3);
    adicionarItem(&primeiro, 7);
    adicionarItem(&primeiro, 10);
    adicionarItem(&primeiro, 12);


    Item* item = primeiro;
    while (item != NULL) {
        printf("%d \n", item->valor);
        item = item->proximo;
    }

    item = obterItem(&primeiro, 2);
    printf("A posição 2 da lista tem o valor %d", item->valor);

    return 0;
}
