#include <stdio.h>
#include <stdlib.h>

int main()
{
    int taille,i;
    int Tableau[taille];
    printf("veuillez entrer  la taille du tableau : ");
    scanf("%d",&taille);
    for (i=0;i<taille;i++){
        printf("entrez lelement %d : ",i+1);
        scanf("%d",&Tableau[i]);
    }
    printf("\n Contenu du tableau \n");
    for (int i = 0; i < taille; i++) {
        printf("Element %d = %d\n", i + 1, Tableau[i]);
    }


    return 0;
}
