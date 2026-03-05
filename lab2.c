#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(void)
{
    int a = 1;
    int b = 2;
    double c = 2.5;
    double d = 3.2;

    a = a+b;
    a+=b;

    a = a-b;
    a-=b;

    int i = 0;
    printf("%d\n",i++); // odczytaj wartosc zwiekszona o jeden
    printf("%d\n",i);
    printf("%d\n",++i);// zwieksz wartosc i dopiero ja odczytaj
    printf("%d\n",i);

    double s = 0.1  + 0.2;
    printf("0.1 + 0.2 =  %.20f\n",s);


    int x1 = 8;
    int x2 = 3;
    double x3 = (double)x1 / x2; //
    printf("%lf\n",x3);


    double z1 = 0.1 + 0.2;
    double z2 = 0.3;
    double epsilon = 1e-9;
    if (fabs(z1-z2) < epsilon){
        printf("Zgadza sie!\n");
    }else if (fabs(z1-z2) == epsilon){
        printf("roznica jest rowna dokladnie 0.000000");
    }else{
        printf("nieprawidlowy wynik!");
    }
    // && logiczny and
    // || logiczny

    int m = 5,n=4;
    (m > n) ? printf("m jest wieksze od n czyli %d > %d\n",m,n):printf("n jest wieksze od m");


    printf("\n");
    printf("\n");
    printf("\n");
    printf("\n");

    //Operatory artytmetyczne

    //Zadanie1

    int liczba1 = 3;
    int liczba2 = 4;
    int liczba3 = 4;
    int reszta =  (liczba1 + liczba2)%liczba3;
    printf("reszta z dzielenia wynosi: %d \n",reszta);

    //Zadanie 2
    int kwadrat = pow(liczba1,2) - pow(liczba2,2);
    printf("roznica kwadratow 2 liczb wynosi: %d\n",kwadrat);


    //zadanie 3
    int roznica = liczba1 - liczba2;
    int iloczyn = roznica * liczba3;
    printf("wynik: %d \n",iloczyn);


    //Zadanie 4
    double geometric_mean = pow(abs(liczba1*liczba2*liczba3),1.0/3);
    printf("srednia geometryczna 3 liczb wynosi: %g\n",geometric_mean);

    //Zadanie 5
    kwadrat = pow(liczba1+liczba2,2);
    printf("kwadrat sumy 2 liczb wynosi: %d\n",kwadrat);

    //Zadanie 6
    int kwadrat2 = (pow(liczba1,2) + pow(liczba2,2) + pow(liczba3,2));
    printf("suma kwadratow 3 liczb wynosi: %d\n",kwadrat2);



    // Instrukcje warunkowe
    int cyfra1;
    printf("podaj liczbe: \n");
    scanf("%d",&cyfra1);
    if (cyfra1 < 0){
        printf("liczba jest dodatnia");
    }
    else if (cyfra1 = 0){
        printf("liczba jest rowna 0");
    }
    else{
        printf("liczba jest ujemna");
    }






    return 0;
}
