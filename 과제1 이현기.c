#include <stdio.h>
int main(void)
{
	int a;
	printf("ȭ���µ�(F)�� �Է��ϼ��� ");
	scanf_s("%d", &a);
	printf("ȭ���µ� %.1lf�� �����µ��� %.1lf�Դϴ�.\n", (double)a, (5.0 / 9.0)*(a - 32.0));

	char b;
	printf("���ڸ� �Է��ϼ��� ");
	scanf_s(" %c", &b);
	printf("%c�� ASCII�ڵ��� ���� %d�Դϴ�\n", b, (int)b);

	int c, d;
	printf("8���� 16������ ������� �Է��ϼ��� ");
	scanf_s(" %o %x", &c, &d);
	printf("%o(8) + %x(16) = %d", c, d, (int)(c + d));
	return 0;
}