#include <stdio.h>
#include <locale.h>
int main()
{
	int num;
	int num2;
	setlocale(LC_ALL, "RUS");
	puts("������� �����");
	scanf_s("%d", &num);
	printf("������� ����� %d\n", num);
	puts("������� ������ �����");
	scanf_s("%d", &num2);
	printf("������� ����� %d\n\n", num2);
	printf("����� ������� � ������� ����� = %d\n", num + num2);
	printf("�������� ������� � ������� ����� = %d\n", num - num2);
	printf("������������ ������� � ������� ����� = %d\n", num * num2);
	printf("������� ������� ����� �� ������ ����� = %g\n", (float)num / (float)num2);
	printf("������� �� ������� ������� ����� �� ������ ����� = %d", num % num2);
}