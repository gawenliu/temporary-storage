/*
дһ�����򣬰�һ���ַ����е������������ҳ�����ת����ʮ�������������

Standard Input
��һ��������nn����ʾ���Ե�����������������nn���޿ո���ַ��������Ȳ�����200������Ŀ��֤�ַ����к�������λ��С��99λ�������Ǹ������Ρ�

Standard Output
ÿһ�������Ӧһ�������һ�������ж�����ݣ�ÿ�����ݺ���һ���ո�
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
