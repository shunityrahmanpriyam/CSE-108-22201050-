#include<stdio.h>
int main ()
{
    char NAME;
    double SALARY,VALUE,TOTAL;
    scanf("%s %lf %lf", &NAME, &SALARY ,&VALUE);
    TOTAL = SALARY + VALUE * 0.15;
    printf("TOTAL = R$ %.2lf\n",TOTAL);
return 0;
}

