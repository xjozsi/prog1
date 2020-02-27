#include <stdio.h>
#include <stdlib.h>

int main()
{
    int szam; 
    int pdb=0;
    int ndb=0;
    
    do
    {
        printf("Egesz szam (vege: 0): ");
        scanf("%d",&szam);
        if(szam!=0)
        {
            
            
            if (szam>0) 
            {
                pdb++; 
            }
            if(szam<0) 
            {
                ndb++;
            }
         
        }
        
    } while (szam!=0);
    
    printf("Pozitiv elemek szama: %d\n",pdb);
    printf("Negativ elemek szama: %d\n",ndb);
   
    return 0;
}