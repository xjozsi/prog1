#include <stdio.h>

int main()
{
    int a;
    printf("Kérem adjon meg egy számot: ");
    scanf("%d",&a);
    
    if (a>0)
    {
        printf("Pozitiv");
    }else if(a<0)
    {
        printf("Negativ");
    }else
    {
        printf("0");
    }
  
    return 0;
}
