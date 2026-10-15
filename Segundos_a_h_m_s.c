#include<stdio.h>

int main(void)

{
int a,h,m,s;
printf("Segundos:");
scanf("%d", &a);
h= a/ 3600;
m= (a-(h*3600))/60;
s= a-(h*3600)-(m*60);

printf("%d segundos equivale a %d horas, %d minutos y %d segundos", a,h,m,s);
}
