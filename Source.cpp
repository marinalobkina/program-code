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
		printf("����:\n");
		printf("1.�������� ������;\n2.����� ����� ������� ������;\n3.�������;\n4.����� �������.\n");
		scanf_s("%c", &n);
		getchar();
		switch (n)
		{

		case '1':
			puts("                  ���������� �����\n");
			puts("                      ��������� ���");
			puts("   ��       1 ����        2 ����        3 ����       ");
			puts("   ���     15    15      15    15      15    15      ");
			puts("          ����� �����  �����  �����  �����  �����");
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
			puts("                   ���������� �����\n");
			puts("                      ");
			puts("   ��                                              �����");
			puts("   ���                                             �����");
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
			puts("                      ���������� �����\n");
			puts("                      ");
			puts("   ��                                                     ���");
			puts("   ���                                                    ����");
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
			puts("                  ���������� �����\n");
			puts("                      ��������� ���");
			puts("   ��       1 ����        2 ����        3 ����      �����  ���  ");
			puts("   ���     15    15      15    15      15    15     �����  ����");
			puts("          ����� �����  �����  �����  �����  �����");
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
			printf("\n����� ���� �� ������");
			printf("\n\n");
			break;
		}
	}
}