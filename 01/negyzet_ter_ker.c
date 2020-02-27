#include <stdio.h>


//negyzet terulete,kerulete


int main()
{
    int oldal;
    printf("Kerem adja meg a negyzet oldal hosszat (cm): ");
    scanf("%d",&oldal);
    int terulet=oldal*oldal;
    int kerulet=4*oldal;
    printf("A negyzet terulete: %d cm\nA négyzet kerulete: %d cm2\n",terulet,kerulet);
    printf("-------------------\n");
    
    
    return 0;
}
