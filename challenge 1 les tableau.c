#include <stdio.h>
#include <stdlib.h>

int main()
{
    int tableau[5] = {1, 2, 3, 4, 5};
    int taille = 5;
    int i;
    for ( i = 0; i < taille; i++) {
        printf("Tableau [%d] = %d \n",i+1, tableau[i]);

    }

    return 0;
}
