#include <stdio.h>

int main(){
    int age;
    char nom[10], prenom[10], sexe[10], email[30];
    printf("Veuillez entrer votre nom : ");
    gets(nom);
    printf("Veuillez entrer votre prenom : ");
    gets(prenom);
    printf("Veuillez entrer votre age : ");
    scanf("%d",&age);
    printf("Veuillez entrer votre sexe : ");
    getchar();
    gets(sexe);
    printf("Veuillez entrer votre adresse email : ");
    gets(email);
    printf("\nVotre informations personnelles sont :\nNom: %s\nPrenom: %s\nAge: %d\nSexe: %s\nEmail: %s ",nom,prenom,age,sexe,email);
    return 0;
}