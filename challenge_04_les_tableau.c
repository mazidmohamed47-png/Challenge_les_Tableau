#include <stdio.h>
#include <stdlib.h>

int main()
{
    int taille ,i ;
    int Tableau[taille];
    printf("====programme qui trouve l_element le plus grand dans un tableau====\n");
    printf("veillez entrer la taille de tableau : ");
    scanf("%d",&taille);
    for (i=0;i<taille;i++){
        printf("Veuillez entrer %d element : ",i+1);
        scanf("%d",&Tableau[i]);
    }
    int max=Tableau[0];
    for (i=1;i<taille;i++){
        if (Tableau[i]>max){
            max=Tableau[i];
        }
    }
    printf("Lelement le plus grand dans le tableau est : %d",max);


    return 0;
}
