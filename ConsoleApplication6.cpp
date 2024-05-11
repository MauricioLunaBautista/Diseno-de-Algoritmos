/*El programa deber� solicitar al usuario 3 n�meros, los cuales deber�n ser mayores de 3 
y menores de 15. El programa deber� regresar los n�meros ordenados de mayor a menor e indicar 
un error si el usuario ingresa n�meros fuera de los par�metros establecidos.
*/

#include "pch.h"
#include <iostream>
#include <conio.h>
#include <stdio.h>
#include <string.h>


int main()
{
	//Declaraci�n de variables
	int numeros[3];
	int i, posicion, aux = 0;


	printf("Programa que ordena tres n�meros introducidos por el usuario.\nNota: Los n�meros deben ser mayores que 3 y menores que 15.\n");

	//Solicitar tres n�meros con restricci�n mayores que 3 y menores que 15

	for (i = 0; i < 3; i++)
	{
		do
		{
			printf("\nDigite el n�mero [%i]: ",i+1);
			scanf_s("%i", &numeros[i]);
			if (numeros[i] <= 3 || numeros[i] >= 15)
			{
				printf("\nEl n�mero debe ser mayor que 3 y menor que 15. Intente de nuevo.");
			}
		} while (numeros[i] <= 3 || numeros[i] >= 15);
	}
	
	//Imprimimos los n�meros originales para demostraci�n
	printf("\nN�meros originales: ");
	for (int i = 0; i < 3; i++)
	{
		printf("\n El elemento [%i] es: %i", i+1, numeros[i]);
	}
	
	//Ordenamiento por inserci�n con un ciclo for
	for (i = 0; i < 3; i++)
	{
		posicion = i; //Para que vaya iterando la posici�n//
		aux = numeros[i];

		while ((posicion >= 0) && (numeros[posicion - 1] > aux))
		{
			numeros[posicion] = numeros[posicion - 1];
			posicion--;
		}
		numeros[posicion] = aux; //Para refrescar en qu� numero de la posici�n vamos//
	}

	//Imprimimos los n�meros ordenados para comparaci�n
	printf("\nN�meros ordenados: ");
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
