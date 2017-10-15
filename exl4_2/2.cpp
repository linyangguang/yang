/*识别出2000——3000间的所有闰年，输出并统计年数，按每行10个输出*/
#include<stdio.h>
int main(void)
{
	int years, i;
	int sum = 0;

	for (years = 2000, i = 0; years < 3000; years++)
	{
		if (years % 4 == 0 && years % 100 != 0)			//能被4整除而不能被100整除的闰年
		{
			printf("%d\t", years);
			i++;
			sum++;
		}
		if (years % 400 == 0)						//能被400整除.
		{
			printf("%d\t", years);
			i++;
			sum++;
		}

		if (i == 10)									//每10个数换一行输出
		{
			i = 1;
			printf("\n");
		}
	}

	printf("\n闰年总个数为%d", sum);

	getchar();
	return 0;
}
