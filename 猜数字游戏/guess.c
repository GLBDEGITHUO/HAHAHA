#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<stdlib.h>
#include<time.h>
void menu()//菜单函数
{
	printf("******************\n");
	printf("****1.PLAY**********\n");
	printf("****0.EXIT********\n");
    printf("******************\n");
}
void game()//游戏函数
{
	int ret = 0;//存储随机数字
	//用时间戳来设置随机数的起点
	//tiime_t time(time_t *timer)
	//time_t
	ret = rand();//生成1-100之间的数字
	int guess = 0;//存储猜的数字
	printf("%d\n", ret);
	while (1)
	{
		printf("请猜数字：>"); 
		scanf("%d", &guess);
		if (guess < ret)
		{
			printf("猜小了\n");
		}
		else if (guess > ret)
		{
			printf("猜大了\n");
		}
		else
		{
			printf("恭喜你，猜对了！\n");
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
	    printf("请选择：\n");
		scanf("%d", &input);
		switch (input)
		{
		case 1:
			game();
			break;
		case 0:
			printf("退出游戏\n");
			break;
		default:
			printf("选择错误,请重新选择\n");
			break;

		}
	} while (input);//?????	return 0;
}