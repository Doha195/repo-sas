#include <stdio.h>
#include <stdlib.h>
#include <math.h>

void Affichage(char nom[])
{
    printf("bonjour mm %s", nom);
}
int somme(int a, int b)
{
    int s;
    s= a+b;
return s;
}
int main()
{
   char nom[10];
   int s;

   printf("entrer votre nom:\n");
   scanf("%s", nom);

   Affichage(nom);
   s=somme(2,3);
   printf("la somme est %d", s);

    return 0;
}
