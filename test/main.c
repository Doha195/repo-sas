#include <stdio.h>
#include <stdlib.h>


int main(int argc, char *argv[])
{
    int age;
    char nom[10];
    char prenom[10];
    int num_tel;
    char sex;

    printf("entrer votre nom:");
    scanf("%s", &nom);

    printf("entrer votre prenom:");
    scanf("%s", &prenom);

    printf("entrer votre num_tel;");
    scanf("%d",&num_tel);

    printf("entrer votre sex: \n");
    scanf(" %c", &sex);

    printf("entrer votre age:");
    scanf("%d", &age);


    printf("bonjour %s - %s vous etes %c votre age est %d \n votre num_tel est %d",nom,prenom,sex,age,num_tel);


}
