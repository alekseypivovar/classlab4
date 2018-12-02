#define _USE_MATH_DEFINES
#include <stdio.h>
#include <math.h>

int main()
{
	int N = 1000; 
	double x = 0.0, y;
	double deltaX = 2 * M_PI / N;

	for (int i = 0; i < N; i++)
	{
		y = cos(x);
		printf("%f\t%f\n", x, y);
		x += deltaX;
	}
	return 0;
}