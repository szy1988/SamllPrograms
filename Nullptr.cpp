#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main()
{
	char *p=(char*)malloc(sizeof(char));
	strcpy(p,"hello");
	free(p);
	if(p!=NULL)
	{
	
		printf("not null\n");		
	}	
	system("pause");
	return 0;
}
