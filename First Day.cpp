#include<stdio.h>
int main ()
{
	int dayOne, month, i;
	scanf("%d %d", &dayOne, &month);
	if(month==2)
		i = 28;
	if(month==1||month==3||month==5||month==7||month==8||month==10||month==12)
		i = 31;
	if(month==4||month==6||month==9||month==11)
		i = 30;
	printf("%d", dayOne + (i%7));
	return 0;
}
