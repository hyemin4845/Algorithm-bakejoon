// ���� - �� ���� A�� B�� �Է¹��� ����, A+B�� ����ϴ� ���α׷��� �ۼ��Ͻÿ�.
// �Է� - ù° �ٿ� A�� B�� �־�����. (0 < A, B < 10)
// ��� - ù° �ٿ� A+B�� ����Ѵ�.
#define CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main(void) {
	int A = 0;
	int B = 0;
	scanf_s("%d%d", &A, &B); //�Է��� �޾ƿ� ���� '&'(�ּ�)���̱�!
	printf("%d\n", A + B);
	return 0;
}