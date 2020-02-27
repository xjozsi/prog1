#include <stdio.h>

int main()
{
     int n;
    printf("n: ");
    scanf("%d",&n);
    while (n<=0)
    {
        printf("n: ");
        scanf("%d",&n);
    }
    int meret=n+1;
    char tomb[n];

    for (int i = 0; i <n-1 ; i++)
    {
        for (int j = 0;j < n; j++)
        {
            tomb[j]='#';
        }
        
    }
    for (int i = 0; i <n ; i++)
    {
        for (int j = 0;j < n; j++)
        {

            //printf("#");
            if (j<n/2-i || j>n/2+i)
            {
                printf(" ");
            }
            else
            {
                printf("#");
            }
            
        }
        printf("\n");
    }
    
    


    return 0;
}