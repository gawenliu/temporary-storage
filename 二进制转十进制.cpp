//二进制转十进制的计算处理：可以从左往右计算也可从右往左计算（两者本质相同） 
//从左往右即在每一位上*2加上下一位的值
//例如：1011（B):1  1*2+0=2  2*2+1=5 5*2+1=11
#include<stdio.h>
int main()
{
	char num;//若使用从左往右的计算方法，只能使用字符的输入方式，这样可以直接得到每一位上的数值 
	int a=0;
	while(num=getchar(),num!='\n')//因为这里是一边输入一边对数值进行计算，故而我们只需要定义单个char 
		a=a*2+(num-'0');//此处输入数值（比如'1'),num用于计算的是ASCII码值（'1'对应49）,故而减去48或者'0' 
	printf("%d\n",a);
	return 0;
//二进制转十进制的算法即从右往左每一位的值分别*2^(n-1)并计算其总和 
//例如：1011（B）=1*1+1*2+0*4+1*8=11; 
//第一种对输入的处理：用char数组来输入数值，可以直接将二进制每一位数字分离出来；
#include<stdio.h>
#include<string.h>
int main()
{
	char num[100];//这里定义了一个char数组，将输入的数值顺序导入char数组 
	int length=0,sum=0,zhi=0,wei=1; 
	scanf("%s",num);
	length=strlen(num);
	for(int i=length-1;i>=0;i--)//因为采用从右往左的算法，我们将char数组储存的值倒序调出 
	{
		zhi=(num[i]-'0')*wei;
		wei*=2;
		sum+=zhi;
	}
	printf("%d",sum);
	return 0;
 } */
 //第二种：用整数型输入，用求余的方式来出每一位的数值；
 #include<stdio.h> 
  int main()
{
	long long int num=0;//为了扩大范围使用longlongint
	int wei=0,sum=0,zhi=1;
	scanf("%ld",&num);
	while(num!=0)
	{
		wei=num%10;
		sum+=wei*zhi;
		zhi*=2;
		num/=10;
		printf("%d",sum);
	 }
	printf("%d",sum);
	return 0;
 } 
