/*
��һ�������ľ���ֵ 
ȡ����������һ��������λ������ȡ����
�ڶ��������������� ȡ����1 
*/

#include <iostream>
using namespace std;
int MyAbs1(int x)
{
	int y;
	y=x>>31;//����31λ �����x�Ǹ�������yΪ-1������yΪ0 
	return (x^y)-y;//ȡ����1	
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
