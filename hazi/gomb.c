#include <stdio.h>
#include <math.h>

int main()
{
    int r;
    printf("Kerem adja meg a gomb sugarat (cm): ");
    scanf("%d",&r);
    printf("A gomb felszine: %.2lf cm2\n",4*r*r*M_PI);
    printf("A gomb terfogata: %.2lf cm3\n",(4*r*r*r*M_PI)/3);
    return 0;
}
