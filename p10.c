#include<stdio.h>
#include<conio.h>

void del(char *, char *);
void main()
{
	char *s1;// = "sandhya";
	char *s2;// = "lp";
	s1 = (char *)malloc((sizeof(char *) * 20);
	s2 = (char *)malloc((sizeof(char *) * 20);
	scanf("%s", &s1);
	scanf("%s", &s2);
	del(s1, s2);
	getchar();
}
void del(char *s1, char *s2)
{
	int i, j, k = 0, flag = 0;
	char a[20];
	for (i = 0;*(s1 + i) != '\0';i++)
	{
		flag = 0;
		for (j = 0;*(s2 + j) != '\0';j++)
		{
			if (*(s1 + i) == *(s2 + j))
			{
				flag = 1;
				break;
			}
		}
		if (flag == 0)
		{
			a[k] = *(s1+i);
			k++;
		}

	}
	a[k] = '\0';
	puts(a);
}