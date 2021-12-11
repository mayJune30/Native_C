#include <stdio.h>
#include <time.h>
#include <stdlib.h>

int main(void)
{
	//구구단
//	for (int i = 2; i < 10; i++) 
//	{
//		printf("---구구단 %d단---\n", i);
//		for (int j = 1; j < 10; j++) 
//		{
//			printf("%d X %d = %d\n", i, j, i * j);
//		}
//	}

	//별
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

	
	//랜덤 로또
	srand(time(NULL));//난수 초기화
	for (int j = 0; j < 5; j++)
	{
		for (int i = 0; i < 6; i++)
			printf("%d ", rand() % 44 + 1);
		printf("\n");
	}

	//업 앤 다운
	//srand(time(NULL));
	//int num = rand() % 100 + 1;
	//	printf("숫자: %d\n", num);
	//int answer = 0;
	//int chance = 5;
	//while (chance > 0)
	//{
	//	printf("남음 기회 %d번\n", chance--);
	//	printf("숫자를 맞혀보세요 (1~100) :");
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
	//		printf("정답입니다!\n\n");
	//		break;
	//	}
	//	else
	//	{
	//		printf("알 수 없는 오류가 발생했어요\n\n");
	//	}
	//	if (chance == 0)
	//	{
	//		printf("기회가 없습니다.\n\n");
	//		break;
	//	}
	//}
	
	return 0;
}