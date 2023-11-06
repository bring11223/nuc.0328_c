#define _CRT_SECURE_NO_WARNINGS 1
//#include<stdio.h>
//int main()
//{
//	int x,max, arr[10];
//	for (x = 0; x < 10; x++)
//	{
//		scanf("%d", &arr[x]);
//	}
//	for (x = 0; x < 10; x++)
//	{
//		if (arr[x] > arr[x + 1])
//			max = x+1;
//	}
//	printf("%d", max);
//	return 0;
//}
//int main()
//{
//	float a[3][4];
//	int x, y, maxindex1, maxindex2;
//	for (x = 0; x <= 2; x++)
//	{
//		for (y = 0; y <= 3; y++)
//		{
//			scanf("%f", &a[x][y]);
//		}
//	}
//	for (x = 0; x <= 2; x++) 
//	{
//		for (y = 0; y <= 3; y++)
//		{
//			if (a[x][y] > a[x][y + 1])
//				maxindex1 = x;
//				maxindex2 = y;
//		}
//	}
//	printf("%.2f", a[maxindex1][maxindex2]);
//	return 0;
//}


//作业一菲波那切数列

//#include<stdio.h>
//int main() 
//{
//	int arr[20] = { 0 };
//	arr[0] = 1;
//	arr[1] = 1;
//	for (int index = 2; index < 20; index++) {
//		arr[index] = arr[index - 1] + arr[index - 2];
//	}
//	for (int x = 0; x < 20; x++) {
//		printf("%d\n",arr[x]);
//	}
//	return 0;
//}


#include<stdio.h>
int main()
{
	int a[3][3];
	int x, y;
	int sum1 = 0;
	int sum2 = 0;
	for (x = 0; x < 3; x++)
		for (y = 0; y < 3; y++)
			scanf("%d",&a[x][y]);
	// 初始化二维数组
	for (x = 0; x < 3; x++) {
		for (y = 0; y < 3; y++)
		{
			printf("%3d", a[x][y]);
		}
		printf("\n");
	}
	// 打印二维数组
	for (x = 0; x < 3; x++)
		sum1 = sum1 + a[x][x];
	for (x = 0; x < 3; x++)
		sum2 = sum2 + a[x][2 - x];
	printf("两条对角线的和:%d", sum1 + sum2);
	return 0;
}
