/*Challenge 8*/

#include <stdio.h>
#include <math.h>

int main(){
    float a,b,c,moyenne_Geo;
    printf("Veuillez entrer le 1er nombre : ");
    scanf("%f",&a);
    printf("Veuillez entrer le 2eme nombre : ");
    scanf("%f",&b);
    printf("Veuillez entrer le 3eme nombre : ");
    scanf("%f",&c);
    moyenne_Geo = pow((a*b*c),0.33);
    printf("Moyenne geometrique = %.2f",moyenne_Geo);
    
    return 0;
}