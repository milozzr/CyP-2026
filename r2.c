#include<stdio.h>
int main(void)
{
float masa, masa_molar, litros, molaridad;
printf("Masa?");
scanf("%f",& masa);
printf("Masa molar?");
scanf("%f",& masa_molar);
printf("Litros?");
scanf("%f",& litros);
molaridad=(masa/(masa_molar*litros));
printf("La molaridad es de %.2f", molaridad);

}
