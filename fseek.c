#include <stdio.h>

int main()
{
	FILE* fp;
	fp = fopen("file.txt", "r");

	fseek(fp, 0, SEEK_END);
	printf("%ld", ftell(fp));

	return 0;
}
// 5
