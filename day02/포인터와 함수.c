//#include <stdio.h>
//int swap(int, int);
//
////Call By Value
//int main() {
//	int x = 10, y = 20;
//	printf("x:%d, y:%d\n", x, y);
//	swap(x, y);
//	printf("x:%d, y:%d\n", x, y);
//}
//
//int swap(int x, int y) {
//	int temp;
//	temp = x;
//	x = y;
//	y = temp;
//	printf("swap( )실행!\n");
//	printf("x:%d, y:%d\n", x, y);
//}
//
//
//// Call By Adress
//
//int main() {
//	int x = 10, y = 20;
//	printf("x:%d, y:%d\n", x, y);
//	swap(&x, &y);
//	printf("x:%d, y:%d\n", x, y);
//}
//
//int swap(int *px, int *py) {
//	int temp;
//	temp = *px;
//	*px = *py;
//	*py = temp;
//	printf("swap( )실행!\n");
//	printf("x:%d, y:%d\n", *px, *py);
//}