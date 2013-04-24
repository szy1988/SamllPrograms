#include <iostream>
#include <string.h>
#include <malloc.h>
using namespace std;
#if 0
/*将字符串数字转换为整型数字*/
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
/*将字符串转换为整型，考虑所有的情况*/
int myatoi2(char *str)
{
	int ret_integer = 0;
	int integer_sign = 1;
	/*
	*判断指针是否为空
	*/
	if(str == NULL)
	{
		cout<<"pointer is null"<<endl;
		return 0;	
	}
	/*
	*跳过前面的空格字符 
	*/
	while(isspace(*str) == 1)
	{
		str++;
	}
	/*
	*判断正负号
	*如果是正号，指针指向下一个字符
	*如果是负号，把标记integer_sign置为-1，并将指针指向下一个字符 
	*/
	if(*str == '-')
		integer_sign = -1;
	if(*str == '-'||*str == '+')
		str++;
	/*
	*将数字字符串逐个转换成整数,对字符串中出现的字母则跳过 
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

/*将整数转成为字符串*/
char str[100]={0};
char *myitoa(int n)
{
	int sign = n;
	int k=0;
	if(n<0)
		n = -n;//转为正数
	do
	{
		str[k++]=n%10+'0';	
	}while((n/=10)>0); //循环条件至少是两位 
	
	/*判断负号为，确定字符串的最后一位，是不是'-'*/
	if(sign<0)
		str[k++]='-';
	str[k]='\0';
	
	/*逆向字符串*/
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
