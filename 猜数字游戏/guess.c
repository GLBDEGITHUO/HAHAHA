#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<stdlib.h>
#include<time.h>
void menu()//�˵�����
{
	printf("******************\n");
	printf("****1.PLAY**********\n");
	printf("****0.EXIT********\n");
    printf("******************\n");
}
void game()//��Ϸ����
{
	int ret = 0;//�洢�������
	//��ʱ�������������������
	//tiime_t time(time_t *timer)
	//time_t
	ret = rand();//����1-100֮�������
	int guess = 0;//�洢�µ�����
	printf("%d\n", ret);
	while (1)
	{
		printf("������֣�>"); 
		scanf("%d", &guess);
		if (guess < ret)
		{
			printf("��С��\n");
		}
		else if (guess > ret)
		{
			printf("�´���\n");
		}
		else
		{
			printf("��ϲ�㣬�¶��ˣ�\n");
			break;
		}
	}
}
int main()
{
	int input = 0;
	srand((unsigned int)time(NULL));
	do
	{ 
		menu();
	    printf("��ѡ��\n");
		scanf("%d", &input);
		switch (input)
		{
		case 1:
			game();
			break;
		case 0:
			printf("�˳���Ϸ\n");
			break;
		default:
			printf("ѡ�����,������ѡ��\n");
			break;

		}
	} while (input);//?????	return 0;
}