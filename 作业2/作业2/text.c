#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
void ner(int n,int m)
{
	int ner;
	ner = n * m;
	printf("%d*%d=%d", n, m, ner);
}
int main()
{
	ner(2,5);
	return 0;

}