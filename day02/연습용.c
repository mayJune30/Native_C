#include <stdio.h>
#include <time.h>
#include <stdlib.h>

int main(void)
{
	//������
//	for (int i = 2; i < 10; i++) 
//	{
//		printf("---������ %d��---\n", i);
//		for (int j = 1; j < 10; j++) 
//		{
//			printf("%d X %d = %d\n", i, j, i * j);
//		}
//	}

	//��
//	int i, j;
//	for (i = 0; i < 5; i++)
//	{
//		printf(" ");
//		for (j = 0;j+i==4; j++)
//		{
//			printf("*");
//		}
//		printf("\n");
//	}

	
	//���� �ζ�
	srand(time(NULL));//���� �ʱ�ȭ
	for (int j = 0; j < 5; j++)
	{
		for (int i = 0; i < 6; i++)
			printf("%d ", rand() % 44 + 1);
		printf("\n");
	}

	//�� �� �ٿ�
	//srand(time(NULL));
	//int num = rand() % 100 + 1;
	//	printf("����: %d\n", num);
	//int answer = 0;
	//int chance = 5;
	//while (chance > 0)
	//{
	//	printf("���� ��ȸ %d��\n", chance--);
	//	printf("���ڸ� ���������� (1~100) :");
	//	scanf_s("%d", &answer);

	//	if (answer > num)
	//	{
	//		printf("DOWN\n\n");
	//	}
	//	else if (answer < num)
	//	{
	//		printf("UP\n\n");
	//	}
	//	else if (answer == num)
	//	{
	//		printf("�����Դϴ�!\n\n");
	//		break;
	//	}
	//	else
	//	{
	//		printf("�� �� ���� ������ �߻��߾��\n\n");
	//	}
	//	if (chance == 0)
	//	{
	//		printf("��ȸ�� �����ϴ�.\n\n");
	//		break;
	//	}
	//}
	
	return 0;
}