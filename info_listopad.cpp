#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include <stdlib.h>
#include "pch.h"




int main(void) {

	// Nie bardzo wiem jak pozwolic uzytkownikowi na uruchamianie wszystkich zadañ w obrebie jednego pliku wiec zrobiê to uzywajac switch i case
	int zadanie = 1;
	printf("Wprowadz numer zadania do uruchomienia (od 1 do 20), wprowadz 0 zeby wyjsc.\n");
	while (zadanie != 0)
	{
		scanf("%d", &zadanie);
		switch (zadanie) {

			//1.1. Zadeklarowaæ zmienne typu int, float, char. Przypisaæ do nich wartoœæ, wyœwietliæ je na ekran.
		case 1:
			printf("Zadanie 1_1\n");
			{
				int a = 14;
				float b = 1.3;
				char c = 'c';
				printf("int=%d,float=%f,char=%c\n", a, b, c);
				break;
			}


			//1.2. Wyœwietliæ zmienn¹ typu int na ekran. Nale¿y u¿yæ metody printf i konstrukcji %d
		case 2:
			printf("Zadanie 1_2\n");
			{
				int a = 10;
				printf("int=%d\n", a);
				break;
			}

			//1.3. Pobrać od użytkownika liczbę x. Wyświetlić kwadrat liczby x.
		case 3:
			printf("Zadanie 1_3\n");
			{
				int x = 0;
				printf("Wprowadź liczbę do skwadracenia.\n");
				scanf("%d", &x);
				printf("x=%d\n", x*x);
				break;
			}

			//1.4. Zapoznać się z instrukcjami warunkowymi (if, else if, else oraz switch). Pobrać od używkownika liczbę i wyświetlić informację, czy jest
		   //ona: mniejsza, większa, czy równa 0.

		case 4:
			printf("Zadanie 1_4\n");
			{
				int x = 0;
				printf("Podaj liczbę.\n");
				scanf("%d", &x);
				if (x < 0)
				{
					printf("Liczba mniejsza od 0\n");
				}
				else if (x = 0)
				{
					printf("Liczba równa 0\n");
				}
				else
				{
					printf("Liczba większa od 0\n");
				}
				break;
			}

			//1.5. Pobrać ud użytkownika 3 liczby (x1, x2, x3). Wyświetlić informację, która z tych liczb jest największa.

		case 5:
			printf("Zadanie 1_5\n");
			{
				int x, y;
				printf("Podaj pierwsza liczbe\n");
				scanf("%d", &x);
				for (int i = 0; i < 2; i++)             //nie chciałem tego robić if else
				{
					printf("Podaj następną liczbe\n");
					scanf("%d", &y);
					if (y > x)
					{
						x = y;
					}
				}
				printf("Największa liczba to %d\n", x);

				break;
			}

			//1.6. Napisać prosty kalkulator. Należy pobrać od użytkownika 2 liczby oraz operator (jeden z czterech: mnożenie, dzielenie, dodawanie,
			//odejmowanie). Wymagane jest utworzenie prostego menu użytkownika. Uwaga - należy pamiętać o ułamkach (1/3 powinno dać 0.33, a nie
			//0)
		case 6:
			printf("Zadanie 1_6\n");
			{																						// PRÓBOWAŁEM TAK ALE CHAR TO DLA MNIE ZAGADKA
																									//	char dzialanie [30];
																									//	char l;
																									//	int len;
																									//	double x, y, z;
																									//	printf("Kalkulator, wpisz działanie, np 3*8\n");
																									//	scanf("%s", dzialanie);
																									//	len = strlen(dzialanie);
																									//	//strtok(&dzialanie, "*/+-");
																									//	for (int i = 0; i < len; i++)
																									//	{
																									//		if (!isdigit(dzialanie[i]))
																									//		{
																									//			l = dzialanie[i];
																									//		}
																									//	}
																									//	x = atof(strtok(dzialanie, "*/+-"));
																									//	y = atof(strtok(NULL, "*/+-"));
																									//	printf("%c,%d,%d\n", l, x, y);
																									//	break;

																									//}



			}

		case 0: printf("Koniec");
			break;
		default: printf("Nie ma takiego zadania.");
			break;
		}
	}
	return 0;
}






