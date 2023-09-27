#include <stdio.h>
#include <stdlib.h>
//add 2 times together (in h and m)
int main()
{
    int h1,m1,h2,m2,s1,s2,totalsec;
    printf("Insert time 1 (h:m:s) : ");
    scanf("%d:%d:%d",&h1,&m1,&s1);
    printf("Insert time 2 (h:m:s) : ");
    scanf("%d:%d:%d",&h2,&m2,&s2);
    totalsec=(h1*3600)+(h2*3600)+(m1*60)+(m2*60)+s1+s2;
    printf("The sum of the 2 times is %d:%02d:%02d\n",totalsec/3600,(totalsec%3600)/60,(totalsec%3600)%60);
    return 0;
}
