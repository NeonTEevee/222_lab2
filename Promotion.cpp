#include <stdio.h>
#include <math.h>
int main ()
{
	char promo;
	float time, price, mins, secs;
	scanf("%c", &promo);
	scanf("%0.2f", &time);
	
	secs = time-floor(time);
	printf("%f\n", secs);
	mins = floor(time);
	printf("%f\n", mins);
	
	if(promo == 'A')
	{
		printf("%0.2f", 199+(((mins-200)+(secs/60))*3));
	}
	if(promo == 'B')
	{
		printf("%0.2f", 299+(((mins-400)+(secs/60))*2));
	}
}
