#include <stdio.h>
void Fomenu();

void Negyzet()
{
    int mp;
    int a;
    printf("1 - Kerulet\n2 - Terulet\n 0 - Vissza\n--> ");
    scanf("%d",&mp);
    switch (mp)
    {
        case  1:
            
            printf("a (cm): ");
            scanf("%d",&a);
            printf("Kerulet: %d cm\n",4*a);
            break;
        case 2:
            
            printf("a (cm): ");
            scanf("%d",&a);
            printf("Terulet: %d cm2\n",a*a);
            break;
    
    case 0:
        Fomenu();
        break;
    }

}

void Fomenu()
{
    int mp;
    
    
       
       printf("1 - Negyzet\n2 - Teglalap\n0 - Kilep\n--> ");
       scanf("%d",&mp);
       switch (mp)
       {
       case 1:
           
           Negyzet();
           break;
        case 2:
            break;
       
       case 0:
           break;
       }
    
    
}



int main()
{
    
   
    Fomenu();
    


    return 0;
}