#include <stdio.h>

int duplaz(int a)
{
    return a*2;
}

int main()
{
    int n=5;
    int result=duplaz(n);

    printf("%d ketszerese: %d\n",n,result);

    return 0;
}