//#include <stdio.h>
//
//int main() {
//	int* p1 = 1000;
//	int* p2 = 1000;
//
//	printf("[연산전]p1:%d,p2:%d\n", p1, p2);
//	p1++;
//	p2--;
//	printf("[연산후]p1:%d,p2:%d\n", p1, p2);
//}
//
//int main() {
//	int* pi = 1000;
//	float* pf = 1000;
//	char* pc = 1000;
//	double* pd = 1000;
//
//	pi++;
//	pf++;
//	pc++;
//	pd++;
//
//	printf("pi:%d\n", pi);
//	printf("pf:%d\n", pf);
//	printf("pc:%d\n", pc);
//	printf("pd:%d\n", pd);
//}
//
//int main() {
//	int x = 100;
//	int* px = &x;
//
//	printf("x:%d\n", x);
//	printf("&x:%d\n", &x);
//	printf("px:%d\n", px);
//	printf("*px:%d\n", *px);
//
//	px++;
//	printf("x:%d\n", x);
//	printf("&x:%d\n", &x);
//	printf("px:%d\n", px);
//	printf("*px:%d\n", *px);
//
//	px = &x;
//	printf("x:%d\n", x);
//	printf("&x:%d\n", &x);
//	printf("*px++:%d\n", *px++);
//	printf("px:%d\n", px);
//	printf("*px:%d\n", *px);
//
//	(*px)++;
//	printf("x:%d\n", x);
//	printf("&x:%d\n", &x);
//	printf("px:%d\n", px);
//	printf("*px:%d\n", *px);
//
//}