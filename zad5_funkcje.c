#include <stdio.h>
#include <stdlib.h>

//Zadanie 1
/*
int sumTwoNumbers(int x, int y) {
  return x + y;
}
*/

//Zadanie 2
/*
float calculateAbsoluteValue(float z){
    if (z>0){
        return z;
    }else{
    }return -z;

}
*/

//Zadanie 5
/*
int sumSquares(int n){
    int suma = 0;
    for (int i =1; i<=n;i++){
        suma += i*i;
    }
    return suma;
}
*/

//Zadnie 3
/*
int calculateFactorial(int n){
    int wynik = 1;
    if (n<0){
        return wynik = 0;
    }else{
        for (int i = 2; i<=n;i++){
            wynik *=i;
        }
    }
    return wynik;
*/

/*
//Zadanie 4
int sumNumbers(int n){
    int suma = 0;
    for (int i =1; i<=n;i++){
        suma += i;
    }
    return suma;
}
*/


//Zadanie 8
/*
void countFunctionCalls(){
    static int licznik=0;
    licznik++;
    printf("liczba wywolan funkcji: %d\n",licznik);
}
*/

//Zadanie 9
int calculateFactorialRecursively(int n){
    if (n<=1){
        return 1;
    }
    return n * calculateFactorialRecursively(n-1);
}



int calculateArithmeticSequenceRecursively(int n, int d){
    if (n==1) return 1;
    return calculateArithmeticSequenceRecursively(n - 1, d) + d;
}

int calculateGeometricSequenceRecursively(int n, int d){
    if (n==1) return 1;
    return calculateGeometricSequenceRecursively(n - 1, d) *d;
}



int calculate14(int n){
        if (n==1) return 2;
        return 3*calculate14(n-1) -1;
    }

int calculate13(int n){
    if (n==1) return 1;
    return 2* calculate13(n-1) + 3;
}

int calculate15(int n){
    if (n==1){
        return 1;
    }else if (n==2)
    {
        return 2;
    }
    return calculate15(n-1) + 2*calculate15(n-2);
}

int calculate16(int n){
    if (n==1){
        return 2;
    }else if (n==2)
    {
        return 3;
    }
    return 2* calculate16(n-1) + 3*calculate16(n-2);
}



int main() {
  //printf("wynik: %d\n", sumTwoNumbers(11, 2));
  //printf("wartosc bezwzgledna liczby wynosi: %.2f\n",calculateAbsoluteValue(-5));
  //printf("suma kwadratow wynosi: %d",sumSquares(9));
  //printf("silnia wynosi: %d",calculateFactorial(4));
    //printf("suma liczb: %d",sumNumbers(3));
    //countFunctionCalls();
    //countFunctionCalls();
    //countFunctionCalls();
    printf("wynik: %d",calculateFactorialRecursively(5));

  return 0;
}
