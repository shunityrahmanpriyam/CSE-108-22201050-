#include <stdio.h>

int main()
{
 int NUMBER,HOURS;
 float AMOUNT,SALARY;
 scanf("%d %d %f",&NUMBER,&HOURS,&AMOUNT);
 SALARY=HOURS*AMOUNT;
 printf("NUMBER = %d\n",NUMBER);
 printf("SALARY = U$ %.2f\n",SALARY);
return 0;
}

