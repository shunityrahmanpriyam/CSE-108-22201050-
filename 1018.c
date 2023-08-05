#include<stdio.h>
int main ()
{
    int amount, n ,a;
    scanf("%d", &amount);
    printf("%d\n", amount);

    n = amount;
    a = n/100;
    printf("%d nota(s) de R$ 100,00\n", a);

    n = n-(a*100);
    a = n/50;
    printf("%d nota(s) de R$ 50,00\n", a);

    n = n-(a*50);
    a = n/20;
    printf("%d nota(s) de R$ 20,00\n", a);

    n = n-(a*20);
    a = n/10;
    printf("%d nota(s) de R$ 10,00\n", a);

    n = n-(a*10);
    a = n/5;
    printf("%d nota(s) de R$ 5,00\n", a);

    n = n-(a*5);
    a = n/2;
    printf("%d nota(s) de R$ 2,00\n", a);

    n = n-(a*2);
    a = n/1;
    printf("%d nota(s) de R$ 1,00\n", a);
}
