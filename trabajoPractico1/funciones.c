#include <stdio.h>
#include <stdlib.h>
#include <windows.h>
#include <math.h>

void gotoxy(int x,int y){//------------------------- FUNCION PARA DAR CORDENADAS A LOS RESULTADOS

    HANDLE hcon;
    hcon = GetStdHandle(STD_OUTPUT_HANDLE);
    COORD dwPos;
    dwPos.X = x;
    dwPos.Y= y;
    SetConsoleCursorPosition(hcon,dwPos);

}

float pedirNum1(){//-------------------------------------- PIDE NUM 1 AL INICIO

    float num;

    printf("\n===============================================\n");
    printf("||   Antes de iniciar la calculadora, por favor:\n");
    printf("||\n");
    printf("||=============================================\n");
    printf("||   Escriba el primer operando:  ");
    scanf("%f",&num);
    printf("||\n");
    printf("||=============================================\n");

    return num;
}

float pedirNum2(){//-------------------------------------- PIDE NUM 2 AL INICIO

    float num;

    printf("||   Escriba el segundo operando:  ");
    scanf("%f",&num);
    printf("||\n");
    printf("||=============================================\n");
    Sleep(500);

    system("cls");

    return num;
}

int colores(){//-------------------------------------- CAMBIAR COLOR

    int color;

    system("cls");

    printf("Seleccion de color para la calculadora.\n\n");Sleep(50);

    printf(" 1 - AZUL\n");Sleep(50);
    printf(" 2 - VERDE\n");Sleep(50);
    printf(" 3 - CELESTE\n");Sleep(50);
    printf(" 4 - ROJO\n");Sleep(50);
    printf(" 5 - VIOLETA\n");Sleep(50);
    printf(" 6 - AMARILLO\n");Sleep(50);
    printf(" 7 - BLANCO\n");Sleep(50);

    printf("Ingresar color: ");
    scanf("%d",&color);

    system("cls");

        while(color != 1 || color != 2 || color != 3 || color != 4 || color != 5 || color != 6 || color != 7){

            if(color == 1){
            return "COLOR 01";
            break;
            }
            else if(color == 2){
             return "COLOR 02";
             break;
            }
            else if(color == 3){
             return "COLOR 03";
             break;
            }
            else if(color == 4){
             return "COLOR 04";
             break;
            }
            else if(color == 5){
             return "COLOR 05";
            break;
            }
            else if(color == 6){
             return "COLOR 06";
             break;
            }
            else if(color == 7){
             return "COLOR 07";
             break;
            }else{

                printf("Ingrese una opcion correcta.\n\n");
                printf("Seleccion de color para la calculadora.\n\n");Sleep(50);

                printf(" 1 - AZUL\n");Sleep(50);
                printf(" 2 - VERDE\n");Sleep(50);
                printf(" 3 - CELESTE\n");Sleep(50);
                printf(" 4 - ROJO\n");Sleep(50);
                printf(" 5 - VIOLETA\n");Sleep(50);
                printf(" 6 - AMARILLO\n");Sleep(50);
                printf(" 7 - BLANCO\n");Sleep(50);

                printf("Ingresar color: ");
                scanf("%d",&color);

                system("cls");
            }

        }
}

void opcInv(){ //-------------------------------------- OPCION INCORRECTA

    system("cls");
    printf("       *****************************\n");
    printf("       * Ingrese una opcion valida * \n");
    printf("       *****************************\n\n");
    system("pause");
    system("cls");

}

void integrantes(){ //-------------------------------------- NOMBRE DE INTEGRANTES

   char saludo[12]= "Integrantes: ";

   gotoxy(31,1);for(int i = 0 ; i < 11 ; i++){
        printf("%c",saludo[i]);
        Sleep(50);
    }

    printf("\n");

    gotoxy(25,5); printf("************************\n\n");Sleep(200);
    gotoxy(25,7); printf("*    Lezcano Franco    *\n\n");Sleep(200);
    gotoxy(25,9); printf("*     Rios Fernando    *\n\n");Sleep(200);
    gotoxy(25,11);printf("*     Manrique Hugo    *\n\n");Sleep(200);
    gotoxy(25,13);printf("*   Yasinowsky Alexis  *\n\n");Sleep(200);
    gotoxy(25,15);printf("************************\n\n");

}

