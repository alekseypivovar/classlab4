/*vvodim stroku iz neskolkih slov, razdelennih probelami (mozhno ne odnim). 
Programma vivodit kazhdoe slovo po odnomy na stroke*/
#include <stdio.h>
#define N 256

int main()
{
	char str[N];
	printf("Enter a string:\n");
	fgets(str, N, stdin);


// variant 1:
	/*
	int i;
	for (i = 0; str[i] != '\0'; i++)
	{
		if (str[i] !=' ')
			putchar(str[i]);
		else
		{
			if(str [i-1]!=' ')
				putchar('\n');
				continue;
		}
	}

	*/

	// variant 2:

	int i = 0;
	do
	{
		if (str[i] != ' ')
			putchar(str[i]);
		else
		{
			if (str[i - 1] != ' ')
				putchar('\n');
		}
		i++;
	} 
	while (str[i] != '\0');
	
	
	
	
	putchar('\n');
	return 0;
}