#include <stdio.h>
#include <locale.h>
int main()
{
	int num;
	int num2;
	setlocale(LC_ALL, "RUS");
	puts("Введите число");
	scanf_s("%d", &num);
	printf("Введено число %d\n", num);
	puts("Введите второе число");
	scanf_s("%d", &num2);
	printf("Введено число %d\n\n", num2);
	printf("Сумма первого и второго числа = %d\n", num + num2);
	printf("Разность первого и второго числа = %d\n", num - num2);
	printf("Произведение первого и второго числа = %d\n", num * num2);
	printf("Частное первого числа на второе равно = %g\n", (float)num / (float)num2);
	printf("Остаток от деления первого числа на второе равен = %d", num % num2);
}