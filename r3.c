#include<stdio.h>
int main(void)
{
    float t, m, g, ec, h;
    printf("Cuanto tiempo?");
    scanf("%f",& t);
    printf("Masa?");
    scanf("%f",& m);
    g=9.81;
    h=(g*t*t)/2;
    ec=(m*((g*t)*(g*t)))/2;
printf("Cayo a %.1f metros y con una energia cinetica de %.1f",h,ec);
    }