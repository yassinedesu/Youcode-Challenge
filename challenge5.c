/*Challenge 5*/

#include <stdio.h>

int main(){
    int C;
    printf("Veuilliez entrer la temperature d'eau en Celsius : ");
    scanf("%d",&C);
    if (C < 0)
    {
        printf("L'eau est en etat Solide");
    }
    else if (C>0 && C<100){
        printf("L'eau est en etat Liquide");
    }
    else 
    printf("L'eau est en etat Gaz");
    return 0;
    
}