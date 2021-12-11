//#include <stdio.h>
//
//void static_vtest();
//void main() {
//	static_vtest();
//	static_vtest();
//	static_vtest();
//}
//
//void static_vtest() {
//	int sum = 0;
//	static int s_sum = 0;
//	sum = sum + 10;
//	s_sum = s_sum + 10;
//	printf("sum:%d, s_sum:%d\n", sum, s_sum);
//
//}
//void v_test(int);
//int global_a;
//
//void main() {
//	int local_b;
//	global_a = 10;
//	local_b = 10;
//	printf("1.global_a=%d,local=%d\n", global_a, local_b);
//	v_test(local_b);
//	printf("3.global_a=%d, local=%d\n", global_a, local_b);
//}
//
//void v_test() {
//	int local_b;
//	global_a = 20;
//	local_b = 20;
//	printf("2.global=%d ,local=%d\n", global_a, local_b);
//
//}