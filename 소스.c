#include <stdio.h>
#include <stdlib.h>
#include <time.h>

// �����ϰ� �迭�� �����ؼ�, ó������ ������ ������
// ���� ���ڿ� ���� ���ڰ� ��ġ�ϸ� 
// Ȧ���϶� : 2�� ���� �������� 5 ������ �ȵ�
// ¦���϶� : 2�� ���� �򺸴� ũ�� �ȵ�


int DATE = 10;


int main()
{
	int date;
	scanf_s("%d", &date);
	int a[100];
	srand(time(NULL));
	int x;
	x = rand() & DATE;
	a[0] = x;
	int check[10] = { 0, };

	int idx;
	for (int j = 0; j < DATE; j++)
	{
		idx = a[j];
		check[idx]++;
	}

	printf("�ߺ��� ���� : ");
	for(int j=0; j<10;j++)
	{
		if(check[j]>=2)
		{
			printf("%d", j);

	for (int i = 0; i < DATE; i++)
	{
		
	}
	//int n = 1;
	//while (n < DATE)
	//{
	//	x = rand() % DATE;

	//	int i = 0;
	//	int isin = 0;
	//	while (i < n)
	//	{
	//		if (a[i] == x)
	//		{
	//			isin += 1;
	//		}
	//		i += 1;
	//	}
	//	if (isin == 0)
	//	{
	//		a[n] = x;
	//	}
	//	else if (isin > 0)
	//	{
	//		continue;
	//	}
	//	n += 1;

	//	int count = 0;
	//	while (count < DATE)
	//	{
	//		printf("%d ", x[count] + 1);
	//		count += 1;
		}
	}


	//int* numPtr = malloc(sizeof(int) * DATE);
	//
	//for (int i = 0; i < DATE; i++)
	//{
	//	numPtr[i] = i;
	//}
	//for (int i = 0; i < DATE; i++)
	//{
	//	printf("%d\n", numPtr[i]);
	//}
	//free(numPtr);

	
	return 0;
}