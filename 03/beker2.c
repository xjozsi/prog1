#include <stdio.h>

int get_int()
{
    int n;
    scanf("%d",&n);
    return n;
}
int main()
{
   
   printf("Adj meg egy egesz szamot: ");
   int n=get_int();
   
   printf("n: %d\n",n);

    return 0;
}