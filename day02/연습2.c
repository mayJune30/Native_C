#include <stdio.h>

void main(){

	const float PI = 3.14; //실수형 변수 
	float pi = 3.14;
	int radius; //정수형 변수

	PI = 3.1;
	pi = 3.1;

	scanf("%d", &radius); //radius 변수에 숫자를 저장할거야
	printf("%d*3.14=%f\n", radius , radius * PI);


}