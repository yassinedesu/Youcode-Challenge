// Challenge 12

// Challenge 12

#include <stdio.h>

int main (){
    int n, unite, dizaine, centaine, millier;
    printf("Veuillez entrer un nombre entier de 4 chiffre a inverse : ");
    scanf("%d",&n);
    millier = n / 1000;
    centaine = (n / 100) % 10 ;
    dizaine = (n / 10) % 10 ;
    unite = (n % 10) ;
    printf("%d%d%d%d",unite,dizaine,centaine,millier);
    return 0;
}
