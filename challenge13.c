// Challenge 13 

#include <stdio.h>

int main(){
    int  n,bin,hex;
    printf("Entrez un nombre entier a convertir : ");
    scanf("%d", &n);
    printf("Hexadecimal : %X\n",n); /*I used %X to show the hexadecimal of the number n*/
    
    printf("Binaire : ");
    while (n > 0){
        bin = n % 2;
        n = n / 2;
        printf("%d",bin);
       }
    return 0;
}