#include<stdio.h>

#define TOGETHER(x,y) x##y//##；将两个参数连在一起

int main(void)
{
	printf("%d\n", TOGETHER(2, 50));

	return 0;
}