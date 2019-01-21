// 문제 - 두 정수 A와 B를 입력받은 다음, A+B를 출력하는 프로그램을 작성하시오.
// 입력 - 첫째 줄에 A와 B가 주어진다. (0 < A, B < 10)
// 출력 - 첫째 줄에 A+B를 출력한다.
#define CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main(void) {
	int A = 0;
	int B = 0;
	scanf_s("%d%d", &A, &B); //입력을 받아올 때는 '&'(주소)붙이기!
	printf("%d\n", A + B);
	return 0;
}