void saludoExit(){ //-------------------------------------- SALIR

    system("cls");
    gotoxy(18,5);printf("  ****************************************\n");Sleep(50);
    gotoxy(18,6);printf("  *                                      *\n");Sleep(50);
    gotoxy(18,7);printf("  * Gracias por usar nuestra calculadora *\n");Sleep(50);
    gotoxy(18,8);printf("  *                                      *\n");Sleep(50);
    gotoxy(18,9);printf("  ****************************************\n");Sleep(50);

    system("pause");

}

float mostrarMenu(float num1, float num2){//------------------------- ELECCION DE OPCION

    int calculo;

    gotoxy(25,0);printf("El primer operando es: %.2f",num1);Sleep(50);
    gotoxy(25,2);printf("El segundo operando es: %.2f\n\n",num2);Sleep(50);

    menu();Sleep(50);
    printf("\n\nElija lo que desea realizar: ");
    scanf("%d",&calculo);

    return calculo;
}

void menu(){ //-------------------------------------- MENU
    printf("                 __ __ __ __ __ __ __ __ __ __ __ __ __ __ __ __   \n");
    printf("                |* *__*__*__*__*__*__*__*__*__*__*__*__*__*__* *|  \n");Sleep(50);
    printf("                |*|                                           |*|  \n");
    printf("                |*|      1) Modificar primer operando.        |*|  \n");
    printf("                |*|                                           |*|  \n");Sleep(50);
    printf("                |*|      2) Modificar segundo operando.       |*|  \n");
    printf("                |*|                                           |*|  \n");Sleep(50);
    printf("                |*|      3) Sumar.                            |*|  \n");
    printf("                |*|                                           |*|  \n");
    printf("                |*|      4) Restar.                           |*|  \n");Sleep(50);
    printf("                |*|                                           |*|  \n");
    printf("                |*|      5) Dividir.                          |*|  \n");Sleep(50);
    printf("                |*|                                           |*|  \n");
    printf("                |*|      6) Multiplicar.                      |*|  \n");Sleep(50);
    printf("                |*|                                           |*|  \n");
    printf("                |*|      7) Factorial. (Max 34)               |*|  \n");Sleep(50);
    printf("                |*|                                           |*|  \n");
    printf("                |*|      8) Calcular todas las operaciones.   |*|  \n");Sleep(50);
    printf("                |*|                                           |*|  \n");
    printf("                |*|      9) Cambiar el color de la Calcu.     |*|  \n");Sleep(50);
    printf("                |*|                                           |*|  \n");
    printf("                |*|      10) Salir.                           |*|  \n");Sleep(50);
    printf("                |*| __ __ __ __ __ __ __ __ __ __ __ __ __ __ |*|  \n");
    printf("                |__*__*__*__*__*__*__*__*__*__*__*__*__*__*__*__| \n\n");

}

float modificarPri(float num1){ //-------------------------------------- MODIFICAR 1er OPERANDO

    float valor1;

    printf("Ingrese nuevo valor para el primer operando: ");
    scanf("%f",&num1);
    valor1 = num1;
    system("cls");

    return valor1;

}

float modificarSeg(float num2){ //-------------------------------------- MODIFICAR 2do OPERANDO

    float valor2;

    printf("Ingrese el valor para el segundo operando: ");
    scanf("%f",&num2);
    valor2 = num2;
    system("cls");

    return valor2;

}

void suma(float num1, float num2){ //-------------------------------------- SUMA

    float resultado;

    resultado = num1 + num2;

    system("cls");

    gotoxy(0,15);
    printf("------------------------------------------------\n");
    printf("El resultado de la suma de %.2f y %.2f es: %.2f \n",num1,num2,resultado);
    printf("------------------------------------------------\n");

    system("pause");
    system("cls");

}

void resta(float num1, float num2){ //-------------------------------------- RESTA

    float resultado;

    resultado = num1 - num2;

    system("cls");

    gotoxy(0,15);
    printf("-------------------------------------------------\n");
    printf("El resultado de la resta de %.2f y %.2f es: %.2f \n",num1,num2,resultado);
    printf("-------------------------------------------------\n");

    system("pause");
    system("cls");

}

void multi(float num1, float num2){ //-------------------------------------- MULTIPLICACION

    float resultado;

    system("cls");

    if(num1 == 0 || num2 == 0){ // SI ALGUN OPERANDO ES 0

    gotoxy(0,15);
    printf("------------------------------------------\n");
    printf("Cualquier numero multiplicado por 0 da 0. \n");
    printf("------------------------------------------\n");

    }else{ // CALCULO

    resultado = num1 * num2;

    gotoxy(0,15);
    printf("------------------------------------------------------\n");
    printf("El resultado de la multiplicacion de %.2f y %.2f es: %.2f \n",num1,num2,resultado);
    printf("------------------------------------------------------\n");

    }

    system("pause");
    system("cls");

}

