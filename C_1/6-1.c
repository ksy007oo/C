// while문
/*
```
#include <stdio.h>


int main(void)
{
	int i = 0;

	while (i < 5)
	{
		printf("Hello World!\n");
		i++;
	}
	return 0;
}
*/

//while문을 이용한 구구단 출력 프로그램
/*#include <stdio.h>

int main(void)
{
	int n;
	int i = 1;

	printf("출력하고싶은 단을 입력하시오:");
	scanf_s("%d", &n);

	while (i <= 9)
	{
		printf("%d*%d=%d\n", n, i, n * i);
		i++;
	}
	return 0;
}
*/

//while문을 이용한 제곱값 출력 프로그램
/*#include <stdio.h>

int main(void)
{
	int n;

	printf("============================\n");
	printf("      n          n의 곱\n");
	printf("============================\n");

	n = 1;
	while (n <= 10)
	{
		printf("%5d      %5d\n", n, n * n);
		n++;
	}
	return 0;
}
*/

//1부터 n까지의 합 계산하는 프로그램
/*#include <stdio.h>

int main(void)
{
	int i, n, sum;

	printf("정수를 입력하시오:");
	scanf_s("%d", &n);

	i = 1;
	sum = 0;

	while (i <= n)
	{
		sum += i;
		i++;
	}

	printf("1부터 %d까지의 합은 %d입니다.",n,sum);
	return 0;
}
*/

//while문으로 짝수들의 합 구하기
/*#include <stdio.h>

int main(void)
{
	int i, n, sum;

	printf("정수를 입력하시오:");
	scanf_s("%d", &n);

	i = 1;
	sum = 0;

	while (i <= n)
	{
		sum += i;
		i = i + 2;
	}
	
	printf("1부터 %d까지의 합은 %d입ㄴ다\n", n, sum);
	return 0;
}
*/

//while 문을 이용한 합계 프로그램
/*
#include <stdio.h>

int main(void)
{
	int i, n, sum;

	i = 0;
	sum = 0;
	while (i < 5)
	{
		printf("갑을 입력하시오:");
		scanf_s("%d", &n);
		sum = sum + n;
		i++;
	}

	printf("합계는 %d입니다.\n", sum);

	return 0;
}
*/

// for문
/*
#include <stdio.h>

int main(void)
{
	int i;
	for (i = 0; i < 5; i++)
	{
		printf("Hello World!\n");
	}

	return 0;
}
*/

//for 문 1부터 10까지의 정수의 합
/*
#include <stdio.h>

int main(void)
{
	int i, sum;

	sum = 0;
	for (i = 1; i <= 10; i++)
	{
		sum = sum + i;
		printf("1부터 10까지의 정수의 합: %d\n", sum);
	}
	return 0;
}
*/

// 중첩 for 문을 이용하여 * 기호를 사각형 모양으로 출력하는 프로그램
/*
#include <stdio.h>

int main(void)
{
	int x, y;

	for (y = 0; y < 5; y++)
	{
		for (x = 0; x < 10; x++)
		{
			printf("*");
		}
		printf("\n");
	}

	return 0;
}
*/

// for 문 예제 2
/*
#include <stdio.h>

int main(void)
{
	int x, y;

	for (y = 1; y <= 5; y++)
	{
		for (x = 0; x < y; x++)
		{
			printf("*");
		}
		printf("\n");
	}
	return 0;	
}
*/

// for문 중간점검 1
/*
#include <stdio.h>

int main(void)
{
	int i;

	for (i = 1; i < 5; i++)
	{
		printf("%d\n", 2 * i);
	}
	return 0;
}
*/

//for 문 중간점검 2
/*
#include <stdio.h>

int main(void)
{
	int i;

	for (i = 10; i > 0; i = i - 2)
	{
		printf("Student%d\n", i);
	}
	return 0;
}
*/

// 중첩 for 문 중간점검
/*
#include <stdio.h>

int main(void)
{
	int i, j;

	for (i = 0; i < 3; i++)
	{
		for (j = 0; j < 3; j++)
		{
			printf("%d 곱하기 %d는 %d\n", i, j, i * j);
		}
	}
	return 0;
}
*/

// 무한루프와 break
/*
#include <stdio.h>

int main(void)
{
	int i;

	for (i = 1; i < 10; i++)
	{
		if (i % 3 == 0) break;
		printf("%d",i);
	}
	
}
```
*/
