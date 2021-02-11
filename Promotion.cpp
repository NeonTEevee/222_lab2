#include <stdio.h>
#include <math.h>
int main ()
{
	char promo;
	float time, price, mins, secs;
	scanf("%c", &promo);
	scanf("%f", &time);
	
	secs = time-floor(time);
	mins = floor(time);
	
	if(promo == 'A')
	{
		printf("%0.2f", 199+(((mins-200)+(secs*100/60))*3));
	}
	if(promo == 'B')
	{
		printf("%0.2f", 299+(((mins-400)+(secs*100/60))*2));
	}
}
