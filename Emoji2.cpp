#include <stdio.h>
int main ()
{
	char name;
	int BDay, type, diff, order, slash = 92;
	scanf("%c", &name);
	scanf("%d", &BDay);
	
	type = name;
	diff = type - BDay;
	if(diff%2 == 1)
	{
		if(type >= 65 && type <= 73)
		{
			if(BDay%10 == 5)
			{
				printf("%c(^_^)/", slash);
			} else printf("(^_^)");
		}
		if(type >= 74 && type <= 82)
		{
			if(BDay%10 == 5)
			{
				printf("%c(*o*)/", slash);
			} else printf("(*o*)");
		}
		if(type >= 83 && type <= 90)
		{
			if(BDay%10 == 5)
			{
				printf("%c(T_T)/", slash);
			} else printf("(T_T)");
		}
		return 0;
	}
	
	if(diff%2 == 0)
	{
		if(type >= 65 && type <= 73)
		{
			if(BDay%10 == 5)
			{
				printf("%c{@_@}/", slash);
			} else printf("{@_@}");
		}
		if(type >= 74 && type <= 82)
		{
			if(BDay%10 == 5)
			{
				printf("%c{*v*}/", slash);
			} else printf("{*v*}");
		}
		if(type >= 83 && type <= 90)
		{
			if(BDay%10 == 5)
			{
				printf("%c{x_x}/", slash);
			} else printf("{x_x}");
		}
		return 0;
	}
}
