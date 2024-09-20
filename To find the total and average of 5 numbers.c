#include <stdio.h>

int main()
{
    float a,b,c,d,e,total,avg,n=5;
    printf("ENTER FIVE NUMBERS:");
    scanf("%f%f%f%f%f",&a,&b,&c,&d,&e);
    total=a+b+c+d+e;
    avg=total/n;
    printf("Total=%.2f\n",total);
    printf("Average=%.2f\n",avg);
    return 0;
}
