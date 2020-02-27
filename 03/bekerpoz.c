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
int main()
{
   
   printf("Adj meg egy pozitiv egesz szamot: ");
   int n=get_poz_int();
   
   printf("n: %d\n",n);

    return 0;
}