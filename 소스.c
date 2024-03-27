#include <stdio.h>

//void ex();
//{
//	int i;
//	int num[10] = { 0 };
//	int data = 0;
//
//	for (i = 0; i < 10; i++)
//	{
//		printf("input an integer (0~9) : ");
//		scanf("%d", &data);
//		if (data > 10)
//			break;
//		num[data]++;
//	}
//
//	for (i = 0; i < 10; i++)
//	{
//		printf("%d : %d번\n", i, num[i]);
//	}
//}

int input();
{
	int std;
	printf("학생 수 : ");
	scanf("%d", &std);

	return std;
}



int Score(std);
{
	int score_arr = { 0 };
	int score = 0;
	for (int i = 0; i < std; i++)
	{
		scanf("%d", &score);
		score_arr[score]++;
	}

	return score_arr;
}

void Max(int n, int arr[]);
{
	int max, temp;
	max = arr[0];
	for (int i = 0; i < n; i++)
	{
		if (arr[i] < max)
		{
			max = arr[i];
			arr[i] = temp;
			temp = max;
		}
	}
	return max;
}

int main()
{
	//int i;
	//printf("Insert number : ");
	//scanf("%d", &i);
	//for (int j = i; j >= 0; j--)
	//{
	//	for (int k = 1; k < j + 1; k++)
	//	{
	//		printf("%d", k);
	//	}
	//	printf("\n");
	//}



	return 0;
}