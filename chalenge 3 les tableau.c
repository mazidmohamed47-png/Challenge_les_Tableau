#include <stdio.h>
#include <stdlib.h>

int main()
{
    int taille,i,somme =0;
    int Tableau[taille];
    printf("veuillez entrer  la taille du tableau : ");
    scanf("%d",&taille);
    for (i=0;i<taille;i++){
        printf("entrez lelement %d : ",i+1);
        scanf("%d",&Tableau[i]);
    }
    for (int i = 0; i <taille; i++){
        somme += Tableau[i];
    }
        printf("la somme des element est : %d ", somme);

    return 0;
}
