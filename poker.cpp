/*һ���ո�ѧϰC��̵�ͬѧ�����һ������˿�����Ϸ������������ʵ������2�����ܣ�
����1.�������18���ƣ������ֻ�ɫ���޴�С����������1~13��ʾ����18������ͬ��������Ʋ�����4(��)�š���20�֣�
����2.��������18�����Ƿ���ը����4��������ͬ���ƣ�������У��������ֵ�����û�У�ʲôҲ���������10�֣�
��������3.Ϊ�˸����������ܵĿ�������֤������ȷ�ԣ����ӡ������18���Ƶ����棻���������ѡ�����򣬲���ʹ�����򣬲��ٴδ�ӡ�������10�֣�����20�֣�*/
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
