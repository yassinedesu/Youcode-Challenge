// Challenge 11
#include <stdio.h>
#include <math.h>

int main(){
    float longueur, largeur, surface;
    printf("Veuillez entrer la longueur de rectangle : ");
    scanf("%f",&longueur);
    printf("Veuillez entrer la largeur de rectangle : ");
    scanf("%f",&largeur);
    surface = longueur * largeur;
    printf("Surface = %.2f",surface);
    return 0;
}