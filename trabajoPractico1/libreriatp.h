#ifndef LIBRERIATP_H_INCLUDED
#define LIBRERIATP_H_INCLUDED

int colores();
void integrantes();
void bienvenidos();
void saludoExit();
void opcInv();

void gotoxy(int x,int y);

float pedirNum1();
float pedirNum2();

void menu();
float mostrarMenu(float num1, float num2);
float modificarPri(float num1);
float modificarSeg(float num2);
void suma(float num1, float num2);
void resta(float num1, float num2);
void multi(float num1, float num2);
void divi(float num1, float num2);
void factorial(float num1, float num2);
void operaciones(float num1, float num2);


#endif // LIBRERIATP_H_INCLUDED
