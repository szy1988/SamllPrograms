#include <iostream>
#include <string.h>
#include <malloc.h>
using namespace std;
#if 0
/*���ַ�������ת��Ϊ��������*/
int myatoi1(char *str)
{
	int result=0;
	for(;*str!='\0';str++)
	{
		result=result*10+(*str-'0');
	}
	return result;
}
#endif
#if 0
/*���ַ���ת��Ϊ���ͣ��������е����*/
int myatoi2(char *str)
{
	int ret_integer = 0;
	int integer_sign = 1;
	/*
	*�ж�ָ���Ƿ�Ϊ��
	*/
	if(str == NULL)
	{
		cout<<"pointer is null"<<endl;
		return 0;	
	}
	/*
	*����ǰ��Ŀո��ַ� 
	*/
	while(isspace(*str) == 1)
	{
		str++;
	}
	/*
	*�ж�������
	*��������ţ�ָ��ָ����һ���ַ�
	*����Ǹ��ţ��ѱ��integer_sign��Ϊ-1������ָ��ָ����һ���ַ� 
	*/
	if(*str == '-')
		integer_sign = -1;
	if(*str == '-'||*str == '+')
		str++;
	/*
	*�������ַ������ת��������,���ַ����г��ֵ���ĸ������ 
	*/
	for(;*str!='\0';str++)
	{
		if(isdigit(*str))
			ret_integer = ret_integer*10 + (*str-'0');
		else 
			continue;
	}
	ret_integer = ret_integer*integer_sign;
	return ret_integer;
}
#endif

/*������ת��Ϊ�ַ���*/
char str[100]={0};
char *myitoa(int n)
{
	int sign = n;
	int k=0;
	if(n<0)
		n = -n;//תΪ����
	do
	{
		str[k++]=n%10+'0';	
	}while((n/=10)>0); //ѭ��������������λ 
	
	/*�жϸ���Ϊ��ȷ���ַ��������һλ���ǲ���'-'*/
	if(sign<0)
		str[k++]='-';
	str[k]='\0';
	
	/*�����ַ���*/
	int left=0,right;
	int i,j;
	int tmp;
	right=strlen(str)-1;
	for(i=left,j=right;j>i;i++,j--)
	{
		tmp=str[i];
		str[i]=str[j];
		str[j]=tmp;
	}
	return str;
}

int main()
{
	int a=-123456789;
	char *string;
	string = myitoa(a);
	cout<<"*string="<<string<<endl;
	system("pause");
	return 0;	
}
