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
	char board[ROW][COL] = {0};//��ʼ������
	initboard(board, ROW, COL);//����������Ԫ������Ϊ�ո��ַ�
	displayboard(board, ROW, COL);//��ӡ����+����
	while (1)
	{
		player(board,ROW,COL);//�������
		ret = win(board, ROW, COL);//�ж���Ӯ
		if (ret != 'c')
		{
			break;
		}
		displayboard(board, ROW, COL);
		computer(board, ROW, COL);//��������
		ret = win(board, ROW, COL);//�ж���Ӯ
		if (ret != 'c')
		{
			break;
		}
		displayboard(board, ROW, COL);
	}
	if (ret == '*')
	{
		printf(" \n");
		printf("���Ӯ��!\n");
	}
	else if (ret == '#')
	{
		printf(" \n");
		printf("����Ӯ��!\n");
	}
	else
	{
		printf(" \n");
		printf("ƽ��!\n");
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
		printf("��ѡ��:");

		scanf("%d", &input);
		switch (input)
		{
			case 1:
			{
				game();
			}
				break;
			case 0:
				printf("�˳���Ϸ\n");
				break;
			default:
				printf("������ѡ��\n");
				break;
		}
	} while (input);

	return 0;
}