/*Challenge 6*/

#include <stdio.h>

int main(){
    float a, b;
    printf("Veuillez entrer la valeur de a : ");
    scanf("%f",&a);
    printf("Veuillez entrer la valeur de b : ");
    scanf("%f",&b);
    printf("a + b = %.2f\n",a + b);
    printf("a - b = %.2f\n",a - b);
    printf("a * b = %.2f\n",a * b);
    if (b!=0){
        printf("a / b = %.2f",a / b);
    }
    else{
        printf("La division sur 0 est impossible !!");
    }
    return 0;


}