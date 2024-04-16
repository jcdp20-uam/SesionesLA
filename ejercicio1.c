#include<stdio.h>

int main(int argc, char const *argv[])
{
    int num1;
    float num2;
    double num3;
    char letra;
    char frase[30];
    system("color a5");

printf("Bienvenido a mi ejercicio 1 \n");
printf("Leer un numero: ");
scanf("%i", &num1);
printf("%i Se guardo correctamente...", num1);
system("pause");
sysem("cls|| clear");
printf("Leer un flotante: ");
scanf("%f", &num2);
printf("Guarde un flotante %.2f", num2);
return 0;
}