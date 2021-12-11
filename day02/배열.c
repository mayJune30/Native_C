//#include <stdio.h>

//int main() {
//
//	int a[3];
//	printf("a=%d\n", &a);
//	printf("a=%d\n", a);
//	printf("a[0]=%d\n", &a[0]);
//	printf("a[1]=%d\n", &a[1]);
//	printf("a[2]=%d\n", &a[2]);
//
//	printf("sizeof(a)=%d\n", sizeof(a));
//}

//배열의 요소삽입
//int array_copy(int arr_1[5], int arr_2[5]);
//int main() {
//
//	int a[5] = { 1,2,3,4,5 };
//	int b[5];
//
//	array_copy(a, b);
//
//	printf("a: ");
//	for (int i = 0; i < 5; i++) {
//		printf("%d ", a[i]);
//	}
//	printf("\n");
//	printf("b: ");
//	for (int i = 0; i < 5; i++) {
//		printf("%d ", b[i]);
//	}
//
//
//}
//
//int array_copy(int arr_1[5], int arr_2[5]) {
//	for (int i = 0; i < 5; i++) {
//		arr_2[i] = arr_1[i];
//	}
//}

//문자열
//int main() {
//	char str1[] = "hello";
//	char str2[] = { 'h','e','l','l','o'};
//
//	printf("sizeof(str1):%d\n", sizeof(str1)); // '\0'를 포함하여 6byte
//	printf("sizeof(str2):%d\n", sizeof(str2)); // 5byte
//}


//#include <string.h>

//int main() {
//	char country[10] = "Korea";
//	char nation[10];
//	//nation에 country의 값 복사
//
//	strcpy(nation, country);
//	printf("country: %s, nation: %s\n", country, nation);
//}