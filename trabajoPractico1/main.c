#include <stdio.h>
#include "libreriatp.h"
#include <stdlib.h>
#include <windows.h>

int main()
{
    SetConsoleTitle("CALCULADORA, TP.N1");

    // DECLARACIONES

    float numero_uno, numero_dos;
    int calculo;
    int color;

    //Bienvenida y nombres de los integrantes

    bienvenidos();
    integrantes();
    system("pause");
    system("cls");

    // Se pide los operandos para que ya inicie con ellos declarados.

    numero_uno = pedirNum1();
    numero_dos = pedirNum2();

    //INICIO DEL MENU / BUCLE
    do{

    //SE MUESTRAN LOS OPERANDOS y SELECCION DE OPERACIONES.

    calculo = mostrarMenu(numero_uno, numero_dos);

    //SWITCH QUE CONTIENE TODAS LAS OPERACIONES A REALIZAR.
    switch(calculo){

        case 1 :

            numero_uno = modificarPri(numero_uno);
            break;

        case 2 :

            numero_dos = modificarSeg(numero_dos);
            break;

        case 3 :

            suma(numero_uno , numero_dos);
            break;

        case 4 :

            resta(numero_uno , numero_dos);
            break;

        case 5 :

            divi(numero_uno , numero_dos);
            break;

        case 6 :

            multi(numero_uno , numero_dos);
            break;

        case 7 :

            factorial(numero_uno,numero_dos);
            break;

        case 8 :

            operaciones(numero_uno,numero_dos);
            break;

        case 9 :

            color = colores();
            system(color);
            break;

        case 10 :

            saludoExit();
            break;

        default :

            opcInv();
            break;

        }

    }while(calculo != 10); // FIN DEL MENU / BUCLE

}