void divi(float num1, float num2){ //-------------------------------------- DIVISION

    float resto;
    float resultado;

    system("cls");

    if(num1 == 0){ // SI ALGUN OPERANDO ES 0

        gotoxy(0,15);
        printf("-------------------------------------------------\n");
        printf("Si el dividendo es 0, el resultado va a ser 0.   \n");
        printf("-------------------------------------------------\n");

    }else if(num2 == 0){

        gotoxy(0,15);
        printf("-------------------------------------------------------\n");
        printf("Si el divisor es 0, no se puede realizar esta division.\n");
        printf("-------------------------------------------------------\n");

    }else{ // CALCULO

    resultado = num1 / num2;
    resto = fmod(num1,num2); //funcion para calcular el resto/residuo de floats

    gotoxy(0,15);
    printf("------------------------------------------------\n");
    printf("El resultado de la division de %.2f y %.2f es: %.2f \n",num1,num2,resultado);
    printf("------------------------------------------------\n\n");

    printf("------------------------------------------------\n");
    printf("El resto de la division de %.2f y %.2f es: %.2f \n",num1,num2,resto);
    printf("------------------------------------------------\n");

    }

    system("pause");
    system("cls");

}

void factorial(float num1, float num2){ //-------------------------------------- FACTORIAL

    system("cls");

    float resultadoFact1 = 1.0;
    float resultadoFact2 = 1.0;

    // si i es menor o igual al operando ingresado.

    for (int i = 1; i <= num1; i++){
        resultadoFact1 = resultadoFact1 * i;
    }

    for (int i = 1; i <= num2; i++){
        resultadoFact2 = resultadoFact2 * i;
    }

    gotoxy(0,15);
    printf("-----------------------------------------------------------------\n");
    printf("El factorial de : %.2f es: %.2f y el factorial de %.2f es: %.2f \n",num1,resultadoFact1,num2,resultadoFact2);
    printf("-----------------------------------------------------------------\n");
    system("pause");
    system("cls");

}

void operaciones(float num1, float num2){ //-------------------------------------- TODAS LAS OPERA..

    //Limpiar pantalla

    system("cls");

    //SUMA
    float resultadoSuma;

    resultadoSuma = num1 + num2;

    printf("/////////////////////////////////////////////////////////////////\n\n");Sleep(50);
    printf("El resultado de la suma de %.2f y %.2f es: %.2f \n\n",num1,num2,resultadoSuma);Sleep(50);
    printf("/////////////////////////////////////////////////////////////////\n\n");Sleep(50);

    //RESTA

    float resultadoResta;

    resultadoResta = num1 - num2;

    printf("El resultado de la resta de %.2f y %.2f es: %.2f \n\n",num1,num2,resultadoResta);Sleep(50);
    printf("/////////////////////////////////////////////////////////////////\n\n");Sleep(50);

    //MULT

    float resultadoMulti;

    if(num1 == 0 || num2 == 0){

    printf("Cualquier numero multiplicado por 0 da 0. \n\n");Sleep(50);
    printf("/////////////////////////////////////////////////////////////////\n\n");Sleep(50);

    }else{

    resultadoMulti = num1 * num2;

    printf("El resultado de la multiplicacion de %.2f y %.2f es: %.2f \n\n",num1,num2,resultadoMulti);Sleep(50);
    printf("/////////////////////////////////////////////////////////////////\n\n");Sleep(50);

    }

    //DIVI

    float resultadoDivi;
    float restoDivi;

        if(num1 == 0){ // SI ALGUN OPERANDO ES 0

            printf("Si el dividendo es 0, el resultado va a ser 0.   \n");Sleep(50);
            printf("/////////////////////////////////////////////////////////////////\n\n");Sleep(50);

        }else if(num2 == 0){

            printf("Si el divisor es 0, no se puede realizar esta division.\n");Sleep(50);
            printf("/////////////////////////////////////////////////////////////////\n\n");Sleep(50);

        }else{ // CALCULO

            resultadoDivi = num1 / num2;
            restoDivi = fmod(num1,num2);

            printf("El resultado de la division de %.2f y %.2f es: %.2f \n\n",num1,num2,resultadoDivi);Sleep(50);

            printf("El resto de la division de %.2f y %.2f es: %.2f \n\n",num1,num2,restoDivi);Sleep(50);
            printf("/////////////////////////////////////////////////////////////////\n\n");Sleep(50);

        }

    //FACT

    float resultadoFact1 = 1.0;
    float resultadoFact2 = 1.0;

    for (int i = 1; i <= num1; i++){
        resultadoFact1 = resultadoFact1 * i;
    }
    for (int i = 1; i <= num2; i++){
        resultadoFact2 = resultadoFact2 * i;
    }

    printf("El factorial de %.2f es: %.2f y el factorial de %.2f es: %.2f \n\n",num1,resultadoFact1,num2,resultadoFact2);Sleep(50);
    printf("/////////////////////////////////////////////////////////////////\n");Sleep(50);
    system("pause");
    system("cls");
}

