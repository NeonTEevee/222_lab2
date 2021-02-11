#include <stdio.h>
#include <string.h>
int main ()
{
	char num[10], i;
	scanf("%s", num);
	for(i=0; i<strlen(num); i++)
	{
		if(num[i]=='0')
			printf("Zero");
		if(num[i]=='1')
			printf("One");
		if(num[i]=='2')
			printf("Two");
		if(num[i]=='3')
			printf("Three");
		if(num[i]=='4')
			printf("Four");
		if(num[i]=='5')
			printf("Five");
		if(num[i]=='6')
			printf("Six");
		if(num[i]=='7')
			printf("Seven");
		if(num[i]=='8')
			printf("Eight");
		if(num[i]=='9')
			printf("Nine");
		if(i+1<strlen(num))
			printf("-");
	}
}
