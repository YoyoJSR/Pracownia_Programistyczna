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
