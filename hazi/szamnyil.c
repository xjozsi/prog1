#include <stdio.h>

int main()
{
    int n;
    printf("n: ");
    scanf("%d",&n);
    for (int i = 1; i <= n; i++)
    {
        if(i==n)
        {
            printf("%d",i);
        }else
        {
            printf("%d -> ",i);        
        }
        
    }
    printf("\n");
    
    return 0;
}