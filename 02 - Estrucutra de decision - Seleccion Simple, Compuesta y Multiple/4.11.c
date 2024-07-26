/*4.11. Escribir un programa que solicite el a�o y el n�mero de mes y nos informe cuantos d�as tiene dicho mes.
Debemos considerar que el a�o puede ser bisiesto. Un a�o es bisiesto cuando es divisible por 4 y no por
100 o el a�o es divisible por 400.
---------------------------------------------------------------------------------------------------------------
Resolucion: para empezar, vamos a realizar una condicion de a�o en la que unicamente se pueda ingresar desde el
a�o actual, hasta unos 200 a�os atras. Para el mes tambien, ya que unicamente deben ingresarse valores del 1 al
12.
La segunda condicion (y una de las mas importantes) es fijarnos si el a�o que se ingreso es bisiesto. Como dice
en el enunciado un a�o es bisiesto si:
* a�o % 4   =   0 (Divisible por 4, en otras palabras que tenga como resto 0)
* a�o % 100 !=  0 (No divisible por 100, que no tenga como resto 0)
* a�o % 400 =   0 (Divisible por 400, idem divisible por 4)
Fijarse que las primeras 2 condiciones son complementarias, por lo que se deben cumplir ambas (Y), en cambio, la
ultima condicion es 'opcional' (O).
Recordar que un a�o bisiesto tiene un dia adicional en el mes de Febrero, teniendo finalmente 29 dias en
lugar de 28.
Ademas, hay que saber que los meses impares tienen 31 dias y los pares 30 (exceptuando Febrero, sea a�o bisiesto
o no).
*/

#include <stdio.h>
#include<conio.h>

int main()
{
    int a,m;
    printf("\Ingrese anio y mes correspondientes (en ese orden): ");
    scanf("%d%d",&a,&m);
    if(a>=1800 && a<=2021)
        if(a%4==0 && a%100!=0 || a%400==0)
            if(m>=1 && m<=12)
                if(m==1 ||m==3||m==5||m==7||m==8||m==10||m==12)
                    printf("\nEl mes ingresado tiene 31 dias\n");
                else
                    if(m!=2)
                        printf("\nEl mes ingresado tiene 30 dias\n");
                    else
                        printf("\nEl mes ingresado tiene 29 dias\n");
            else
                printf("\nEl mes ingresado no corresponde a un mes valido\n");
        else
             if(m>=1 && m<=12)
                if(m==1 ||m==3||m==5||m==7||m==8||m==10||m==12)
                    printf("\nEl mes ingresado tiene 31 dias");
                else
                    if(m!=2)
                        printf("\nEl mes ingresado tiene 30 dias\n");
                    else
                        printf("\nEl mes ingresado tiene 28 dias\n");
            else
                printf("\nEl mes ingresado no corresponde a un mes valido\n");
    else
        printf("\nEl anio ingresado no corresponde a un anio valido\n");
    getch();
    return 0;
    }
