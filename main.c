#include <stdio.h>

int main()
{
    int a,b,c,min,max;
    printf("Input 3 numbers:");
    scanf("%d %d %d",&a,&b,&c);

    if(a<b&&a<c)
    min=a;
    else if(b<c)
    min=b;
    else
    min=c;

    if(a>b&&a>c)
    max=a;
    else if(b>c)
    max=b;
    else
    max=c;

    printf("The minimum value is %d\n",min);
    printf("The maximum value is %d\n",max);

    return 0;
}







