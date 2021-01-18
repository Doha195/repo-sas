#include <stdio.h>
#include <stdlib.h>

int main()
{
    int age;
    char genre;
    printf("entrez votre age: ");
    scanf("%d", &age );
    printf("entrez votre genre: ");
    scanf(" %c", &genre );
    //printf("%p", age);
    if (age <= 12 && genre == 'h')
        printf("enfant ms");
    else if (age <=18 && genre=='h')
        printf("mineur ms");
    else
        printf("majeur ms");

    return 0;
}
