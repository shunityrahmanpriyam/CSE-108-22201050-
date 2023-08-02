#include<stdio.h>
int main ()
{
    int CODE, UNIT;
    float PRU, PAY;
    scanf("%d %d %f", &CODE, &UNIT, &PRU);
    PAY = UNIT * PRU;
    scanf("%d %d %f", &CODE, &UNIT, &PRU);
    PAY += UNIT * PRU;
    printf("VALOR A PAGAR: R$ %.2f\n", PAY);
    return 0;
}
