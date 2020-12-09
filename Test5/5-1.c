/* 实验5-1程序改错与跟踪调试题程序 */
#include <stdio.h>
void strcate(char[], char[]);
void strdelc(char[], char);
int main(void)
{
	char a[] = "Language", b[100] = "Programming"; //initialize the two arrays
	printf("%s %s\n", b, a);
	strcate(b, a); //execute the function strcat
	printf("%s %s\n", b, a);
	strdelc(b, 'a'); //execute the function strdelc
	printf("%s\n", b);
	return 0;
}

void strcate(char t[], char s[])
{
	int i = 0, j = 0;
	while (t[i++])
		;
	i--;
	while ((t[i++] = s[j++]) != '\0')
		; //merge the strings in a sequence
}

void strdelc(char s[], char c)
{
	int j, k;
	for (j = k = 0; s[j] != '\0'; j++)
	{
		if (s[j] != c)
			s[k++] = s[j]; //move the back of the array
	}
	s[k] = '\0'; //mark the end
}
