#include <stdio.h>
#include <stdlib.h>
#include <string.h>

//�����Է¹ޱ�
//
//�Է¹������� �տ������� ������ �и�
//
//�и��� ���ڵ� ���ϱ�
//
//���ؼ� �յڰ� ��ġ�ϸ� ����
//
//�ƴϸ� �� ���� �и��ؼ� ��ġ �Ҷ����� �ݺ�
//
//���������� ����ġ �� ��� ������ �ƴ����� �Ǻ�

int main()
{
	char arr[50];
	int len;
	len = strlen(arr);
	printf("�����Է� : ");
	scanf_s("%s", arr);

	int front = 1; // �и������� �ռ��� ��
	int back = 1; // �и������� �޼��� ��

	for (int i = 0; i < len; i++)
	{
		front *= arr[i]; // ���ڸ� ���� ��
		back *= arr[i]; // ���ڸ� ���� ��
		if (front == back) // ��ġ�ϸ�
			break; // ����
	}
	printf(front == back ? "Yes" : "No");

	return 0;
}