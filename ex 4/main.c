#include <stdio.h>
#define pi 3,14
int main()
{
    float r,d,p,s;
    printf("entrer le rayon r:");
    scanf("%f", &r);
    d=2*r;
    p=2*pi*r;
    s=pi*pow(r,2);
    printf("diametre %.2f\n perimetre %.2f\n surface %.2f\n", d,p,s);
    return 0;
}
