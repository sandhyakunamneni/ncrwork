#include<stdio.h>
#include<conio.h>
void str(char *s1,char *s2)
{
	int i;
	for (i = 0;s1[i] != '\0';i++)
	{
		if (s1[i] == s2[i])
		{
			break;
		}
  }
	printf("character is %c", s1[i]);
 }
void main()
{
	char *s1;
	char *s2;
	scanf_s("%s", &s1,1);
	scanf_s("%s",& s2,1);

	str(s1,s2);
}