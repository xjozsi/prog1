#include <stdio.h>

void Line(int n)
{
    for (int i = 0; i < n; i++)
    {
        printf("-");
    }
    printf("\n");
}

int main()
{
    int x, y;
    printf("x: ");
    scanf("%d",&x);
    printf("y: ");
    scanf("%d",&y);

    if(x<y)
    {
        printf("-------------------\n");
        printf("| x kisebb mint y |\n");
        printf("-------------------\n");
    }else if(x>y)
    {       
        printf("x nagyobb mint y\n");
    }else
    {
        printf("x egyenlo y-nal\n");
    }   
    int n;
    printf("Kerem adjon meg egy szamot: ");
    scanf("%d",&n);
    Line(n);
    


    return 0;
}