#include <stdio.h>

int main()
{
    int n;
    printf("n: ");
    scanf("%d",&n);
    char tomb[n];

    for (int i = 0; i <n ; i++)
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

            if(j<=i)printf("%c",tomb[j]);
        }
        printf("\n");
    }
    
    printf("-----FORDITOTT-----\n");
    
     for (int i = 0; i <n ; i++)
    {
        for (int j = 0;j < n; j++)
        {

            if(j>=n-i-1)
            {
                printf("%c",tomb[j]);
            }else
            {
                printf(" ");
            }
            
        }
        
        printf("\n");
    }
    printf("-------------------\n");

    int meret=2*n+1;
    int tombkozep=meret/2;
    char tomb2[meret];

    for (int i = 0; i <n ; i++)
    {
        for (int j = 0;j < meret; j++)
        {

            tomb2[j]='#';
        }
        
    }

    for (int i = 0; i <n; i++)
    {
        for (int j = 0;j < meret; j++)
        {
            if (j<tombkozep-i-1 || j==tombkozep || j>tombkozep+i+1   )
            {
                
                printf(" ");
            }else
            {
                printf("%c",tomb2[j]);
            }
            
        }
        printf("\n");
        
    }
    
    return 0;
}