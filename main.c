#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int main()
{
    int a,b,c;
    printf("Input a,b,c:");
    scanf("%d,%d,%d",&a,&b,&c);
    float x1,x2;
    x1=(-b+sqrt(pow(b,2)-(4*a*c)))/(2*a);
    x2=(-b-sqrt(pow(b,2)-(4*a*c)))/(2*a);
    if(x1&&x2>=0||x1&&x2<0)
    {
       printf("x1 = %.1f and x2 = %.1f",x1,x2);
    }
   else{
    printf("NULL\n");
   }
    return 0;
}
