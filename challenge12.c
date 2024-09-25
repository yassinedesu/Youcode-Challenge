// Challenge 12

<<<<<<< HEAD
=======
// Challenge 12

>>>>>>> 06badf6754e6adb1f59e7cfb77f52c1778fe2205
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
<<<<<<< HEAD
}
=======
}
>>>>>>> 06badf6754e6adb1f59e7cfb77f52c1778fe2205
