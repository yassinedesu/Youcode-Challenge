/* Challenge 3*/
#include <stdio.h>

int main(){
    float Km,Yards;
    
    printf("Veuillez entrer le nombre de Km a convertir : ");
    scanf("%f",&Km);
    Yards = (Km * 1093.61);
    printf(" %f Km = %.2f Yards",Km,Yards);
    return 0;
}
