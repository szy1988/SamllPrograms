#include <iostream>
using namespace std;
#if 0
/*
resolve the 1 bits of int  
*/
int countint(int x)
{
	int count=0;
	while(x)
	{
		if(x&0x1u)
			count++;
		x>>=1;		
	}	
	return count;
} 
int main()
{
	int a=0xffffffff;
	int nums;
	nums=countint(a);
	cout<<"nums="<<nums<<endl;	
	system("pause");
	return 0;
}
#endif
/*
judge machine is 32bits or 16bits
*/
#if 0
int main()
{
	unsigned int a=~0;
	if(a>65535)//16bits maxinums is 65535 
		cout<<"32bits"<<endl;
	else
		cout<<"16bits"<<endl;
	system("pause");
	return 0;
}
#endif
/*
judge cpu is big port or small port
*/
int checkCPU1()
{
	union w //Share a piece of memory
	{
		int a;
		char b;	
	}c;	
	c.a=1;
	return (c.b==1);// if small port return 1 
}
int checkCPU2()
{
	unsigned short a=0x1122;//our machine is small port normally
	unsigned char*ptra=(unsigned char*)&a;//point to a pointer
	return (*ptra==0x22);
}
int main()
{
	if(checkCPU1)
		cout<<"small port"<<endl;
	else
		cout<<"big port"<<endl;
	if(checkCPU2)
		cout<<"small port"<<endl;
	else
		cout<<"big port"<<endl;	
	system("pause");	
	return 0;	
}
