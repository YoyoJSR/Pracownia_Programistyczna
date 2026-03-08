    #include <stdio.h>
    #include <math.h>
    #include <stdlib.h>

    int main(){

    //Zadanie 1
    /*
    
    int cyfra1;
    printf("podaj liczbe: \n");
    scanf("%d",&cyfra1);
    if (cyfra1 > 0){
        printf("liczba jest dodatnia");
    }
    else if (cyfra1 == 0){
        printf("liczba jest rowna 0");
    }
    else if (cyfra1 <0){
        printf("liczba jest ujemna");
    }
    else{
        printf("to nie jest liczba");
    }
*/

    //Zadanie 2
    /*
    int liczba,liczba2;
    printf("podaj liczbe: \n",liczba);
    scanf("%d",&liczba);
    printf("podaj liczbe 2: \n",liczba2);
    scanf(" %d",&liczba2);
    if (liczba > liczba2){
        printf("%d jest wieksza od %d",liczba,liczba2);
    }else if(liczba2 > liczba){
        printf("%d jest wieksza od %d",liczba2,liczba);
    }else{
        printf("liczby sa takie same");
    }
    */
   
    //Zadanie 3
    /*
    int ocena;
    printf("podaj  ocene(1-5): ");
    scanf("%d",&ocena);
    switch(ocena){     
    case 1:
        printf("niedostateczna");
        break;
    case 2:
        printf("dopuszczajaca");
        break;
    case 3:
        printf("dostateczna");
        break;
    case 4:
        printf("dobra");
        break;
    case 5:
        printf("bardzo dobra");
        break;

    }
    */
   //Zadanie 4
   /*
    int liczba1,liczba2,liczba3;
    printf("podaj 1 liczbe: ");
    scanf("%d",&liczba1);
    printf("podaj 2 liczbe: ");
    scanf(" %d",&liczba2);
    printf("podaj 3 liczbe: ");
    scanf(" %d",&liczba3);
    
    if (liczba1<liczba2 && liczba1 < liczba3){
        printf("Liczba %d jest najmniejsza",liczba1);
    }else if (liczba2<liczba1 && liczba2<liczba3){
        printf("liczna %d jest najmniejsza",liczba2);
    }else if (liczba3<liczba1 && liczba3<liczba2){
        printf("liczba %d jest najmniejsza",liczba3);
    }else{
        printf("nie ma najmniejszej liczby");
    }

    */

    //Zadanie 5
    /*
    int rok;
    printf("podaj rok: ");
    scanf("%d",&rok);
    if (rok%4==0 && rok%100!=0 || rok%400==0){
        printf("rok jest przestepny");
    }else{
        printf("rok nie jest przestepny");
    }
    */

    //Zadanie 6
    /*
    int liczba1,liczba2;
    printf("podaj 1 liczbe: ");
    scanf("%d",&liczba1);
    printf("podaj 2 liczbe: ");
    scanf(" %d",&liczba2);
    int suma = liczba1 + liczba2;
    if (suma%2==0){
        printf("liczba %d jest parzysta",suma);
    }else{
        printf("liczba %d jest nieparzysta",suma);
    }
    */

   //Zadanie 7
   /*
   float a,b,c;
   printf("podaj 1 liczbe: ");
   scanf("%f",&a);
   printf("podaj 2 liczbe: ");
   scanf(" %f",&b);
   printf("podaj 3 liczbe: ");
   scanf(" %f",&c);

   float delta = pow(b,2)-4*a*c;
   float x1 = (-b- sqrt(delta))/(2*a);
   float x2 = (-b+ sqrt(delta))/(2*a);
   printf("x1: %.2f\n",x1);
   printf("x2: %.2f",x2);
    */

    //Zadanie 8
    /*
    int liczba1,liczba2;
    printf("podaj 1 liczbe:");
    scanf("%d",&liczba1);
    printf("podaj 2 liczbe:");
    scanf("%d",&liczba2);
    (liczba1 > liczba2) ? printf("liczba1 jest wieksza od 2 czyli %d > %d\n",liczba1,liczba2):printf("liczba2: %d jest wieksza od liczby1: %d",liczba2,liczba1);
    */
    //Zadanie 9
    /*
    int liczba1,liczba2,liczba3;
    printf("podaj 1 liczbe:");
    scanf("%d",&liczba1);
    printf("podaj 2 liczbe:");
    scanf("%d",&liczba2);
    printf("podaj 3 liczbe:");
    scanf("%d",&liczba3);
    (liczba1>liczba2 && liczba1 > liczba3) ? printf("najwieksza liczba to liczba1: %d",liczba1)
    :(liczba2 > liczba1 && liczba2 >liczba3) ? printf("najwieksza liczba to liczba2: %d",liczba2)
    :printf("najwieszka liczba to liczba3: %d",liczba3); 
    */

    //Zadanie 10
    /*
    int liczba;
    printf("podaj liczbe: ");
    scanf("%d",&liczba);
    (liczba%2==0)?printf("liczba parzysta"):printf("liczba nieparzysta");
    */

    //Zadanie 11
    /*
    float liczba1,liczba2;
    printf("podaj liczbe: ");
    scanf("%f",&liczba1);
    printf("podaj liczbe 2: ");
    scanf("%f",&liczba2);
    (liczba1>liczba2)?printf("Liczba1: %.2f jest wieksza",liczba1):(liczba2>liczba1)?printf("liczba2: %.2f jest wieksza",liczba2):printf("liczby sa rowne");
    */


    //Zadanie 12
    /*
    int ocena;
    printf("podaj ocene(0-100): ");
    scanf("%d",&ocena);
    (ocena>=51)?printf("zdane"):printf("niezdane");
    */

    //Zadanie 13
    /*
    int rok;
    printf("sprawdz czy twoj rok jest przestepny: ");
    scanf("%d",&rok);
    (rok%4==0 && rok%100!=0 || rok%400==0)?printf("rok jest przestepny"):printf("rok nie jest przestepny");
    return 0;
    */
    }
