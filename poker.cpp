/*一个刚刚学习C编程的同学想设计一款斗地主扑克牌游戏，现在他想先实现以下2个功能：
功能1.随机生成18张牌，不区分花色，无大小王，牌面用1~13表示，但18张牌中同样牌面的牌不多于4(含)张。（20分）
功能2.检查手里的18张牌是否有炸弹（4张牌面相同的牌），如果有，输出牌面值，如果没有，什么也不输出。（10分）
辅助功能3.为了辅助上述功能的开发和验证程序正确性，请打印出手中18张牌的牌面；对牌面进行选择排序，并且使用升序，并再次打印。（输出10分，排序20分）*/
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int main()
{
	int pai[18],sum[13],y=0,storage;
	for(int x=1;x<=18;x++)
	{
		while(1)
		{
			pai[x]=rand()%13+1;
			switch(pai[x])
			{
				case 1:sum[1]++;break;
				case 2:sum[2]++;break;
				case 3:sum[3]++;break;
				case 4:sum[4]++;break;
				case 5:sum[5]++;break;
				case 6:sum[6]++;break;
				case 7:sum[7]++;break;
				case 8:sum[8]++;break;
				case 9:sum[9]++;break;
				case 10:sum[10]++;break;
				case 11:sum[11]++;break;
				case 12:sum[12]++;break;
				case 13:sum[13]++;break;
			}
			if(sum[pai[x]]==5)
			{
				sum[pai[x]]--;
			}
			else if(sum[pai[x]]==4)
			{
				y++;
				printf("find bomb:%d",pai[x]);
			}
			else
			{
				break;
			}
		}
	}
	for(int x=1;x<=18;x++)
	{
		printf("%d ",pai[x]);
	}
	for(int x=1;x<=18;x++)
	{
		for(int z=x+1;z<=18;z++)
		{
			if(pai[x]<pai[z])
			{
				storage=pai[x];
				pai[x]=pai[z];
				pai[z]=storage;
			}
		}
	}
	printf("\n");
	for(int x=18;x>0;x--)
	{
		printf("%d ",pai[x]);
	}
	printf("\n");
	if(y==0)
	printf("find no bomb");
	return 0;
}
