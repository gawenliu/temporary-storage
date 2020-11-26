/*
实现两个33*33矩阵的乘法。

Standard Input
第一行是一个正整数nn表示测试数据的组数。接下来有2n2n个三阶矩阵。整数的范围为[-1000,1000?1000,1000]。

Standard Output
每组数据对应有一个矩阵输出，每个数后输出一个空格。

每组数据之后输出一个空行。

Samples
*/
#include<stdio.h>
int main()
{
	int n,num_1[1000][9],num_2[1000][9],num_3[1000][9];
	scanf("%d",&n);
	for(int x=0;x<n;x++)
	{
		for(int y=0;y<9;y++)
		{
			scanf("%d",&num_1[x][y]);
		}
		for(int y=0;y<9;y++)
		{
			scanf("%d",&num_2[x][y]);
		}
		num_3[x][0]=num_1[x][0]*num_2[x][0]+num_1[x][1]*num_2[x][3]+num_1[x][2]*num_2[x][6];
		num_3[x][1]=num_1[x][0]*num_2[x][1]+num_1[x][1]*num_2[x][4]+num_1[x][2]*num_2[x][7];
		num_3[x][2]=num_1[x][0]*num_2[x][2]+num_1[x][1]*num_2[x][5]+num_1[x][2]*num_2[x][8];
		num_3[x][3]=num_1[x][3]*num_2[x][0]+num_1[x][4]*num_2[x][3]+num_1[x][5]*num_2[x][6];
		num_3[x][4]=num_1[x][3]*num_2[x][1]+num_1[x][4]*num_2[x][4]+num_1[x][5]*num_2[x][7];
		num_3[x][5]=num_1[x][3]*num_2[x][2]+num_1[x][4]*num_2[x][5]+num_1[x][5]*num_2[x][8];
		num_3[x][6]=num_1[x][6]*num_2[x][0]+num_1[x][7]*num_2[x][3]+num_1[x][8]*num_2[x][6];
		num_3[x][7]=num_1[x][6]*num_2[x][1]+num_1[x][7]*num_2[x][4]+num_1[x][8]*num_2[x][7];
		num_3[x][8]=num_1[x][6]*num_2[x][2]+num_1[x][7]*num_2[x][5]+num_1[x][8]*num_2[x][8];
	}
	for(int x=0;x<n;x++)
	{
		printf("%d %d %d\n%d %d %d\n%d %d %d\n\n",num_3[x][0],num_3[x][1],num_3[x][2],num_3[x][3],num_3[x][4],num_3[x][5],num_3[x][6],num_3[x][7],num_3[x][8]);
	}
	return 0;
}
