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
    return tablica[1];
}



//zad 8
void sumToPtr(const int *a, const int *b, int *c){
     *c = *a + *b;
}


//zad 9
void sqrCopy(const int *a, int *b){
    *b = *a * *a;
}

//zad 12

float  linFuncVal(const float *a, float *const b, const float *x){
    return (*a) * (*x) + (*b);
}



//zad 16
void swap(int *ptr1, int  *ptr2){
    int t = *ptr1;
    *ptr1 = *ptr2;
    *ptr2 = t;
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
    /*
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
    */

    //Zad 8
    /*
    int a =10,b=20,c=0;
    sumToPtr(&a,&b,&c);
    printf("suma a i b wynosi: %d\n",c);
    */

    //Zad 9
    /*
    int a = 8,b=0;
    sqrCopy(&a,&b);
    printf("kwadrat liczby %d: %d\n",a,b);
    */

    //zad 12
    /*
    const float a= 10.1;
    float b = 9.8,x=1.7;
    printf("wynik: %.2f",linFuncVal(&a,&b,&x));
    */
    int a=10,b = 2;
    printf("przed zamiana: a: %d, b:%d\n",a,b);
    swap(&a,&b);
    printf("po zamianie: a: %d, b: %d",a,b);


   return 0;
}
