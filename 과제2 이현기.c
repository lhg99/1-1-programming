#include <stdio.h>
int main()
{
	int a, b, c;
	char d;
	printf("수식을 입력하세요.\n");
	printf("연산자의 종류: + - * / %% & | ^\n");
	printf("입력 예: 2 + 3\n\n입력 >>");
	scanf_s(" %d %c %d", &a, &d, &b);
	if (d == '+')
		c = a + b;
	else if (d == '-')
		c = a - b;
	else if (d == '*')
		c = a * b;
	else if (d == '/')
		c = a / b;
	else if (d == '%')
		c = a % b;
	else if (d == '&')
		c = a & b;
	else if (d == '|')
		c = a | b;
	else if (d == '^')
		c = a ^ b;
	else
		printf("잘못된 연산자입니다.");
	printf("\n결과>> %d %c %d = %d\n", a, d, b, c);
}