#include <stdio.h>
#include <stdlib.h>

int main()
{

   int pwd,somme=0;





 int i = 0;
do
{
     printf("entrez le nombre positif : ");
     scanf("%d",&pwd);
     somme=somme+pwd;


}while(pwd!=-1);
printf("\n somme : %d",somme+1);
}
