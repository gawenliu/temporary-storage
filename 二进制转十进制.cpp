//������תʮ���Ƶļ��㴦�����Դ������Ҽ���Ҳ�ɴ���������㣨���߱�����ͬ�� 
//�������Ҽ���ÿһλ��*2������һλ��ֵ
//���磺1011��B):1  1*2+0=2  2*2+1=5 5*2+1=11
#include<stdio.h>
int main()
{
	char num;//��ʹ�ô������ҵļ��㷽����ֻ��ʹ���ַ������뷽ʽ����������ֱ�ӵõ�ÿһλ�ϵ���ֵ 
	int a=0;
	while(num=getchar(),num!='\n')//��Ϊ������һ������һ�߶���ֵ���м��㣬�ʶ�����ֻ��Ҫ���嵥��char 
		a=a*2+(num-'0');//�˴�������ֵ������'1'),num���ڼ������ASCII��ֵ��'1'��Ӧ49��,�ʶ���ȥ48����'0' 
	printf("%d\n",a);
	return 0;
//������תʮ���Ƶ��㷨����������ÿһλ��ֵ�ֱ�*2^(n-1)���������ܺ� 
//���磺1011��B��=1*1+1*2+0*4+1*8=11; 
//��һ�ֶ�����Ĵ�����char������������ֵ������ֱ�ӽ�������ÿһλ���ַ��������
#include<stdio.h>
#include<string.h>
int main()
{
	char num[100];//���ﶨ����һ��char���飬���������ֵ˳����char���� 
	int length=0,sum=0,zhi=0,wei=1; 
	scanf("%s",num);
	length=strlen(num);
	for(int i=length-1;i>=0;i--)//��Ϊ���ô���������㷨�����ǽ�char���鴢���ֵ������� 
	{
		zhi=(num[i]-'0')*wei;
		wei*=2;
		sum+=zhi;
	}
	printf("%d",sum);
	return 0;
 } */
 //�ڶ��֣������������룬������ķ�ʽ����ÿһλ����ֵ��
 #include<stdio.h> 
  int main()
{
	long long int num=0;//Ϊ������Χʹ��longlongint
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
