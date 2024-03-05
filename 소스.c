#include <stdio.h>
#include <stdlib.h>
#include <string.h>

//숫자입력받기
//
//입력받은숫자 앞에서부터 구간별 분리
//
//분리된 숫자들 곱하기
//
//곱해서 앞뒤가 일치하면 멈춤
//
//아니면 그 다음 분리해서 일치 할때까지 반복
//
//마지막까지 불일치 일 경우 유진수 아님으로 판별

int main()
{
	char arr[50];
	int len;
	len = strlen(arr);
	printf("숫자입력 : ");
	scanf_s("%s", arr);

	int front = 1; // 분리했을때 앞숫자 곱
	int back = 1; // 분리했을때 뒷숫자 곱

	for (int i = 0; i < len; i++)
	{
		front *= arr[i]; // 앞자리 숫자 곱
		back *= arr[i]; // 뒷자리 숫자 곱
		if (front == back) // 일치하면
			break; // 멈춤
	}
	printf(front == back ? "Yes" : "No");

	return 0;
}