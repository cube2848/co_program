#include <stdio.h>
#include <stdlib.h>
#include <time.h>

// 랜덤하게 배열을 나열해서, 처음부터 대조해 나가기
// 다음 숫자와 현재 숫자가 일치하면 
// 홀수일때 : 2로 나눈 나머지가 5 넘으면 안됨
// 짝수일때 : 2로 나눈 몫보다 크면 안됨


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

	printf("중복된 원소 : ");
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