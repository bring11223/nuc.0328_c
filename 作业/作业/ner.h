#pragma once
int dmax(int a[])
{
	int i; int max = a[0];
	for (i = 1; i < 10; i++)
	{
		if (a[i] > max)
			max = a[i];
	}
	return max;
}
int dmin(int a[])
{
	int i; int min = a[0];
	for (i = 1; i<10; i++)
	{
		if (a[i] < min)
			min = a[i];
	}
	return min;
}