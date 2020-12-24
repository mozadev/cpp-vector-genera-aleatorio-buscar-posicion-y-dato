//Ejercicio3 de la hoja 1 la semana 12
#include"stdafx.h"
#include<iostream>
#include<conio.h>
#include<stdlib.h>
#include<time.h>
using namespace std;
using namespace System;
void GenerarEdades(int *N, int *edad)
{
	for (int i = 0; i < *N; i++)
	{
		edad[i] = 1 + rand() % 100 + 1;
	}
}
void SalidaDatos(int *N, int *edad)
{
	for (int i = 0; i < *N; i++)
	{
		cout << "La edad de la persona " << i + 1 << "es: " << edad[i] << endl;
	}
}
void MenorEdad(int *N, int*edad)
{
	int menor = edad[0];
	for (int i = 1; i < *N; i++)
		if (menor > edad[i])
			menor = edad[i];
	cout << "La menor edad es: " << menor << endl;
}
void Contextura(int *N, int *edad)
{
	int contador1 = 0;
	for (int i = 0; i < *N; i++)
	{
		if (edad[i] > 30 && edad[i] < 50)
			contador1++;
	}
	cout << "El numero de personas que tienen 30 y 50 es: " << contador1 << endl;
}
void BuscarEdad(int *N, int *edad)
{
	int buscar;
	int encontrado=0;
	cout << "Ingrese la edad a buscar: ";
	cin >> buscar;
	for (int i = 0; i < *N; i++)
		if (buscar == edad[i])
			encontrado = 1;
		
	if(encontrado==1)

			cout << "Si se encontro" << endl;
		else
			cout << "No se encontro" << endl;
}
int main()
{
	int N;
	srand(time(NULL));
	cout << "Ingrese el numero de personas: ";
	cin >> N;
	while (N > 100)
	{
		cout << "Vuelva a ingresar el numero de personas: ";
		cin >> N;
	}
	int *edad;
	edad = new int[N];
	GenerarEdades(&N, edad);
	SalidaDatos(&N, edad);
	MenorEdad(&N, edad);
	Contextura(&N, edad);
	BuscarEdad(&N, edad);
	delete[] edad;
	_getch();
}