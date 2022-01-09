#include <stdio.h>
int main(void)
{
	int a;
	printf("화씨온도(F)를 입력하세요 ");
	scanf_s("%d", &a);
	printf("화씨온도 %.1lf의 섭씨온도는 %.1lf입니다.\n", (double)a, (5.0 / 9.0)*(a - 32.0));

	char b;
	printf("문자를 입력하세요 ");
	scanf_s(" %c", &b);
	printf("%c의 ASCII코드의 값은 %d입니다\n", b, (int)b);

	int c, d;
	printf("8진수 16진수를 순서대로 입력하세요 ");
	scanf_s(" %o %x", &c, &d);
	printf("%o(8) + %x(16) = %d", c, d, (int)(c + d));
	return 0;
}