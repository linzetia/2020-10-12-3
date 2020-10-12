//猜数字游戏
//电脑生成一个随机数
//猜数字
#include<stdio.h>
#include<stdlib.h>
#include<time.h>

void menu()
{
	printf("*************************\n");
	printf("***  1 play  0 exit   ***\n");
	printf("*************************\n");
}

void game()
{
	//生成一个随机数
	int ret = 0;
	int guess = 0;
	//时间戳需要一个time函数，形式->(unsigned int)time()  (unsigned int)强制类型转换，time头文件time.h
	//srand((unsigned int)time(NULL));//()内的整数需要不断变化，所以需时间戳（每个时刻对应一个整数） NULL表示空指针
	 ret = rand()%100+1;//生成随机数  //处于一百取余得到1-99的数，然后+1得到1-100的数
	 while (1)
	 {
		 printf("请猜一个数\n");
		 scanf("%d",&guess);
		 if (guess > ret)
		 {
			 printf("你猜大了\n");
		 }
		 else if (guess < ret)
		 {
			 printf("你猜小了\n");
		 }
		 else
		 {
			 printf("恭喜你！猜对了\n");
			 break;
		 }
	 }
}

int main()
{
	int input = 0;
	//srand建议放在循环体外部
	srand((unsigned int)time(NULL));//()内的整数需要不断变化，所以需时间戳（每个时刻对应一个整数） NULL表示空指针
	do 
	{
		menu();
		printf("猜数游戏请选择>\n");
		scanf("%d",&input);
		switch (input)
		{
		case 1:
			game();
			//printf("进入游戏\n");
			break;
		case 0:
			printf("退出游戏\n");
			break;
		default:
			printf("输入错误，请重新选择\n");
		}
	}while (input);
	return 0;
}