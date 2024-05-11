/* Programa que indica el signo zodiacal de una persona.
Por: Mauricio Luna Bautista
Unidad 6 Actividad 2
10 de mayo de 2024
*/

#include "pch.h"
#include <iostream>
#include <conio.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main()
{
	//Declaración de variables
	int yr,mes,dia;

	printf("Programa que indica el signo zodiacal de acuerdo con la fecha de nacimiento.\n");
	
	//Día con restricción de error
	do
	{
		printf("\nDigite su dia de nacimiento (DD): ");
		scanf_s("%i", &dia);
		if (dia < 1 || dia>31)
		{
			printf("El dia debe estar entre 1 y 31. Intente de nuevo.");
		}

	} while (dia < 1 || dia>31);
	
	//Mes con restricción de error
	do
	{
		printf("Digite su mes de nacimiento (MM): ");
		scanf_s("%i", &mes);
		if (mes < 1 || mes>12)
		{
			printf("El mes debe estar entre 1 y 12. Intente de nuevo.");
		}

	} while (mes < 1 || mes>12);
	
	
	//Año con restricción de error
	do
	{
		printf("Digite su año de nacimiento (AAAA): ");
		scanf_s("%i", &yr);
		if (yr < 1900)
		{
			printf("El año debe ser mayor que 0. Intente de nuevo.");
		}

	} while (yr < 1900);


	/*Signos del Zodiaco y sus fechas con meses
	Aries: del 21 de marzo al 19 de abril
	Tauro: del 20 de abril al 20 de mayo
	Géminis: del 21 de mayo al 20 de junio
	Cáncer: del 21 de junio al 22 de julio
	Leo: del 23 de julio al 22 de agosto
	Virgo: del 23 de agosto al 22 de septiembre
	Libra: del 23 de septiembre al 22 de octubre
	Escorpio: del 23 de octubre al 21 de noviembre
	Sagitario: del 22 de noviembre al 21 de diciembre
	Capricornio: del 22 de diciembre al 19 de enero
	Acuario: del 20 de enero al 18 de febrero
	Piscis: del 19 de febrero al 20 de marzo
	*/

	//Asignando los signos zodiacales e imprimiendo la fecha de nacimiento

	if ((mes == 3 && dia >= 21) || (mes == 4 && dia <= 19))
	{
		printf("\nSu signo es aries ");
		if (mes == 3)
		{
			printf("y su fecha de nacimiento es: %i de marzo de %i.", dia,yr);
		}
		else
		{
			printf("y su fecha de nacimiento es: %i de abril de %i.", dia, yr);
		}
	}
	else if ((mes == 4 && dia >= 20) || (mes == 5 && dia <= 20))
	{
		printf("\nSu signo es tauro ");
		if (mes == 4)
		{
			printf("y su fecha de nacimiento es: %i de abril de %i.", dia, yr);
		}
		else
		{
			printf("y su fecha de nacimiento es: %i de mayo de %i.", dia, yr);
		}
	}
	else if ((mes == 5 && dia >= 21) || (mes == 6 && dia <= 20))
	{
		printf("\nSu signo es geminis ");
		if (mes == 5)
		{
			printf("y su fecha de nacimiento es: %i de mayo de %i.", dia, yr);
		}
		else
		{
			printf("y su fecha de nacimiento es: %i de junio de %i.", dia, yr);
		}
	}
	else if ((mes == 6 && dia >= 21) || (mes == 7 && dia <= 22))
	{
		printf("\nSu signo es cancer ");
		if (mes == 6)
		{
			printf("y su fecha de nacimiento es: %i de junio de %i.", dia, yr);
		}
		else
		{
			printf("y su fecha de nacimiento es: %i de julio de %i.", dia, yr);
		}
	}
	else if ((mes == 7 && dia >= 23) || (mes == 8 && dia <= 22))
	{
		printf("\nSu signo es leo ");
		if (mes == 7)
		{
			printf("y su fecha de nacimiento es: %i de julio de %i.", dia, yr);
		}
		else
		{
			printf("y su fecha de nacimiento es: %i de agosto de %i.", dia, yr);
		}
	}
	else if ((mes == 8 && dia >= 23) || (mes == 9 && dia <= 22))
	{
		printf("\nSu signo es virgo ");
		if (mes == 8)
		{
			printf("y su fecha de nacimiento es: %i de agosto de %i.", dia, yr);
		}
		else
		{
			printf("y su fecha de nacimiento es: %i de septiembre de %i.", dia, yr);
		}
	}
	else if ((mes == 9 && dia >= 23) || (mes == 10 && dia <= 22))
	{
		printf("\nSu signo es libra ");
		if (mes == 9)
		{
			printf("y su fecha de nacimiento es: %i de septiembre de %i.", dia, yr);
		}
		else
		{
			printf("y su fecha de nacimiento es: %i de octubre de %i.", dia, yr);
		}
	}
	else if ((mes == 10 && dia >= 23) || (mes == 11 && dia <= 21))
	{
		printf("\nSu signo es escorpio ");
		if (mes == 10)
		{
			printf("y su fecha de nacimiento es: %i de octubre de %i.", dia, yr);
		}
		else
		{
			printf("y su fecha de nacimiento es: %i de noviembre de %i.", dia, yr);
		}
	}
	else if ((mes == 11 && dia >= 22) || (mes == 12 && dia <= 21))
	{
		printf("\nSu signo es sagitario ");
		if (mes == 11)
		{
			printf("y su fecha de nacimiento es: %i de noviembre de %i.", dia, yr);
		}
		else
		{
			printf("y su fecha de nacimiento es: %i de diciembre de %i.", dia, yr);
		}
	}
	else if ((mes == 12 && dia >= 22) || (mes == 1 && dia <= 19))
	{
		printf("\nSu signo es capricornio ");
		if (mes == 12)
		{
			printf("y su fecha de nacimiento es: %i de diciembre de %i.", dia, yr);
		}
		else
		{
			printf("y su fecha de nacimiento es: %i de enero de %i.", dia, yr);
		}
	}
	else if ((mes == 1 && dia >= 20) || (mes == 2 && dia <= 18))
	{
		printf("\nSu signo es acuario ");
		if (mes == 1)
		{
			printf("y su fecha de nacimiento es: %i de enero de %i.", dia, yr);
		}
		else
		{
			printf("y su fecha de nacimiento es: %i de febrero de %i.", dia, yr);
		}
	}
	else
	{
		printf("\nSu signo es piscis ");
		if (mes == 2)
		{
			printf("y su fecha de nacimiento es: %i de febrero de %i.", dia, yr);
		}
		else
		{
			printf("y su fecha de nacimiento es: %i de marzo de %i.", dia, yr);
		}
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
