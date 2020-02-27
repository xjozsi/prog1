#include <stdio.h>

// Aritmetikai műveletek: + , - , * , / , %

int main()
{
    int a=20;
    int b = 3;
    int eredmeny;

    //+
    eredmeny=a+b;
    printf("%d + %d = %d\n",a,b,eredmeny);

    //-
    eredmeny=a-b;
    printf("%d - %d = %d\n",a,b,eredmeny);

    //*
    printf("%d * %d = %d\n",a,b,a*b);

    // osztas
    printf("20.0 / 3.0 = %lf\n",20.0/3.0);

    // % - modulo
    printf("%d %% %d = %d\n",a,b,a%b);
   
    return 0;
}
