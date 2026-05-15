#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct Punkt2D{
    float x;
    float y;

};


struct Car{
    char *brand;
    char model[20];
    int year;
    int isAvailable;
};

struct Student{
    char *firstName;
    char *lastName;
    int id;
    float gba;

};
struct Rectangle{
    float width;
    float height;
    char *color;

};

struct Book{
    char *title;
    char *author;
    int publishedYear;
    int pages;

};


int main()
{
    /*
    struct Punkt2D * punkt = (struct Punkt2D *)malloc(sizeof(struct Punkt2D));
    punkt->x  = 3.01;
    punkt->y = 4.01;
    printf("%f i %f",punkt->x, punkt->y);
    */

    //Zadanie 1
    /*
    struct Car Auto1 = {"Opel","Astra",2007,1};
    printf("Auto na sprzedarz: \n Marka: %s \n Model: %s \n Rocznik: %d \n Dostepnosc: %d",Auto1.brand,Auto1.model,Auto1.year, Auto1.isAvailable);
    */
    //Zadanie 2
    /*
    struct Student Student1 = {"Samuel","Jackson",10001,3.5};
    struct Student Student2 = {"John","Travolta",10002,6.0};
    struct Student Student3 = {"Bruce","Willis",10003,2.0};

    struct Student studenci[3] = {Student1,Student2,Student3};

    printf("Studenci UWM: \n");
    printf("%s %s \n", Student1.firstName, Student1.lastName);
    printf("%s %s \n", Student2.firstName, Student2.lastName);
    printf("%s %s \n", Student3.firstName, Student3.lastName);
    */

    //Zadanie 3
    /*
    struct Rectangle rectangles[4] = {
        {10.5f,5.0f,"blue"}

    };
    */

    //Zadanie 4
    /*
    struct Book books[5] = {
        {"American Psycho","Bret Easton Ellis", 1991, 901},
        {"W pustyni i w puszczy","Lionel Messi",2029,14},
        {"Pachnidlo","Barack Obama",2201,777},
        {"Wiedzmin","Andrzej Sapkowski",1999,400},
        {"Hobbit","C s Lewis",1991,401},
    };


    for (int i =0; i<5;i++){
        printf("%s\n",books[i].title);
    };
    */

    return 0;
}
