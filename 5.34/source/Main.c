#include <stdio.h>
#include <stdlib.h>

int power(int num1, int num2)
{
	if (num2 == 1)
		return num1;
	return num1 * power(num1, num2 - 1);
}

int main()
{
	int num1, num2;
	printf("Enter number and power: ");
	scanf("%d %d", &num1, &num2);
	printf("Answer: %d\n", power(num1, num2));

	system("pause");
	return 0;
}

