/*ʶ���2000����3000����������꣬�����ͳ����������ÿ��10�����*/
#include<stdio.h>
int main(void)
{
	int years, i;
	int sum = 0;

	for (years = 2000, i = 0; years < 3000; years++)
	{
		if (years % 4 == 0 && years % 100 != 0)			//�ܱ�4���������ܱ�100����������
		{
			printf("%d\t", years);
			i++;
			sum++;
		}
		if (years % 400 == 0)						//�ܱ�400����.
		{
			printf("%d\t", years);
			i++;
			sum++;
		}

		if (i == 10)									//ÿ10������һ�����
		{
			i = 1;
			printf("\n");
		}
	}

	printf("\n�����ܸ���Ϊ%d", sum);

	getchar();
	return 0;
}
