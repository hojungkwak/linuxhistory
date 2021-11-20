#include <stdio.h>

void func1(int* p);
void func2(int** p);
void func3(int*** p);
void func5(int**** p);

int main() {
	int i = 100;

	int *p, **dp, ***tp;

	p = &i;
	dp = &p;
	tp = &dp;

	func1(&i);
	printf("i = %d\n", i);

	func2(&p);
	printf("*P = %d\n", *p);

	func3(&dp);
	printf("**dp = %d\n", **dp);

	func5(&tp);
	printf("***tp = %d\n", ***tp);

	printf("i = %d\n", i);

	return 0;

}

void func1(int* p)
{
	*p = *p+100;
}

void func2(int** p)
{
	**p = **p+100;
}

void func3(int*** p)
{
	***p = ***p+100;
}

void func5(int**** p)
{
	****p = ****p+100;
}

