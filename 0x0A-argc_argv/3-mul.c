

Theemiss
/
holbertonschool-low_level_programming
Public
Code
Issues
Pull requests
2
Actions
Projects
Wiki
Security
Insights
 master 
holbertonschool-low_level_programming/0x0A-argc_argv/3-mul.c
 
 
26 lines (25 sloc)  308 Bytes
 #include <stdio.h>
#include <stdlib.h>
/**
 * main - mul 2 argv
 * @argc:int
 * @argv:string
 * Return:int
 */
int main(int argc, char *argv[])
{
	int x, i, j;

if (argc != 3)
{
	printf("Error\n");
	return (1);
}
else
{
	i = atoi(argv[1]);
	j = atoi(argv[2]);
	x = i * j;
	printf("%d\n", x);
}
return (0);
}
