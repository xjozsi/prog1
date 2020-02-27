#include <stdio.h>

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
int kerulet(int a)
{
    return 4*a;
}
int terulet(int b)
{
    return b*b;
}
int main()
{
   
   printf("Add meg a negyzet oldal hossza [egesz] (cm) : ");
   int oldal=get_poz_int();
   int k=kerulet(oldal);
   int t=terulet(oldal);
   printf("Kerulet: %d cm\n",k);
   printf("Terulet: %d cm2\n",t);

    return 0;
}