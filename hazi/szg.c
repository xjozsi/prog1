#include <stdio.h>
//#include <math.h>

int main()
{
    char muvelet;
    int a;
    int b;

   
   
   printf("1. szam: ");
   scanf("%d",&a);
   printf("Muvelet: ");
   
   getchar();
   muvelet=getchar();
   
   printf("2. szam: ");
   scanf("%d",&b);

   /*switch (muvelet)
   {
   case '+':
        printf("Eredmeny: %d\n",a+b);
       break;
   case '-':
        printf("Eredmeny: %d\n",a-b);
        break;
    case '*':
        printf("Eredmeny: %d\n",a*b);
        break;
    case '/':
         if (b==0)
       {
           printf("0-val nem osztunk!\n");
       }else
       {
           double oa=a;
           double ob=b;
           printf("Eredmeny: %.2lf\n",oa/ob);
       }
        break; 
   default:
       break;
   }*/
   

   if(muvelet=='+')
   {
       printf("Eredmeny: %d\n",a+b);

   }else if(muvelet=='-')
   {
       printf("Eredmeny: %d\n",a-b);
   }else if (muvelet=='*')
   {
       printf("Eredmeny: %d\n",a*b);
   }else if (muvelet=='/')
   {
       if (b==0)
       {
           printf("0-val nem osztunk!\n");
       }else
       {
           double oa=a;
           double ob=b;
           printf("Eredmeny: %.2lf\n",oa/ob);
       }
       
       
   }
   
   
   
    return 0;
}
