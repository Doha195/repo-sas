#include <stdio.h>
#include <stdlib.h>

int main()
{
    printf("Calculatrice\n");

    //declaration des variables:
    int a, b;
    char c;
    printf("entrer a:");
    scanf("%d", &a);

    printf("entrer b:");
    scanf("%d", &b);

    //affichage de la taille:
    printf("a en octal: %o\n", a);
    printf("b en octal: %o\n", b);

    printf("a en Hexadecimal: %x\n", a);
    printf("b en Hexadecimal: %x\n", b);

    //Declaration des operations:
    //char +, -, /, %, ;
    if (c == '+'){
        printf("La somme est: %d\n", a + b);
    }
    else if (c == '-'){
        printf("La soustraction est: %d\n", a - b);
    }
    else if (c == '*'){
        printf("La multiplication est: %d\n", a * b);
    }
    else if (c == '-'){
        printf("La Division est: %d et le reste %d\n", a / b, a % b);
    }
    else
        printf("Error");
    return 0;
}


