// while��
/*#include <stdio.h>


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

//while���� �̿��� ������ ��� ���α׷�
/*#include <stdio.h>

int main(void)
{
	int n;
	int i = 1;

	printf("����ϰ���� ���� �Է��Ͻÿ�:");
	scanf_s("%d", &n);

	while (i <= 9)
	{
		printf("%d*%d=%d\n", n, i, n * i);
		i++;
	}
	return 0;
}
*/

//while���� �̿��� ������ ��� ���α׷�
/*#include <stdio.h>

int main(void)
{
	int n;

	printf("============================\n");
	printf("      n          n�� ��\n");
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

//1���� n������ �� ����ϴ� ���α׷�
/*#include <stdio.h>

int main(void)
{
	int i, n, sum;

	printf("������ �Է��Ͻÿ�:");
	scanf_s("%d", &n);

	i = 1;
	sum = 0;

	while (i <= n)
	{
		sum += i;
		i++;
	}

	printf("1���� %d������ ���� %d�Դϴ�.",n,sum);
	return 0;
}
*/

//while������ ¦������ �� ���ϱ�
/*#include <stdio.h>

int main(void)
{
	int i, n, sum;

	printf("������ �Է��Ͻÿ�:");
	scanf_s("%d", &n);

	i = 1;
	sum = 0;

	while (i <= n)
	{
		sum += i;
		i = i + 2;
	}
	
	printf("1���� %d������ ���� %d�Ԥ���\n", n, sum);
	return 0;
}
*/

//while ���� �̿��� �հ� ���α׷�
/*
#include <stdio.h>

int main(void)
{
	int i, n, sum;

	i = 0;
	sum = 0;
	while (i < 5)
	{
		printf("���� �Է��Ͻÿ�:");
		scanf_s("%d", &n);
		sum = sum + n;
		i++;
	}

	printf("�հ�� %d�Դϴ�.\n", sum);

	return 0;
}
*/

// for��
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

//for �� 1���� 10������ ������ ��
/*
#include <stdio.h>

int main(void)
{
	int i, sum;

	sum = 0;
	for (i = 1; i <= 10; i++)
	{
		sum = sum + i;
		printf("1���� 10������ ������ ��: %d\n", sum);
	}
	return 0;
}
*/

// ��ø for ���� �̿��Ͽ� * ��ȣ�� �簢�� ������� ����ϴ� ���α׷�
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

// for �� ���� 2
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

// for�� �߰����� 1
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

//for �� �߰����� 2
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

// ��ø for �� �߰�����
/*
#include <stdio.h>

int main(void)
{
	int i, j;

	for (i = 0; i < 3; i++)
	{
		for (j = 0; j < 3; j++)
		{
			printf("%d ���ϱ� %d�� %d\n", i, j, i * j);
		}
	}
	return 0;
}
*/

// ���ѷ����� break
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
*/