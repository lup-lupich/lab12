#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <locale.h>

void task1();
void task2();
void task3();
void task4();
void task5();

int main() {
	setlocale(LC_CTYPE, "RUS");

	task1();
	task2();
	task3();

	return 0;
}

void task1() {
	int *pi, i = 5;
	float *pf, f = 2.1f;
	double *df, d = 20.152525;

	printf("Задание 1\n\n");
	printf("%lu\n", sizeof(pi));
	printf("%lu\n", sizeof(pf));
	printf("%lu\n", sizeof(df));

	//Под указатель всегда выделяется 8 байт
}

void task2() {
	float PI = 3.14159, * p1, * p2;

	p1 = p2 = &PI;

	printf("Задание 2\n\n");
	printf("По адресу p1=%p хранится *p1=%g\n", p1, *p1);
	printf("По адресу p2=%p хранится *p2=%g\n", p2, *p2);

	//p1 и p2 хранят одиннаковые адреса переменной PI
}

void task3() {
	int *pa, x = 5;

	pa = &x;

	printf("Задание 3\n\n");
	printf("По адресу %p хранится *ptr=%g\n", pa, *pa);

	//pа++;

	printf("По адресу %p хранится *ptr=%g\n", pa, *pa);

	//pа--;

	printf("По адресу %p хранится *ptr=%g\n", pa, *pa);
}