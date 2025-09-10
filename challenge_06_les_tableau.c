#include <stdio.h>
#include <stdlib.h>

int main()
{
    int tableau[6]={10,9,11,14,13,15};
    int i,Facteur,multiple ;
    Facteur=1;
    for (i=0;i<=5;i++){
        printf("veuillez entrer %d facteur de %d : ",i+1,tableau[i]);
        scanf("%d",&Facteur);
        multiple=Facteur*tableau[i];
        printf("la multiple est :  Tableau[%d] x %d = %d x %d = %d \n",i+1,Facteur,tableau[i],Facteur,multiple);
    }




    return 0;
}
