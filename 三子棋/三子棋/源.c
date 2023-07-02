#define _CRT_SECURE_NO_WARNINGS
#include "game.h"
void menu()
{
	printf("\n");
	printf("*******************\n");
	printf("* 1.play * 0.exit *\n");
	printf("*******************\n");
	printf("\n");

}
void game()
{
	char ret = 0;
	char board[ROW][COL] = {0};//初始化数组
	initboard(board, ROW, COL);//把数组所有元素设置为空格字符
	displayboard(board, ROW, COL);//打印符号+数组
	while (1)
	{
		player(board,ROW,COL);//玩家下棋
		ret = win(board, ROW, COL);//判断输赢
		if (ret != 'c')
		{
			break;
		}
		displayboard(board, ROW, COL);
		computer(board, ROW, COL);//电脑下棋
		ret = win(board, ROW, COL);//判断输赢
		if (ret != 'c')
		{
			break;
		}
		displayboard(board, ROW, COL);
	}
	if (ret == '*')
	{
		printf(" \n");
		printf("玩家赢了!\n");
	}
	else if (ret == '#')
	{
		printf(" \n");
		printf("电脑赢了!\n");
	}
	else
	{
		printf(" \n");
		printf("平局!\n");
	}
	displayboard(board, ROW, COL);

}
int main()
{
	srand((unsigned int)time(NULL));
	int input=0;
	do
	{
		menu();
		printf("请选择:");

		scanf("%d", &input);
		switch (input)
		{
			case 1:
			{
				game();
			}
				break;
			case 0:
				printf("退出游戏\n");
				break;
			default:
				printf("请重新选择\n");
				break;
		}
	} while (input);

	return 0;
}