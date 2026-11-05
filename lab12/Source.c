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

	int user_input;

	printf("Выберите задание: ");
	scanf("%d", &user_input);
	printf("\n");

	switch (user_input) {
		case 1: task1(); break;
		case 2: task2(); break;
		case 3: task3(); break;
		case 4: task4(); break;
		//case 5: task5(); break;
	}
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

	//Под указатель всегда выделяется 8 байт.
}

void task2() {
	float PI = 3.14159, * p1, * p2;

	p1 = p2 = &PI;

	printf("Задание 2\n\n");
	printf("По адресу p1=%p хранится *p1=%g\n", p1, *p1);
	printf("По адресу p2=%p хранится *p2=%g\n", p2, *p2);

	//p1 и p2 хранят одиннаковые адреса переменной PI.
}

void task3() {
	int *pa, x = 5;
	double* pd, d = 52525252;
	char* pc, c = 'c';
	long double* pld, ld = 415616161;
	short unsigned* psu, su = 6;
	_Bool* pB, B = 1;

	pa = &x;
	pd = &d;
	pc = &c;
	pld = &ld;
	psu = &su;
	pB = &B;

	printf("Задание 3\n\n");

	//int
	printf("INT:\n\n");
	printf("По адресу %x хранится *ptr=%d\n", pa, *pa);

	pa++;

	printf("По адресу %x хранится *ptr=%d\n", pa, *pa);

	pa--;

	printf("По адресу %x хранится *ptr=%d\n\n", pa, *pa);

	//double
	printf("DOUBLE:\n\n");
	printf("По адресу %x хранится *ptr=%f\n", pd, *pd);

	pd++;

	printf("По адресу %x хранится *ptr=%f\n", pd, *pd);

	pd--;

	printf("По адресу %x хранится *ptr=%f\n\n", pd, *pd);

	//char
	printf("CHAR:\n\n");
	printf("По адресу %x хранится *ptr=%c\n", pc, *pc);

	pc++;

	printf("По адресу %x хранится *ptr=%c\n", pc, *pc);

	pc--;

	printf("По адресу %x хранится *ptr=%с\n\n", pc, *pc);

	//long double
	printf("LONG DOUBLE:\n\n");
	printf("По адресу %x хранится *ptr=%f\n", pld, *pld);

	pld++;

	printf("По адресу %x хранится *ptr=%f\n", pld, *pld);

	pld--;

	printf("По адресу %x хранится *ptr=%f\n\n", pld, *pld);

	//short unsigned
	printf("SHORT UNSIGNED:\n\n");
	printf("По адресу %x хранится *ptr=%d\n", psu, *psu);

	psu++;

	printf("По адресу %x хранится *ptr=%d\n", psu, *psu);

	psu--;

	printf("По адресу %x хранится *ptr=%d\n\n", psu, *psu);

	//bool
	printf("BOOL:\n\n");
	printf("По адресу %x хранится *ptr=%d\n", pB, *pB);

	pB++;

	printf("По адресу %x хранится *ptr=%d\n", pB, *pB);

	pB--;

	printf("По адресу %x хранится *ptr=%d\n\n", pB, *pB);

	//При увеличение указателя на единицу, значение указателя (адрес) увеличивается на размер типа данных, на который он указывает, в данном случае на 4 байта, 
	//происходит переход на другую ячейку памяти, в которой лежит другое число.
	//При уменьшении указателя на единицу, его значение становится исходным, он указывает на 5 и выводит 5.
	//Для double указатель смещается на 8 байт, для char на 1 байт, для long double на 8 байт (должен на 16 байт), для unsigned short на 2 байта, для _Bool на 1 байт.
}

void task4() {
	float array[10] = { 1.1, 2.2, 3.3, 4.4, 5.5, 6.6, 7.7, 8.8, 9.9, 10.1 };
	float* ptr_a = array;
	int i = 0;

	printf("%p\n", array);
	printf("%p\n", &array[0]);
	printf("%p\n\n", &array);

	printf("%p, %f\n", ptr_a, *ptr_a);
	ptr_a++;
	printf("%p, %f\n", ptr_a, *ptr_a);
	printf("%p, %f\n", ptr_a + 4, *(ptr_a + 4));
	printf("%p, %f\n\n", ptr_a - 2, *(ptr_a - 2)); //Выход за границы массивы

	ptr_a = array;
	for (; ptr_a < &array[10]; ptr_a += 2) {

		printf("array[%d] = %.1f\n", i, *ptr_a);
		printf("ptr_a(array[%d]) = %p\n", i, ptr_a);

		i += 2;
	}
	
	printf("\n");

	ptr_a = &array[9];
	i = 9;
	for (; ptr_a >= &array[0]; ptr_a--) {

		printf("array[%d] = %.1f\n", i, *ptr_a);
		printf("ptr_a(array[%d]) = %p\n", i, ptr_a);

		i--;
	}

}