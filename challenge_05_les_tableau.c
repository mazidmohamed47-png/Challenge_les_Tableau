#include <stdio.h>
#include <stdlib.h>

int main()
{
    int taille ,i ;
    int Tableau[taille];
    printf("====programme qui trouve l_element le plus petit dans un tableau====\n");
    printf("veillez entrer la taille de tableau : ");
    scanf("%d",&taille);
    for (i=0;i<taille;i++){
        printf("Veuillez entrer %d element : ",i+1);
        scanf("%d",&Tableau[i]);
    }
    int min=Tableau[0];
    for (i=1;i<taille;i++){
        if (Tableau[i]<min){
            min=Tableau[i];
        }
    }
    printf("Lelement le plus petit dans le tableau est : %d",min);
    return 0;
}
