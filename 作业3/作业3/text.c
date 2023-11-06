#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
void ner(int n, int m)
{

	int i, j;
	for (i = 1; i <= n; i++) {
		printf("\n");
		for (j = 1; j <= i; j++)
		{
			printf("%d*%d=%d\t",i, j, i * j);
		}


	}
}
int main() {
	ner(9, 9);
	return 0;
}

