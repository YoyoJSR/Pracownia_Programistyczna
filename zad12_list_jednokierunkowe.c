#include <stdio.h>
#include <stdlib.h>

struct element{
    int i;
    struct element *next;
};


int main()
{
    //Zadanie 1
    struct element *lista = malloc(sizeof(struct element));
    lista->i = 4;
    lista->next = malloc(sizeof(struct element));
    lista->next->i = 5;
    lista->next->next = malloc(sizeof(struct element));
    lista->next->next->i = -12;
    lista->next->next->next = NULL;
    struct element *wsk = lista;
    while(wsk !=NULL){
        printf("%d ",wsk->i);
        wsk = wsk->next;

    }

    //Zadanie 2
    struct element *lista2 = malloc(sizeof(struct element))
    lista->next = NULL;



    return 0;
}
