#include <stdio.h>

int my_abs(int szam)
{
    if(szam<0)
    {
        return -szam;
    }
    // else:
    return szam;
}

int main()
{
    int n=5;
    
    printf("%d abszoluterteke: %d\n",n,my_abs(n));

    return 0;
}