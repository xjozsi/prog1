#include <stdio.h>
#include <stdlib.h>

int main()
{
    int szam2; //aktualis szam
    int db=0; // megadott szamok db szama
    //double sum=0;
    double psum=0;
    int pdb=0;
    int nsum=0;
    double atlag;
    double patlag;
    int abssum=0;

    do
    {
        printf("Egesz szam (vege: 0): ");
        scanf("%d",&szam2);
        if(szam2!=0)
        {
            db++;
            sum+=szam2;
            if (szam2>0) pdb++;psum+=szam2;
            if(szam2<0) nsum++;szam2=szam2*(-1);szam2=abs(szam2);
            abssum+=szam2;
            

        }
        
    } while (szam2!=0);
    //printf("Elemek szama: %d\n",db);
   //printf("Elemek osszege: %.1lf\n",sum);
    printf("Pozitiv elemek szama: %d\n",pdb);
    printf("Negativ elemek szama: %d\n",nsum);
   /* if(db==0)
    {
        printf("Hiba! Legalabb egy db szamot meg kell adnia az atlag szamitashoz!\n");
    }else
    {
        atlag=sum/db;
        printf("A szamok atlaga: %.2lf\n",atlag);
        patlag=psum/pdb;
        printf("A pozitiv szamok atlaga: %.2lf\n",patlag);

    }
    printf("A szamok abszolutertekenek osszege: %d\n",abssum);*/


    return 0;
}