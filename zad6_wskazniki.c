#include <stdio.h>


int sum(int a, int b){
    return a + b;
}

int sumVals(int *a, int *b){
    return *a + *b; // gwiazdka oznacza ze jest to wskaznik
}

void addPtr(int *a, int *b, int *suma){
     *suma = *a + *b;
}

//Zad2

void copyInt(int x, int* w ){
    *w = x;
}

//zad 4
double findMax(const double *num1,double *const num2){

    if(*num1 > *num2){
        return *num1;
    }else{
        return *num2;
    }
}



//zad 5
int *initInts(){
    int *tablica  = (int*)malloc(3* sizeof(int));
    tablica[0] = 5;
    tablica[1] = -12;
    tablica[2] = 33;
    return *tablica[1];
}






int main ()
{
    /*
    int a=7,b=8,wynik = 0;
   printf("%d\n",sum(a,b));
   printf("%d\n",sumVals(&a,&b));
   addPtr(&a,&b,&wynik);
   printf("%d\n",&wynik);
   //Zad 2
   int x = 12,w =0;
   copyInt(x,&w);
   printf("x: %d w: %d",x,w);
*/
    //Zad 4

    double a = 13.2;
    const double b = 7.7;

    const double *wsk1 = &b;
    double *const wsk2 = &a;

    printf("wsk1: %.2f\n",*wsk1);
    printf("wsk2: %.2f\n",*wsk2);
    printf("najwieksza wartosc: %.2f", findMax(wsk1,wsk2));


    //zad 5
    int *a = initInts();
    printf("%d\n", *a);
   return 0;
}
