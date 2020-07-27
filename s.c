#define _CRT_SECURE_NO_WARNINGS	
#include <stdio.h>
#include <stdlib.h>

int main()
{
	system("title Automatic shutdown of computer after N second");

	int N = 0;
	char str[100] = { 0, };
	puts("Time(s) : ");
	scanf("%d", &N);

	sprintf(str, "shutdown -s -t %d", N);
	system(str);

	return 0;
}