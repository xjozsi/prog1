#include <stdio.h>
#include <math.h>

int main()
{
   int r;
   printf("Kérem adja meg a kör sugarát (cm): ");
   scanf("%d",&r);
   printf("A kör kerülete: %.2lf cm\n",2*r*M_PI);
    printf("A kör területe: %.2lf cm2\n",r*r*M_PI);

    printf("---------------------\n")
    // terfogat 4*R3*pi/3 felszin 4*R2*pi

    int rg;
    printf("Kerem adja meg a gomb sugarat (cm): ");
    scanf("%d",&rg);
    printf("A gomb felszine: %.2lf cm2\n",4*rg*rg*M_PI);
    printf("A gomb terfogata: %.2lf cm3\n",(4*rg*rg*rg*M_PI)/3);
    return 0;
}
