#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <math.h>
int diff(int a, int b);
double SD(float avg, int num[], int j);
int main()
{
	int a, b, sum = 0, j = 0;
	float avg;
	scanf("%d %d", &a, &b);
	int num[100];
	if (a <= b)
	{
		for (int i = a; i <= b; i++,j++)
		{
			sum += i;
			printf("%d ", i);
			num[j] = i;
		}
	}
	else
	{
		for (int i = a; i >= b; i--,j++)
		{
			sum += i;
			printf("%d ", i);
			num[j] = i;
		}
	}
	avg = (float)sum / (diff(a, b) + 1);
	printf("\nAverage = %.1f\n",avg);
	printf("SD = %.2lf", SD(avg, num, j));
	return 0;
}
int diff(int a, int b)
{
	if (a >= b)return a - b;
	else return b - a;
}
double SD(float avg, int num[], int j)
{
	double sum = 0;
	for (int i = 0; i < j; i++)
	{
		sum += pow(((double)num[i] - (double)avg),2);
	}
	
	return sqrt(sum/(double)(j-1));
}