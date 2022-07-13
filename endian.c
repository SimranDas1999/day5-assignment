#include<stdio.h>
int main()
{
	int var=1;
	char *p=&var;
	if(*p==1)
		printf("Little endian cpu\n");
	else
		printf("Big endian cpu\n");
}
