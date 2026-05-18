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

struct Person{
    char name[20];
    int age;
};


void showPerson(struct Person p){
    printf("%s %d", p.name,p.age);
}


void birthday(struct Person *p){
    p->age++;
};

struct Person *initPerson(char *name,int age){
    if (age<=0){
        return NULL;
    }
    struct Person *p = malloc(sizeof(struct Person));
    if (p==NULL){
        return NULL;
    }
    strcpy(p->name,name);
    p->age = age;
    return p;
};




struct Book1{
    char title[50];
    int page_count;
};

struct Book1 *initBook(char *title, int page_count){
    if(page_count <=0){
        return NULL;
    }
    struct Book1 *b = malloc(sizeof(struct Book1));
    if (b==NULL){
        return NULL;
    }
    strcpy(b->title,title);
    b->page_count = page_count;
    return b;

};

void showBook(struct Book1 b){
    printf("%s, %d\n",b.title,b.page_count);
}

void addPages(struct Book1 *b){
    b->page_count +=10;
}


struct Laptop{
    char model[30];
    float price;
};

struct Laptop initLaptop(char model[30], float price){
    struct Laptop result;
    strcpy(result.model,model);
    result.price = price;
    return result;
};

void showLaptop(struct Laptop laptop){
    printf("%s, cena: %.2f",laptop.model,laptop.price);
}

void reducePrice(struct Laptop *laptop){
    laptop->price*=0.35;
}




// Stale. Przydatne do dokumentacji
enum Status{
    PENDING,
    PROCESSING,
    DONE,
    ERROR = -1,
};

union Liczba{
    int calkowita;
    double zmiennoprzecinkowa;
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
        {"Mikolajek","Barack Obama",2201,777},
        {"Wiedzmin","Andrzej Sapkowski",1999,400},
        {"Hobbit","C s Lewis",1991,401},
    };

    for (int i =0; i<5;i++){
        printf("%s\n",books[i].title);
    };
    */

    /*
    union Liczba liczba = {};
    liczba.calkowita = 3;
    printf("%d \n",liczba.calkowita);
    printf("%lf \n",liczba.zmiennoprzecinkowa);
    liczba.zmiennoprzecinkowa = 3.14;
    printf("%d \n",liczba.calkowita);
    printf("%lf \n",liczba.zmiennoprzecinkowa);
    */

    //Zadanie 6
    /*
    struct Person *person1 = initPerson("Majkel", 72);
    showPerson(*person1);
    printf("\n");
    birthday(person1);
    showPerson(*person1);
    */



    //Zadanie 8
    /*
    struct Book1 *my_book = initBook("Wiedzmin",331);
    showBook(*my_book);
    addPages(my_book);
    addPages(my_book);
    addPages(my_book);
    addPages(my_book);
    showBook(*my_book);
    */

    struct Laptop my_laptop = initLaptop("Msi GX1000", 3599.99);
    showLaptop(my_laptop);


    return 0;
}
