#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a, b,c, somme, soustraction, multi, div, reste;
    c=5;

    //demander a l'utilisateur les datas
    printf("donner a:");
    scanf("%d", &a);
    printf("donner b:");
    scanf("%d", &b);

    //addition
    somme= a+b+c;
    printf("somme= %d\n", somme);

    //soustraction
    soustraction= a-b;
    printf("soustraction= %d\n", soustraction);

    //multiplication
    multi= a*b;
    printf("multi= %d\n", multi);

    //division reste
    if (b==0){
        printf("error\n");
        printf("error");
    }
    else{
        div= a/b;
        printf("div a/b=%d", div);
        reste= a%b;
        printf("reste= %d\n", reste);
    }




    return 0;
}
