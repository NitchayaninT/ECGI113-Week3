#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int main()
{
    int a,b,c;
    printf("Input a,b,c:");
    scanf("%d,%d,%d",&a,&b,&c);
    float x1,x2,x;
    x1=(-b+sqrt(pow(b,2)-(4*a*c)))/(2*a);
    x2=(-b-sqrt(pow(b,2)-(4*a*c)))/(2*a);

    if(pow(b,2)-(4*a*c)<0)//case 1
    {
        printf("no solutions\n");
    }
    else if(a==0)
    {
        if(b==0)
        {
          printf("no solutions\n");
        }
        else{
        x=(-c)/b;
        printf("x=%.1f\n",x);
        }
    }
    else if(x1==x2)
    {
        printf("There is a single solution which is %d\n",x1);
    }
   else if(x1&&x2>0||x1&&x2<0)
    {
       printf("x1 = %.1f and x2 = %.1f",x1,x2);
    }
   else{
    printf("no solutions\n");
   }
    return 0;
}
