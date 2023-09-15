#include <stdio.h>
void main()
{
	char alpha[26];
	int i, j;
	
	for(i = 65, j = 0; i < 91; i++, j++)
	{
		alpha[j] = i;
		printf("\The character now assigned is %d\n", alpha[j]);
	}
	getchar();
}
