#include <stdio.h>

//int main() {
//	int num1 = 10, num2 = 20;
//	int* ptr1 = &num1, * ptr2 = &num2;
//	int** dbptr1 = &ptr1, ** dbptr2 = &ptr2;
//	int sum;
//	sum = num1 + num2;
//	printf("num1+num2=%d\n", sum);
//
//	sum = *ptr1 + *ptr2;               
//	printf("*ptr+*ptr2=%d\n", sum);
//
//	sum = **dbptr1 + **dbptr2;
//	printf("**dptr1+**dbptr2=%d\n", sum);
//
//
//	return 0;
//}

//int main() {
//	int ar[5] = { 1,2,3,4,5 };
//	int* par = ar;
//	int** dbpar = &par;
//	printf("ar[0]:%d\n", ar[0]);
//	printf("*par:%d\n", *par);
//	printf("**dbpar:%d\n", **dbpar);
//}

//int main() {
//	int ar[2][5] = {
//		{1,2,3,4,5},
//		{1,2,3,4,5}
//	};
//	int* par = ar[0];
//	int** dbpar = &par;
//	printf("ar[0][0]:%d\n", ar[0][0]);
//	printf("dbpar[0][0]:%d\n", dbpar[0][0]);
//}

//int swap(int**, int**);
//int main() {
//	int num1 = 10, num2 = 20;
//	int* p1, * p2;
//	p1 = &num1;
//	p2 = &num2;
//	printf("Before % d, % d\n",num1,num2);
//	swap(&p1, &p2);
//	printf("After %d, %d\n", num1, num2);
//
//	return 0;
//}
//int swap(int** p1, int** p2) {
//	int temp = **p1;
//	**p1 = **p2;
//	**p2 = temp;
//}