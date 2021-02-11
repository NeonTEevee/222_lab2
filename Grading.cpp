#include <stdio.h>
int main ()
{
	int a, b, c, sum;
	scanf("%d %d %d", &a, &b, &c);
	sum = a + b + c;
	if(sum >= 80 && sum <= 100)
		printf("A");
	if(sum >= 75 && sum <= 79)
		printf("B+");
	if(sum >= 70 && sum <= 74)
		printf("B");
	if(sum >= 65 && sum <= 69)
		printf("C+");
	if(sum >= 60 && sum <= 64)
		printf("C");
	if(sum >= 55 && sum <= 59)
		printf("D+");
	if(sum >= 50 && sum <= 54)
		printf("D");
	if(sum < 50)
		printf("F");
}
