#include <stdio.h>
#include <string.h>

void swap(char *x, char *y)
{
	char tempolary;
	tempolary = *x;
	*x = *y;
	*y = tempolary;
}
void permutation(char *a, int l, int r)
{
int i;
if (l == r)
	printf("%s\n", a);
else
{
	for (i = l; i <= r; i++)
	{
		swap((a+l), (a+i));
		permutation(a, l+1, r);
		swap((a+l), (a+i));
	}
}
}
int main()
{
	char str[] = "OPQ";
	int n = strlen(str);
	permutation(str, 0, n-1);
	return 0;
}
