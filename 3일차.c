/*
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

int main()
{
	char arr[2];
	char change;
	char temp[2];

	printf("숫자입력 : ");
	scanf_s("%s", &arr, sizeof(arr));

	//change = arr - '0';

	char len = strlen(arr);

	for (int i = 1; i < len; i++)
	{
		for (int j = 0; j < len; j++)
		{
			for (int k = 0; k < j; k++)
			{
				temp[k] = arr[j] + arr[j + 1];
			}

		}
	}

	char origin = arr[0];
	char add = temp[1];

	strcat(origin, add);
	
	return 0;
}

//int combine(int a, int b)
//{
//	int ret = a;
//	while (b > 0)
//	{
//		ret *= 10;
//		b /= 10;
//	}
//	return ret + b;
//}
//
//int solution(int a, int b)
//{
//	int a_b = combine(a, b);
//	int b_a = combine(b, a);
//	if (a_b >= b_a)
//	{
//		return a_b;
//	}
//	else
//	{
//		return b_a;
//	}
//}
//
//int main()
//{
//	int a = 123;
//	int b = 2;
//	//printf("숫자입력 : "); // 스페이스 해주기
//	//scanf_s("%d%d", &a, &b, 1);
//	int result = solution(a, b);
//	printf("%d", result);
//
//	//int temp = (10 * a) + (b * 1);
//	
//
//	
//	return 0;
//}
*/