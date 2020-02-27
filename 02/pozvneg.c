#include <stdio.h>

int main()
{
    int a;
    printf("Kérem adjon meg egy számot: ");
    scanf("%d",&a);
    
    if (a>0)
    {
        printf("Pozitiv\n");
    }else if(a<0)
    {
        printf("Negativ\n");
    }else
    {
        printf("0\n");
    }
  
    return 0;
}
