#include<stdio.h>
int main()
{
    double radius, VOLUME, pi=3.14159;
    scanf("%lf",&radius);
    VOLUME=(4.0/3.0)*pi*radius*radius*radius;
    printf("VOLUME = %.3lf\n",VOLUME);
    return 0;
}
