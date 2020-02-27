#include <stdio.h>

int main()
{
    int szam;
    printf("Adjon meg egy egesz szamot: ");
    scanf("%d",&szam);

    if(szam%2==0)
    {
        printf("A szam paros...\n");
    }
    else
    {
        printf(" A szam paratlan...\n");
    }
            

    return 0;
}
