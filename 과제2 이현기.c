#include <stdio.h>
int main()
{
	int a, b, c;
	char d;
	printf("������ �Է��ϼ���.\n");
	printf("�������� ����: + - * / %% & | ^\n");
	printf("�Է� ��: 2 + 3\n\n�Է� >>");
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
		printf("�߸��� �������Դϴ�.");
	printf("\n���>> %d %c %d = %d\n", a, d, b, c);
}