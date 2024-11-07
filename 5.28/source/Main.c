#include <stdio.h>
#include <stdlib.h>

char change(char c) 
{
	char big[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
	char samll[] = "abcdefghijklmnopqrstuvwxyz";

	for (int i = 0; i < 26; i++)
	{
		if (c == big[i])
			return samll[i];
		else if (c == samll[i])
			return big[i];
	}
	return c;
}

int main()
{
	char enter;
	printf("Enter a letter: ");
	scanf("%c", &enter);
	printf("Changed letter: %c\n", change(enter));

	system("pause");
	return 0;
}

