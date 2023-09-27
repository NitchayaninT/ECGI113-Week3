#include <stdio.h>
#include <stdlib.h>

int main()
{
    int w,h,a;
    printf("Insert width : ");
    //insert width of a triangle
    scanf("%d",&w);
    printf("Insert height : ");
    //insert height of a triangle
    scanf("%d",&h);
    //calculate the area
    a=w*h;
    printf("The area of a rectangle is %d",a);
    //print area
    return 0;
}
