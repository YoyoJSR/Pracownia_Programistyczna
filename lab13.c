#include <stdio.h>
#include <stdlib.h>


struct element{
    int x;
    struct element * next;

};

int main()
{
    //lista bez glowy
    struct element * lista  = NULL;
    struct element * wsk = malloc(sizeof(struct element));
    wsk->x =  13;
    wsk->next = NULL;
    lista = wsk;
    //dodawanie elementu na koniec (tak naprawde to nie do konca, tylko po wsk) xd
    struct element * wsk2 = malloc(sizeof(struct element));
    wsk2->x = 15;
    wsk2->next = NULL;
    wsk->next = wsk2;
    //dodawanie elemntu na poczatek
    struct element *wsk3 = malloc(sizeof(struct element));
    wsk3->x = 29;
    wsk3->next = lista;
    lista = wsk3;
    //lista z glowa
    struct element * lista2 = malloc(sizeof(struct element));
    lista2->next = NULL;
    struct element * wsk4 = malloc(sizeof(struct element));
    wsk4->x = 129;
    wsk4->next  = lista2->next;
    lista2->next = wsk4;
    //wypisywanie listy
    struct element * temp = lista;
    while(temp!=NULL){
        printf("%d ",temp->x);
        temp = temp->next;
    }


    return 0;
}
