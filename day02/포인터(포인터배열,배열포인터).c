#include <stdio.h>

//int main() {
//	int a = 10, b = 20, c = 30;
//	int* ar[3];
//	ar[0] = &a;
//	ar[1] = &b;
//	ar[2] = &c;
//	for (int i = 0; i < 3; i++) {
//		printf("ar[%d]:%d\n", i, *ar[i]);
//	} 
//	*ar[0] = 100;
//	printf("a:%d\n", a);
//
//	return 0;
//}

//int main() {
//	char* name[5] = { "메모리","CPU","모니터","메인보드","하드디스크" };
//	int code_number;
//	printf("Code Number:");
//	scanf("%d", &code_number);
//	if ((code_number >= 0) && (code_number <= 4)) {
//		printf("제품명:%s\n", name[code_number]);
//	}
//	else {
//		printf("제품 코드 입력 오류!");
//	}
//	
//	return 0;
//}

//int main() {
//	int i, j;
//	int num1 = 10, num2 = 20, num3 = 30, num4 = 30;
//	int arr[2][2] = { 
//		{1,2},
//		{3,4}
//	};
//	int* ptr_num[4] = { &num1, &num2, &num3, &num4 };
//	int(*ptr_arr)[2] = arr;
//	for (i = 0; i < 4; i++) {
//		printf("%d ", *ptr_num[i]);
//		}
//	printf("\n");
//	for (i = 0; i < 2; i++) {
//		for (j = 0; j < 2; j++) {
//			printf("%d ", ptr_arr[i][j]);
//		}
//		printf("\n");
//	}
//
//	return 0;
//}