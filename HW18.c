#include <stdio.h>
 
int main()
{
	const int number = 10;
	int x;
	int i;
	int count[number];
	
 	printf("輸入數字：");
 	printf("輸入-1開始計算");
	for (i = 0; i < number; i++)
	{
		count[i] = 0;
	}
	scanf("%d", &x);
	while (x != -1)
	{
		if (x >= 0 && x <= 9)
		{
			count[x]++;
		}
		scanf("%d", &x);
	}
	for (i = 0; i < number; i++)
	{
		printf("%d:%d \n", i, count[i]);
	}
	return 0;
}

