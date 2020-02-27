#include <stdio.h>
#include <math.h>

int main()
{
    double testtomeg;
    double testmagassag;
    char nem;
    double nis;
    double fis;
    
    printf("Testtomeg (kg): ");
    scanf("%lf",&testtomeg);
    printf("Testmagassag (m):");
    scanf("%lf",&testmagassag);
    printf("Neme n/f: ");
    getchar();
    nem=getchar();
    double bmi=testtomeg/(testmagassag*testmagassag);
    printf("BMI: %.2lf\n",bmi);
    nis=(18.5+24.9)/2*(testmagassag*testmagassag);
    fis=(20.5+26.5)/2*(testmagassag*testmagassag);
    //printf("%.2lf\n",nis);
    //printf("%.2lf\n",fis);
    

   switch (nem)
    {
    case 'n':
        if(bmi>=18.5 && bmi<=24.9)
        {
            printf("Normal\n");
            
        }else if (bmi>=25 && bmi<=29.9)
        {
            printf("Tulsuly\n");
            printf("Az idealis testsuly: %.2lf kg\n",nis);
        }else if (bmi>=30&&bmi<=34.9)
        {
            printf("I. foku tulsuly\n");
            printf("Az idealis testsuly: %.2lf kg\n",nis);
        }else if (bmi>=35&&bmi<=39.9)
        {
            printf("II. foku tulsuly\n");
            printf("Az idealis testsuly: %.2lf kg\n",nis);
        }else if (bmi>=40)
        {
            printf("IV. foku tulsuly\n");
            printf("Az idealis testsuly: %.2lf kg\n",nis);
        }
        
        break;
    
    case 'f':
        if(bmi>=20.5 && bmi<=26.9)
        {
            printf("Normal\n");

        }else if (bmi>=26.6 && bmi<=31.9)
        {
            printf("Tulsuly\n");
            printf("Az idealis testsuly: %.2lf kg\n",fis);
        }else if (bmi>=32&&bmi<=36.9)
        {
            printf("I. foku tulsuly\n");
            printf("Az idealis testsuly: %.2lf kg\n",fis);
        }else if (bmi>=37&&bmi<=41.9)
        {
            printf("II. foku tulsuly\n");
            printf("Az idealis testsuly: %.2lf kg\n",fis);
        }else if (bmi>=42)
        {
            printf("IV. foku tulsuly\n");
            printf("Az idealis testsuly: %.2lf kg\n",fis);
        }
        
        break;
    }
    return 0;
}
