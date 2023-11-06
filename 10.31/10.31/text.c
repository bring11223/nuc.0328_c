#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<math.h>
float ner(){
	int n;
	float num;
	scanf("%d",&n);
	num = pow(2, n);
	return num;
}
int main()
{
	float g;
	g = ner();
	printf("%f",g);
	return 0;
}