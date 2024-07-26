/*5.1.19 Ingresar un n�mero entero mayor a 0. Debe dibujar un tri�ngulo rect�ngulo con * con tantas filas como
el n�mero indicado. En cada fila se va incrementando la cantidad de asteriscos. Por ejemplo, si se ingresa el
n�mero 6 debe mostrar en pantalla:
    *
    **
    ***
    ****
    *****
    ******
*/

#include<stdio.h>

int main()
{
    int numero,i,j;
    printf("\nIngrese un numero entero mayor a 0: ");
    scanf("%d",&numero);                                // CANTIDAD DE FILAS
    if(numero>0)
        for(i=1; i<=numero; i++)                        // POSICION DE LAS FILAS
        {
            for(j=0; j<=i-1; j++)                       // CANTIDAD DE ASTERISCOS
                printf("*");
            printf("\n");
        }
    else
        printf("\nNumero incorrecto\n");
    return 0;
}
