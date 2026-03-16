#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    //Zadanie 1
    /*
    int i;
    for (i = 1;i<=100;i++){
        printf("%d\n",i);
    }
    */

    //Zadanie 2
    /*
    int n,suma,i=0;

    printf("podaj liczbe: ");
    scanf("%d",&n);

    while (i < n) {
      suma+=i++;
    }
    printf("suma wynosi: %d",suma);
    */


    //Zadanie 3
    /*
    int i =0;
    int n;
    int dodatnie=0,ujemne=0;

    do{
        printf("podaj liczbe (press 0 to quit): ");
        scanf("%d",&n);
        if (n>0){
            dodatnie+=n;
        printf("dodano liczbe dodatnia! aktualna suma liczb dodatnich: %d\n",dodatnie);
        }else if (n<0){
            ujemne+=n;
            printf("dodano liczbe dodatnia! aktualna suma liczb ujemnych: %d\n",ujemne);
        }
    }
    while (n!=0);
    printf("suma liczb dodatnich: %d\n",dodatnie);
    printf("suma liczb ujemnych: %d\n",ujemne);
    */

    //Zadanie 4
    /*
    int i,n,silnia=1;

    printf("podaj liczbe: ");
    scanf("%d",&n);
    for (i=1;i<=n; i++){
        silnia*=i;
    }
    printf("silnia z liczby %d wynosi: %d",n,silnia);
    */

    //Zadanie 5
    /*
    int i=0;
    int t1=0,t2=1;
    int next = t1+t2;

    while (i < 9){
        printf("%d\n",next);
        t1 = t2;
        t2 = next;
        next = t1+t2;
        i++;
    }
    */
    //Zadanie 6
    /*
    float liczba;
    printf("podaj liczbe: ");
    scanf("%f",&liczba);
    while(liczba!=0){
            printf("%f\n",floor(liczba*liczba));
            liczba--;

    }
    */

    //Zadanie 10
    /*
    int n;
    printf("podaj liczbe: ");
    scanf("%d",&n);

    printf("dzielniki liczby n: ");
    for(int i =2;i <=n/2;i++){
        if (n%i==0){
            printf("%d, ",i);
        }
    }
    */

    //Zadanie 11
    /*
    int liczba;
    printf("podaj liczbe: ");
    scanf("%d",&liczba);
    while(liczba!=0){
        int nowe = liczba%10;
        printf("%d, ",nowe);
        liczba /=10;
    }
    */

    //Zadanie 12
    int a = 1122,b=867;
    int wynik;
    while(a!=b){
        if (a>b){
            a-=b;
        }else{
            b-=a;
        }
    }
    printf("najwiekszy wspolny dzielnik: %d",b);


    return 0;

}
