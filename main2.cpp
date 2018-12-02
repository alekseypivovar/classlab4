// programma kotoraya vidaet vvedennuyu stroke bez povtora simvolov
#include <stdio.h>
#define N 256

int main()
{
	char str[N];
	printf("Enter a string:\n");
	fgets(str, N, stdin);
	
	/*
	// reshenie bez massiva:
	int j, i;
	for (i = 0; str[i] != '\0'; i++)
	{
		for (j = 0; j < i; j++)
		if (str[i] == str[j])
			break;
		if (i == j)
			putchar(str[i]);
	}
	putchar('\n');
		*/

	/*
	// reshenie s massivom moe:
	int count[128] = { 0 };

	for (int i = 0; str[i] != '\0'; i++)
	{
		if (count[str[i]] == 0)
		putchar(str[i]);
		count[str[i]]++;
	}
	putchar('\n');
	*/

	//reshenie bez lishnih funkciy:
	char present[128] = { 0 };
	for (int i = 0; str[i] != '\0'; i++)
	{
		if (present[str[i]] == 0)
		{
			putchar(str[i]);
			present[str[i]] = 1;
		}
	}
	putchar('\n');
	
	
	return 0;


}