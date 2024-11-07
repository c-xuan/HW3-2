#include <stdio.h>
#include <stdlib.h>

unsigned long long a = 0, b = 1, temp;

unsigned long long fibonacci(int n)
{
	if (n == 0) return a;

	for (int i = 2; i <= n; i++) {
		temp = a + b;  
		a = b;         
		b = temp;      
	}
	return b;
}

int main()
{

	int n;
	printf("Enter Fibonacci number: ");
	scanf("%d", &n);
	printf("Fibonacci number %d is: %llu\n", n, fibonacci(n));
	
	int i = 1;
	a = 0, b = 1;
	while (1) {
		temp = a + b;
		if(temp < b){
			printf("The largest Fibonacci number is %llu number %d\n", b, i);
			break;
		}
		a = b;
		b = temp;
		i++;
	}
	system("pause");
	return 0;
}