#include <stdio.h>

int main()
{
   
    int n;
    printf("n: ");
    scanf("%d",&n);
    
    for (int i = 1; i <=n ; i++)
    {
        int spaces =n-i;
        int hashes=i;
        for (int j = 0;j <spaces ; j++)
        {
           printf(" "); 
        }
        for (int k = 0; k <i ; k++)
        {
            printf("#");
        }
        
        printf("\n");
    }
    

    return 0;
}