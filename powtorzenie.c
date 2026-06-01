#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char *copyEveryThird(char *napis){
    int i = 0, j=0;
    char *kopia = malloc(sizeof(char) * strlen(napis)/3 + 1);
    while (napis[i] != '\0'){
        if ((i+1)%3==0){
            kopia[j] = napis[i];
            j++;
        }
        i++;
    }
    kopia[j] = '\0';
    return kopia;
}

int strDig(char *napis){
    int i = 0;
    int licz = 0;
    while(napis[i] != '\0'){
        if (napis[i] <= 57 && napis[i] >= 48){
               licz++;
        }
        i++;
    }
    return strlen(napis) + licz;
}

/*
void flipDiag(int n, int m, int** tab){
    if(n!=m){
        printf("Macierz powinna byc kwadratowa");
        return;
    }
    int row = 0, col = 0;
    while(row < (n/2)){
        *(* (tab + row) + col) ^= *(* (tab + n - row -1) - m - col)
    }
}
*/

int transpose(unsigned int n, unsigned int m, int tab[n][m]){
    int t = 0;
    for (int i =0;i<n;i++){
        for (int j = 0; j<m/2;j++){
            t = tab[i][j];
            tab[i][j] = tab[j][i];
            tab[j][i] = t;
        }
    }
    return t;
}


int main()
{
    char napis[] = "12";
    printf("%d", strDig(napis));



    return 0;
}
