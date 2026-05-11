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

void copyMat(int n,int m,int tab[n][m],int tab2[n][m]){
    for (int i=0; i <n;i++){
        for (int j=0;j<m;j++){
            tab[i][j] = tab2[i][j];
        }
    }
}
void copyArr2D(int n,int m,int **tab1,int **tab2){
    for (int i =0;i<n;i++){
        for (int j=0;j<m;j++){
            *(*(tab1 + i)+j) = *(*(tab2 + i)+j);
        }
    }
}

void swapItems(unsigned int n,unsigned int m,int **tab1,int **tab2){
    for (int i=0; i<n;i++){
        for (int j =0; j<m;j++){
            int value = *(*(tab1 + i)+j);
            *(*(tab1 + i) + j) = *(*(tab2 + i)+j);
            *(*(tab2 + i)+j) = value;

        }
    }


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

    /*
    int tab1[2][3] = {{3,1,2},{2,2,2}};
    int tab2[2][3];
    copyMat(2,3,tab2,tab1);

    for (int i=0;i<2;i++){
        for(int j = 0;j<3;j++){
            printf("%d",tab1[i][j]);
        }
        printf("\n");
    }
    */
    int **tab1 = (int**)malloc(sizeof(int*) * 2);
    tab1[0] = (int*)malloc(sizeof(int)*3);
    tab1[1] = (int*)malloc(sizeof(int)*3);
    tab1[0][0] = 1;
    tab1[0][1] = 2;
    tab1[0][2] = 3;
    tab1[1][0] = 4;
    tab1[1][1] = 5;
    tab1[1][2] = 6;

    swapItems(2,3,tab,tab1);
    printf("%d\n",tab1);
    free(tab[0]);
    free(tab[1]);
    free(tab);
    

    

}
