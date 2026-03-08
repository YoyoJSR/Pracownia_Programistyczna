#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a =6,b=3; //a = 0b0110, b = 0b0011
    printf("%d\n", a & b); // AND - 0b0010 = 2
    printf("%d\n", a | b); // OR - 0b0111 = 7
    printf("%d\n", a ^ b); // XOR - 0b0101 = 5 (dziala jak <=>)
    printf("%u\n", ~a); // NOT - 0b1111... 1001
    printf("%d\n", a<<2); // LEFT SHIFT - 0b011000 = 24 (mnozenie przez potege 2)
    printf("%d\n", a>>2); // RIGHT SHIFT 0b0001 = 1

    //Zadanie 2
    /*
    int liczba;
    printf("podaj liczbe: ");
    scanf("%d",&liczba);
    if (liczba & 1){
        printf("liczba jest nieparzysta");
    }else{
        printf("liczba jest parzysta");
    }
    */


    //Zadanie 4

    /*
    //Zadanie 5 
    int liczba1;
    printf("podaj liczbe: ");
    scanf("%d",&liczba1);
    printf("Liczba odwrotna to: %d",~liczba1);
    */

    /*
    //Zadanie 7 i 6
    int liczba1,przesuniecie;
    char lewo_prawo;
    printf("podaj liczbe: ");
    scanf("%d",&liczba1);
    printf("o ile chcesz ja przesunac: ");
    scanf("%d",&przesuniecie);
    int l_shift =  liczba1 << przesuniecie;
    int r_shift = liczba1 >> przesuniecie;

    printf("w lewo czy w prawo: (l lub p): ");
    scanf(" %c",&lewo_prawo);
    if(lewo_prawo == 'l'){
        printf("liczba %d przesutnieta w lewo to: %d \n",liczba1,l_shift);
    }else if(lewo_prawo == 'p'){
        printf("liczba %d przesutnieta w prawo to: %d",liczba1,r_shift);
    }else{
        printf("niepoprawna literka podaj l lub p");
    }
    */



    //Zadanie 8
    /*
    int liczba1,liczba2;
    printf("podaj liczbe 1: \n");
    scanf("%d",&liczba1);
    printf("podaj liczbe 2: \n");
    scanf("%d",&liczba2);
    int xor = liczba1 ^ liczba2;
    printf("xor wynosi: %d",xor);
    */


    return 0;



}
