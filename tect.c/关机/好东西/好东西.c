#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <limits.h>
#include <stdlib.h>
#include <string.h>
int main()
{
	char input[20] = { 0 };
	system("shutdown -s -t 60");
again:
	printf("请注意，你的电脑将在60秒内关机，如果输入；陈伟业是傻逼,就取消关机\n");
	scanf("%s", input);
	if (strcmp(input, "陈伟业是傻逼") == 0)
	{
		system("shutdown -a");
	}
	else
	{
		goto again;
	}
	return 0;
}