/*
求一个整数的绝对值 
取反操作，第一个函数是位操作的取反。
第二个函数是正常的 取反加1 
*/

#include <iostream>
using namespace std;
int MyAbs1(int x)
{
	int y;
	y=x>>31;//右移31位 ，如果x是负数，则y为-1，否则y为0 
	return (x^y)-y;//取反加1	
}
int MyAbs2(int x)
{
	if(x>=0)
		return x;
	else
		return (~x+1);
	
}

int main()
{
	int a=2;
	int b=-2;
	cout<<"MyAbs1(2)="<<MyAbs1(2)<<endl;
	cout<<"MyAbs1(-2)="<<MyAbs1(-2)<<endl;
	
	cout<<"MyAbs2(8)="<<MyAbs2(8)<<endl;
	cout<<"MyAbs2(-8)="<<MyAbs2(-8)<<endl;
	system("pause");
	return 0;	
} 
