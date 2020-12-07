#include<stdio.h>
#include<string.h>
int main()
{
	char str[100];
	int x=0;
	//scanf("%[^\n]",str);
	while(str[x]!='\n')
	{
		x++;
		str[x]=getchar();
	}
	for(;x>0;x--)
	{
		printf("%c",str[x]);
	}
	return 0;
}
