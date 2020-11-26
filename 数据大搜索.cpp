/*
写一个程序，把一个字符串中的数字子序列找出来并转换成十进制整数输出。

Standard Input
第一行是整数nn，表示测试的数据组数，下面是nn行无空格的字符串（长度不超过200）。题目保证字符串中含的整数位数小于99位，不考虑负数情形。

Standard Output
每一行输入对应一行输出，一行中若有多个数据，每个数据后有一个空格。
*/
#include<stdio.h>
#include<string.h>
int main()
{
	int n,length,storage;
	char string[200];
	scanf("%d",&n);
	for(int x=0;x<n;x++)
	{
		scanf("%s",string);
		length=strlen(string);
		for(int y=0;y<length;y++)
		{
			if(string[y]>='0'&&string[y]<='9')
			{
				storage=string[y]-'0';
				while(string[y+1]>='0'&&string[y+1]<='9')
				{
					y++;
					storage=storage*10+string[y]-'0';
				}
				printf("%d ",storage);
			}
		}
	}
	return 0;
}
