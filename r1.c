#include<stdio.h>
int main(void)
{
int pulso, compas, sc;
printf("Cuantos pulsos son?");
scanf("%d", &pulso);
sc= pulso / 4;
compas= sc;
pulso=(pulso%4); 
printf("%d compases y %d pulsos", compas,pulso);

}
