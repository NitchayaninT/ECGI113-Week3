#include <stdio.h>
#include <stdlib.h>

int main()
{
    int stone1,lb1,oz1,stone2,lb2,oz2;
    printf("Input 1st weight:");
    scanf("%d,%d,%d",&stone1,&lb1,&oz1);
    printf("Input 2nd weight:");
    scanf("%d,%d,%d",&stone2,&lb2,&oz2);
    printf("%15s%5s%5s","st","lb","oz");
    printf("\n===============================\n");
    printf("%10s%5d%5d%5d","Weight1",stone1,lb1,oz1);
    printf("\n%10s%5d%5d%5d","Weight2",stone2,lb2,oz2);
    printf("\n===============================\n");
    int totaloz;
    float avgst,avglb,avgoz;
    totaloz=oz1+(lb1*16)+(stone1*224)+oz2+(lb2*16)+(stone2*224);
    printf("%10s%5d%5d%5d","Sum",totaloz/224,(totaloz%224)/16,(totaloz%224)%16);
    avgst=(totaloz/224)*(0.5);
    avglb=((totaloz%224)/16)*(0.5);
    avgoz=((totaloz%224)%16)*(0.5);
    printf("\n%10s%5.1f%5.1f%5.1f","Average",avgst,avglb,avgoz);
    return 0;
}
