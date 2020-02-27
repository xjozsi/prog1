#include <stdio.h>


int main()
{
    int n;
    printf("Kerem adjon meg egy pozitiv,paratlan, egesz szamot: ");
    scanf("%d",&n);
    if(n>0 && n%2==1){

        for (int i = 1; i <= n; i+=2)
        {
            printf("*");
        }
        /*for (int j = n; j > 0; j-=2)
        {
            printf("*\n");
        }*/
            
        
    }
    printf("Hibas szam!");

    return 0;    
}
