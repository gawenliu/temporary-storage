#include<stdio.h>
#include<string.h> 
int main()
{
	char max[20],min[20],str[1000][20];
	int length=0,x=0;
	scanf("%s",str[x]);
	length=strlen(str[x]);
	strcpy(max,str[x]);
	strcpy(min,str[x]);
	while(length!=4)
	{
		x++;
		scanf("%s",str[x]);
		if(strcmp(str[x],min)<0)	strcpy(min,str[x]);
		if(strcmp(str[x],max)>0)	strcpy(max,str[x]);
		length=strlen(str[x]);
	}
	printf("max:%s\n",max);
	printf("min:%s",min);
	return 0;
} 