void bienvenidos(){

    gotoxy(0,1);printf("****");Sleep(50);
    gotoxy(0,2);printf("*   *");Sleep(50);
    gotoxy(0,3);printf("* *");Sleep(50);
    gotoxy(0,4);printf("*   *");Sleep(50);
    gotoxy(0,5);printf("****");Sleep(50);

    gotoxy(6,1);printf("*");Sleep(50);
    gotoxy(6,2);printf("*");Sleep(50);
    gotoxy(6,3);printf("*");Sleep(50);
    gotoxy(6,4);printf("*");Sleep(50);
    gotoxy(6,5);printf("*");Sleep(50);

    gotoxy(8,1);printf("****");Sleep(50);
    gotoxy(8,2);printf("*");Sleep(50);
    gotoxy(8,3);printf("**");Sleep(50);
    gotoxy(8,4);printf("*");Sleep(50);
    gotoxy(8,5);printf("****");Sleep(50);

    gotoxy(13,1);printf("**    *");Sleep(50);
    gotoxy(13,2);printf("* *   *");Sleep(50);
    gotoxy(13,3);printf("*  *  *");Sleep(50);
    gotoxy(13,4);printf("*   * *");Sleep(50);
    gotoxy(13,5);printf("*    **");Sleep(50);

    gotoxy(21,1);printf("*       *");Sleep(50);
    gotoxy(21,2);printf(" *     *");Sleep(50);
    gotoxy(21,3);printf("  *   *");Sleep(50);
    gotoxy(21,4);printf("   * *");Sleep(50);
    gotoxy(21,5);printf("    *");Sleep(50);

    gotoxy(31,1);printf("****");Sleep(50);
    gotoxy(31,2);printf("*");Sleep(50);
    gotoxy(31,3);printf("**");Sleep(50);
    gotoxy(31,4);printf("*");Sleep(50);
    gotoxy(31,5);printf("****");Sleep(50);

    gotoxy(36,1);printf("**    *");Sleep(50);
    gotoxy(36,2);printf("* *   *");Sleep(50);
    gotoxy(36,3);printf("*  *  *");Sleep(50);
    gotoxy(36,4);printf("*   * *");Sleep(50);
    gotoxy(36,5);printf("*    **");Sleep(50);

    gotoxy(44,1);printf("*");Sleep(50);
    gotoxy(44,2);printf("*");Sleep(50);
    gotoxy(44,3);printf("*");Sleep(50);
    gotoxy(44,4);printf("*");Sleep(50);
    gotoxy(44,5);printf("*");Sleep(50);


    gotoxy(46,1);printf("**");Sleep(50);
    gotoxy(46,2);printf("* *");Sleep(50);
    gotoxy(46,3);printf("*  *");Sleep(50);
    gotoxy(46,4);printf("* *");Sleep(50);
    gotoxy(46,5);printf("**");Sleep(50);

    gotoxy(51,1);printf("*****");Sleep(50);
    gotoxy(51,2);printf("*   *");Sleep(50);
    gotoxy(51,3);printf("*   *");Sleep(50);
    gotoxy(51,4);printf("*   *");Sleep(50);
    gotoxy(51,5);printf("*****");Sleep(50);

    gotoxy(25,8);printf ("    *");Sleep(50);
    gotoxy(25,9);printf ("   * *");Sleep(50);
    gotoxy(25,10);printf("  *   *");Sleep(50);
    gotoxy(25,11);printf(" * *** *");Sleep(50);
    gotoxy(25,12);printf("*       *");Sleep(50);

    gotoxy(0,15);printf("**    *");Sleep(50);
    gotoxy(0,16);printf("* *   *");Sleep(50);
    gotoxy(0,17);printf("*  *  *");Sleep(50);
    gotoxy(0,18);printf("*   * *");Sleep(50);
    gotoxy(0,19);printf("*    **");Sleep(50);

    gotoxy(9,15);printf("*  *");Sleep(50);
    gotoxy(9,16);printf("*  *");Sleep(50);
    gotoxy(9,17);printf("*  *");Sleep(50);
    gotoxy(9,18);printf("*  *");Sleep(50);
    gotoxy(9,19);printf("****");Sleep(50);

    gotoxy(15,15);printf("****");Sleep(50);
    gotoxy(15,16);printf("*");Sleep(50);
    gotoxy(15,17);printf("**");Sleep(50);
    gotoxy(15,18);printf("*");Sleep(50);
    gotoxy(15,19);printf("****");Sleep(50);

    gotoxy(20,15);printf("****");Sleep(50);
    gotoxy(20,16);printf("*");Sleep(50);
    gotoxy(20,17);printf("****");Sleep(50);
    gotoxy(20,18);printf("   *");Sleep(50);
    gotoxy(20,19);printf("****");Sleep(50);

    gotoxy(26,15);printf("*****");Sleep(50);
    gotoxy(26,16);printf("  *  ");Sleep(50);
    gotoxy(26,17);printf("  *  ");Sleep(50);
    gotoxy(26,18);printf("  *  ");Sleep(50);
    gotoxy(26,19);printf("  *  ");Sleep(50);

    gotoxy(33,15);printf("****");Sleep(50);
    gotoxy(33,16);printf("*  *");Sleep(50);
    gotoxy(33,17);printf("**");Sleep(50);
    gotoxy(33,18);printf("* *");Sleep(50);
    gotoxy(33,19);printf("*  *");Sleep(50);

    gotoxy(39,15);printf ("    *");Sleep(50);
    gotoxy(39,16);printf ("   * *");Sleep(50);
    gotoxy(39,17);printf ("  *   *");Sleep(50);
    gotoxy(39,18);printf (" * *** *");Sleep(50);
    gotoxy(39,19);printf ("*       *\n\n");Sleep(50);

    system("pause");
    system("cls");

    gotoxy(10,1);printf("*******");Sleep(50);
    gotoxy(10,2);printf("*******");Sleep(50);
    gotoxy(10,3);printf("**");Sleep(50);
    gotoxy(10,4);printf("**");Sleep(50);
    gotoxy(10,5);printf("**");Sleep(50);
    gotoxy(10,6);printf("**");Sleep(50);
    gotoxy(10,7);printf("**");Sleep(50);
    gotoxy(10,8);printf("**");Sleep(50);
    gotoxy(10,9);printf("*******");Sleep(50);
    gotoxy(10,10);printf("*******");Sleep(50);

    gotoxy(19,1);printf("*******");Sleep(50);
    gotoxy(19,2);printf("*******");Sleep(50);
    gotoxy(19,3);printf("**   **");Sleep(50);
    gotoxy(19,4);printf("**   **");Sleep(50);
    gotoxy(19,5);printf("**   **");Sleep(50);
    gotoxy(19,6);printf("*******");Sleep(50);
    gotoxy(19,7);printf("*******");Sleep(50);
    gotoxy(19,8);printf("**   **");Sleep(50);
    gotoxy(19,9);printf("**   **");Sleep(50);
    gotoxy(19,10);printf("**   **");Sleep(50);

    gotoxy(28,1);printf("**");Sleep(50);
    gotoxy(28,2);printf("**");Sleep(50);
    gotoxy(28,3);printf("**");Sleep(50);
    gotoxy(28,4);printf("**");Sleep(50);
    gotoxy(28,5);printf("**");Sleep(50);
    gotoxy(28,6);printf("**");Sleep(50);
    gotoxy(28,7);printf("**");Sleep(50);
    gotoxy(28,8);printf("**");Sleep(50);
    gotoxy(28,9);printf("*******");Sleep(50);
    gotoxy(28,10);printf("*******");Sleep(50);

    gotoxy(37,1);printf("*******");Sleep(50);
    gotoxy(37,2);printf("*******");Sleep(50);
    gotoxy(37,3);printf("**");Sleep(50);
    gotoxy(37,4);printf("**");Sleep(50);
    gotoxy(37,5);printf("**");Sleep(50);
    gotoxy(37,6);printf("**");Sleep(50);
    gotoxy(37,7);printf("**");Sleep(50);
    gotoxy(37,8);printf("**");Sleep(50);
    gotoxy(37,9);printf("*******");Sleep(50);
    gotoxy(37,10);printf("*******");Sleep(50);

    gotoxy(46,1);printf("**   **");Sleep(50);
    gotoxy(46,2);printf("**   **");Sleep(50);
    gotoxy(46,3);printf("**   **");Sleep(50);
    gotoxy(46,4);printf("**   **");Sleep(50);
    gotoxy(46,5);printf("**   **");Sleep(50);
    gotoxy(46,6);printf("**   **");Sleep(50);
    gotoxy(46,7);printf("**   **");Sleep(50);
    gotoxy(46,8);printf("**   **");Sleep(50);
    gotoxy(46,9);printf("*******");Sleep(50);
    gotoxy(46,10);printf("*******\n\n");Sleep(50);

    system("pause");
    system("cls");
    system("COLOR 02");

    Sleep(50);printf("01010101010101010101010101010101010101010101010101010101010101010101010101010101010101010101010101010101010101010101010101010101");
    Sleep(50);printf("01010101010 01010101010101010101010101010101010101010101010101010101010101010101010101010101010101010101010101010101010101010101");
    Sleep(50);printf("10101010101 10101000101001010101001010101010101010000010010101001010010001010100100101001010101001010101010101010101010101010101");
    Sleep(50);printf("01010 0 010 010101010101010101010101010 0101010 01010101010101010101010101010101010101010101010101 10101010101010101010101010101");
    Sleep(50);printf("010 1 1 1 1 1 1010101010101010101010101 1010101 1010101010101010101010101010101010101010101 101 10 01010010101010101010101010101");
    Sleep(50);printf("101 1 1 1 1 1 1010001010010101010010101 1010101 1000001001010100101001000101 10010010100101 101 0  101010101010101010101010101 1");
    Sleep(50);printf("0 0 0 0 0 0 0 0 01010 010101010101010 0 01010 0 010101010101 1010101010101 1 10101010101010 010 0  1010101010 0101010101010101 1");
    Sleep(50);printf("0 1 1 1 1 1 1 1 10101 101 10101010101 1 101 1 1 1 1010101010 0101010101010 0 0101010101 101 1 0 0  1 101 1010 0101010101010101 1");
    Sleep(50);printf("1 1 1 1 1 1 1 1 1 001 100 01010100101 1 101 1 1 1 00 010 101 1001010 1 001   1001001010 101 1 1    1 101 1010 0101010101010101 1");
    Sleep(50);printf("0 0 0 0 0 0 0 0 0 010 0 0 010101010 0 0 0 0 0 0 0 01 101 101 1 10101 1 101   1 10 010 0 010 0 0    1 101 1010 01010 0101010101 1");
    Sleep(50);printf("0 0 0 0 0 0 0 0 0 0 0 0 0 0 0101010 1 1 1 1 1 1 1 10 0 0 010 0 0 010   010   0 01 101 1 101   1    0 001 1010 01010 0101010101 1");
    Sleep(60);printf("1 1 1 1 1 1 1   1 0 1 1 0 0 0 01001 1 1 1 1 1 1 1 00 0 0 101   0 010   010   0 1  1 1 1 1 1   0    1 1 0   10 01010 0101010101 1");
    Sleep(60);printf("0 0   1 1 1 1   1 1 1 1 1 1 1 101 1 1 1 1 1 1 1 1 10 0 0 0 0   0 010   0 0     0  1 1 1 1 1        0 0 1   10 010 0 0101010 01 1");
    Sleep(60);printf("0 0     0 0 0   1 1 1 1 1   1 101 1   1   1 1 1   10   0 0 0   0 0 0   0 1        0 0 0 0 0        1 1 1   0  010 0 0101010 01  ");
    Sleep(60);printf("1 1     1 1 1   0 0 1 1 0   0 010 1   1   1 1 1    0   1 0 0   0 1 1   0 0        0 1   0 0          0 1   1  010 0 0 1 010 01  ");
    Sleep(70);printf("0 0     0 0     0 0 0   0     0 0     0   0 0 0    1   1 1 1     1 1     1        0     0 0          1     1  0 0 0 0 10  0 01  ");
    Sleep(70);printf("0       0 0     0 0 0         0 0         0 0 0        1 1 1       1              0     0 0          1     1  0   0 0 10  0 01  ");
    Sleep(80);printf("1         1       0 1         0             0 0        1   0       1              0       0          0     1  0     0 10  0 01  ");
    Sleep(90);printf("0                 0           0               1        0           0              1                  0     1  0     0 10  0 01  ");

    system("cls");
    system("COLOR 07");
}
