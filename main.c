#include <stdio.h>
#include <stdlib.h>
#include<math.h>
int main()
{
    int a,b,c;
    printf("Insert a,b,c : ");
    scanf("%d,%d,%d",&a,&b,&c);

    switch(a)
    {
    case 0:
        printf("");
        break;
    case 1:
        printf("x^2");
        break;
    case -1:
        printf("-x^2");
        break;
    default:
        printf("%dx^2",a);
        break;
    }
    if(b==0)
    {
     printf("");
    }
    else if(b==1)
    {
      printf("x");
    }
    else if(b==-1)
    {
      printf("-x");
    }
    else if(b<-1)
    {
      printf("%dx",b);
    }
    else if(a==0&&b>1)
    {
        printf("%dx",b);
    }
    else{
        printf("+%dx",b);
    }



    if(c==0)
    {
        printf("");
    }
    else if(c<0)
    {
        printf("%d",c);
    }
    else if(b==0&&c>1)
    {   if(a==0)
       {
        printf("%d",c);
       }
        else{
            printf("+%d",c);
        }
    }
    else{
        printf("+%d",c);
    }
    printf("=0\n");
    float x1=(-b+sqrt(pow(b,2)-(4*a*c)))/(2*a);
    float x2=(-b-sqrt(pow(b,2)-(4*a*c)))/(2*a);

    if(a==0)
    {
        if(b==0)
        {
           if(c!=0)
           {
              printf("No solution\n");
           }
           else{
            printf("x=%d",c);
           }
        }
        else
        {
           printf("x=-c/b=-%d/%d",c,b);
        }
    }
    else if(c==0)
    {
        printf("x=%d",(-b)/a);

    }
    else if(pow(b,2)-(4*a*c)<0)
    {
        printf("NO solution\n");
    }

    else if(x1==x2)
    {
        printf("There is a single solution which is %d\n",x1);
    }
     else if(x1&&x2>=0||x1&&x2<0)
    {
       printf("x1 = %.1f and x2 = %.1f",x1,x2);
    }
    else{
        printf("No solutions\n");
    }

    return 0;
}
