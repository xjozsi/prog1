#include <stdio.h>
#include <math.h>

int get_poz_int()
{
    int n;
    
    while (1)
    {
        scanf("%d",&n);

        if (n>0)
        {
            break;
        }
        else
        {
            printf("Kerek egy uj szamot!\n");
        }
        
        
    }
    return n;
   
}
double kerulet(int a)
{
    return 2*a*M_PI;
}
double terulet(int b)
{
    return b*b*M_PI;
}
int main()
{
   
   printf("Add meg a kor sugarat [egesz] (cm) : ");
   int r=get_poz_int();
   double k=kerulet(r);
   double t=terulet(r);
   printf("Kerulet: %.2lf cm\n",k);
   printf("Terulet: %.2lf cm2\n",t);

    return 0;
}