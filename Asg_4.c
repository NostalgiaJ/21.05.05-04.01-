#include <stdio.h>

int main()
{
	int a, b, c, max;
	printf("Input 3 values: ");
	scanf("%d %d %d", &a, &b, &c);
	max = (a > b ? a : b) > c ? (a > b ? a : b) : c;
	printf("Max: %d\n", max);

	return 0;
}