#include<stdio.h>
#include<stdlib.h>

int main(void)
{
	FILE *in, *out;
	int cnt;
	char str[100];
	in = fopen("C://c/hw-class7/welcome.txt","r");
	out = fopen("C://c/hw-class7/output1.txt","w");
	while (!feof(in))
	{
		cnt = fscanf(in, "%s", str);
		if (cnt > 0)
			fprinf(out, "%s\n", str);
	}
	fclose(in);
	fclose(out);
	system("pause");
	return 0;
}