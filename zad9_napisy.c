#include <stdio.h>
#include <stdlib.h>

// Zadanie 1
int length(char *napis) {
    int licz = 0;
    while (napis[licz]!='\0') {
        licz++;
    }
    return licz;
}

//Zadanie 2
int countNums(char *tab){
    int licz = 0;
    int i = 0;
    while (tab[i]!='\0'){
        if(tab[i] >= '0' && tab[i] <= '9'){
            licz++;
        }
        i++;
    }
    return licz;
}

// Zadanie 4
int cmpStrNew(char napis1[],char napis2[]){
    for (int i=0; napis1[i] !='\0' || napis2[i] !='\0'; i++){
        if(napis1[i] != napis2[i]){
            return 1;
        }else{
            return 0;
        }
    }

}


int lexComp(char str1[],char str2)


//Zadanie 6
void toLowerNew(char *tab){
    int i = 0;
    while (tab[i]!='\0'){
        if (tab[i] >= 'A' && tab[i] <= 'Z' ){
            tab[i] +=32;
        }
        i++;
    }
}

//Zadanie 7
void toUpperNew(char *tab){
    int i = 0;
    while (tab[i]!='\0'){
        if (tab[i] >= 'a' && tab[i] <= 'z' ){
            tab[i] -=32;
        }
        i++;
    }
}



int main()
{
    //Zadanie 1
    //char napis[] = "Hello world";
    //printf("%d ", length(napis));


    //Zadanie 2
    //char napis[] = "siema witam 1337";
    //printf("%d ", countNums(napis));

    //Zadanie 4
    //char napis[] = "Hello wor222";
    //char napis2[] = "Hello world";
    //printf("%d",cmpStrNew(napis,napis2));


    //Zadanie 6
    char napis[] = "HELLO world";
    toLowerNew(napis);
    printf("%s",napis);

    //Zadanie 7
    //char napis[] = "HALO world";
    //toUpperNew(napis);
    //printf("%s",napis);


    return 0;
}
