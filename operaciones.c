#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    float num1, num2, resultado; /*Definimos las variables que se utilizan*/
    char operador;

    printf("Ingrese dos numeros"); /*Le enviamos un mensaje al usuario, que ingrese los valores*/

    printf("Ingrese su primer numero: \n");
    scanf("%f", &num1);

    printf("Ingrese su segundo numero: \n");
    scanf("%f", &num2); /*Leemos la variable y la guardamos en Scanf*/
    while (getchar() != '\n')
        ;
    printf("Que operacion quieres realizar (+,-,*,/)"); /*Le decimos al usuario que seleccione que tipo de operacion desea hacer*/
    scanf("%c", &operador);                             /*Leemos los caracteres */

    /*Con una serie de Estructuras condicionales IF para saber ejecutar la operacion que corresponda*/

    if (operador == '+')
    {
        resultado = num1 + num2;
        printf("El resultado de %.2f + %.2f es %.2f\n", num1, num2, resultado);
    }
    else if (operador == '-')
    {
        resultado = num1 - num2;
        printf("El resultado de %.2f - %.2f es %.2f\n", num1, num2, resultado);
    }

    else if (operador == '*')
    {
        resultado = num1 * num2;
        printf("El resultado de %.2f * %.2f es %.2f\n", num1, num2, resultado);
    }

    else if (operador == '/')
    {
        resultado = num1 / num2;
        printf("El resultado de %.2f + %.2f es %.2f\n", num1, num2, resultado);
    }
    else if (operador == '/')
    {
        if (num2 != 0)
        {
            printf("Error: División por cero no permitida.\n");
        }
    }

    else
    {
        printf("OPERADOR NO VALIDO!");
    }

    getchar();
    return 0;
}