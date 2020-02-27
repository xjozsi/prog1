#include <stdio.h>

int main()
{
    int szam;
    int db=0;
    printf("Egesz szam (vege: 0): ");
    scanf("%d",&szam);
    if(szam!=0)
    {
        while (szam!=0)
        {
            printf("Egesz szam (vege: 0): ");
            scanf("%d",&szam);
            db++;
        }
        
    }
    printf("Elemek szama: %d\n",db);

    return 0;
}