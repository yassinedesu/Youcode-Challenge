/*
Challenge 2 : Conversion de la température
Écrivez un programme qui demande la température en Celsius et la transforme en Kelvin.
Formule :
K = C + 273.15*/
#include <stdio.h>
#include <stdlib.h>
int main(){
    int C;
    const float k = C + 273.15;
    printf("Veuillez entrer la temperature en Celsius : ");
    scanf("%d",&C);
    printf("%d Celsius = %.2f kelvin",C,k);
}