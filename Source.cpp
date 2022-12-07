#define _CRT_SECURE_NO_DEPRECATE
#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <locale.h>
#define _USE_MATH_DEFINES
void tabl(int a[5][8]);
void menu(char n);
void main()
{
	setlocale(LC_ALL, "RUS");
	int a[5][9] = {
	{ 1, 15, 17, 21, 22, 19, 21, 5, 4},
	{ 2, 16, 18, 19, 16, 15, 18, 18, 3},
	{ 3, 14, 14, 13, 15, 14, 15, 35, 1},
	{ 4, 14, 19, 21, 18, 21, 23, 4, 5},
	{ 5, 15, 19, 15, 17, 19, 16, 19, 2}
	};
	
	while (1)
	{
		char n;
		printf("Меню:\n");
		printf("1.Исходные данные;\n2.Сумма очков каждого города;\n3.Рейтинг;\n4.Общая таблица.\n");
		scanf_s("%c", &n);
		getchar();
		switch (n)
		{

		case '1':
			puts("                  Городошный спорт\n");
			puts("                      Затрачено бит");
			puts("   Го       1 день        2 день        3 день       ");
			puts("   род     15    15      15    15      15    15      ");
			puts("          фигур фигур  фигур  фигур  фигур  фигур");
			for (int i = 0; i < 5; i++)
			{
				for (int j = 0; j < 7; j++)
				{
					printf("%5d  ", a[i][j]);
				}
				printf("\n\n");
			}
			break;
		case '2':
			puts("                   Городошный спорт\n");
			puts("                      ");
			puts("   Го                                              Сумма");
			puts("   род                                             очков");
			puts("          ");
			for (int i = 0; i < 5; i++)
			{
				for (int j = 0; j < 1; j++)
				{
					printf("%5d  ", a[i][j]);
				}
				for (int j = 7; j < 8; j++)
				{
					printf("%47d  ", a[i][j]);
				}
				printf("\n\n");
			}
			break;

		case '3':
			puts("                      Городошный спорт\n");
			puts("                      ");
			puts("   Го                                                     Рей");
			puts("   род                                                    тинг");
			puts("         ");
			for (int i = 0; i < 5; i++)
			{
				for (int j = 0; j < 1; j++)
				{
					printf("%5d ", a[i][j]);
				}
				for (int j = 8; j < 9; j++)
				{
					printf("%54d ", a[i][j]);
				}
				printf("\n\n");
			}
			break;
		case '4':
			puts("                  Городошный спорт\n");
			puts("                      Затрачено бит");
			puts("   Го       1 день        2 день        3 день      Сумма  Рей  ");
			puts("   род     15    15      15    15      15    15     очков  тинг");
			puts("          фигур фигур  фигур  фигур  фигур  фигур");
			for (int i = 0; i < 5; i++)
			{
				for (int j = 0; j < 9; j++)
				{
					printf("%5d  ", a[i][j]);
				}
				printf("\n\n");
			}
			break;
		default:
			printf("\nПункт меню не выбран");
			printf("\n\n");
			break;
		}
	}
}