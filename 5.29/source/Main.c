#include <stdio.h>
#include <stdlib.h>

int lcm(int a, int b)
{
	int max = a;
	if (max < b)
		max = b;
	while (1)
	{
		if(max % a == 0 && max % b == 0)
			return max;
		max++;
	}
}

int main()
{
	int num1, num2;
	printf("Enter two numbers: ");
	scanf("%d %d", &num1, &num2);
	printf("Least common multiple: %d\n", lcm(num1, num2));

	system("pause");
	return 0;
}