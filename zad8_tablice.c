#include <stdio.h>
#include <stdlib.h>
#define n 5


void findMaxValue(int *numbers, int size){
    int max = numbers[0];

    for (int i = 0; i<size;i++){
        if (numbers[i] > max){
            max = numbers[i];
        }
    }
    printf("%d",max);


}



int main()
{
    /*
    int z;
    printf("podaj rozmiar tablicy: ");
    scanf("%d",&z);

    int tab1[z];
    for (int i = 0;i<z;i++){
        printf("%d",&tab1[i]);
    }

    int tab[n] = {13,2,3};
    printf("%d, %d\n",&tab[2],0[tab]); // tab samo to wskaznik. [] to offset.
    */

    int myTab[] = {2,223,2,2,2,11,2};
    int rozmiar = sizeof(myTab) / sizeof(myTab[0]);
    findMaxValue(myTab, rozmiar);

    printf("%.2f",average(7,myTab));


    return 0;

}
