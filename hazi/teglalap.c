#include <stdio.h>

int main()
{
    int a;
    printf("Kérem adja meg a téglalap a oldalát (cm): ");
    scanf("%d",&a);
    printf("Kérem adja meg a téglalap b oldalát (cm): ");
    int b;
    scanf("%d",&b);
    int kerulet = 2*(a+b);
    int terulet=a*b;
    printf("A téglalap kerülete: %d cm\n",kerulet);
    printf("A téglalap területe: %d cm2\n",terulet);
    
    return 0;
}
