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
	printf("��ע�⣬��ĵ��Խ���60���ڹػ���������룻��ΰҵ��ɵ��,��ȡ���ػ�\n");
	scanf("%s", input);
	if (strcmp(input, "��ΰҵ��ɵ��") == 0)
	{
		system("shutdown -a");
	}
	else
	{
		goto again;
	}
	return 0;
}