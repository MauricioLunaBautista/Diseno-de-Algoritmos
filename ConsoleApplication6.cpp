/*El programa deberá solicitar al usuario 3 números, los cuales deberán ser mayores de 3 
y menores de 15. El programa deberá regresar los números ordenados de mayor a menor e indicar 
un error si el usuario ingresa números fuera de los parámetros establecidos.
*/

#include "pch.h"
#include <iostream>
#include <conio.h>
#include <stdio.h>
#include <string.h>


int main()
{
	//Declaración de variables
	int numeros[3];
	int i, posicion, aux = 0;


	printf("Programa que ordena tres números introducidos por el usuario.\nNota: Los números deben ser mayores que 3 y menores que 15.\n");

	//Solicitar tres números con restricción mayores que 3 y menores que 15

	for (i = 0; i < 3; i++)
	{
		do
		{
			printf("\nDigite el número [%i]: ",i+1);
			scanf_s("%i", &numeros[i]);
			if (numeros[i] <= 3 || numeros[i] >= 15)
			{
				printf("\nEl número debe ser mayor que 3 y menor que 15. Intente de nuevo.");
			}
		} while (numeros[i] <= 3 || numeros[i] >= 15);
	}
	
	//Imprimimos los números originales para demostración
	printf("\nNúmeros originales: ");
	for (int i = 0; i < 3; i++)
	{
		printf("\n El elemento [%i] es: %i", i+1, numeros[i]);
	}
	
	//Ordenamiento por inserción con un ciclo for
	for (i = 0; i < 3; i++)
	{
		posicion = i; //Para que vaya iterando la posición//
		aux = numeros[i];

		while ((posicion >= 0) && (numeros[posicion - 1] > aux))
		{
			numeros[posicion] = numeros[posicion - 1];
			posicion--;
		}
		numeros[posicion] = aux; //Para refrescar en qué numero de la posición vamos//
	}

	//Imprimimos los números ordenados para comparación
	printf("\nNúmeros ordenados: ");
	for (int i = 0; i < 3; i++)
	{
		printf("\n El elemento [%i] ordenado es: %i", i + 1, numeros[i]);
	}


	return 0;
}


// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
