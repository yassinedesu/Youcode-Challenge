/*Challenge 10*/

#include <stdio.h>
#include <math.h>

int main(){
    float r,volume;
    const float Pi = 3.14;
    printf("Entrez le rayon de la sphere : ");
    scanf("%f",&r);
    // (4/3) = 1.33
    volume = (1.33) * Pi * pow(r,3);
    printf("Volume de sphere = %.2f",volume);
    return 0;
}