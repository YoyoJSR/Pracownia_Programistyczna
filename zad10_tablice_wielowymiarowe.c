#include <stdio.h>
#include <stdlib.h>

//Zadanie 1
int sumMatrix(int n,int m,int tab[n][m]){
    int wynik = 0;
    for (int i=0;i<n;i++){
        for (int j=0;j<m;j++){
            wynik +=tab[i][j];
        }
    }
    return wynik;
}

//Zadanie 2
int sumArray(int n,int m,int **tab){
    int suma=0;
    for (int i=0;i<n;i++){
        for (int j = 0;j<m;j++){
            suma +=*(*(tab+i)+j);
        }
    }
    return suma;

}


//Zadanie 3
int maxRowIdx(int n,int m,int tab[n][m]){
    int max = tab[0][0];
    int index = 0;
    for (int i=0;i<n;i++){
        for (int j=0;j<m;j++){
            if (max < tab[i][j]){
                max = tab[i][j];
                index = i;
            }
        }
    }
    return index;

}

int minColIdx(int n,int m,int tab[n][m]){
    int min = tab[0][0];
    int index = 0;
    for (int i=0;i<n;i++){
        for (int j=0;j<m;j++){
            if (min > tab[i][j]){
                min = tab[i][j];
                index = j;
            }
        }
    }
    return index;

}



int main()
{
    //Zadanie 1
    /*
    int tab[2][3] = {{1,1,1},{2,1,11}};
    printf("wynik: %d",sumMatrix(2,3,tab));
    return 0;
    */

    //Zadanie 3
    /*
    int tab[2][3] = {{1,77,3},{6,77,9}};
    printf("najwiekszy index: %d", maxRowIdx(2,3,tab));
    */

    //Zadanie 4
    int tab[2][3] = {{2,77,3},{6,7,1}};
    printf("najmniejsza kolumna: %d", minColIdx(2,3,tab));

}
