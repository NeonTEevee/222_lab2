#include <stdio.h>
#include <iostream>
#include <ios>
using namespace std;

int main ()
{
	int num[3], i, min = 1, mid = 1, max = 1, Amin, Bmid, Cmax;
	char order[3];
	
	cin >> num[0] >> num[1] >> num[2];
	scanf("%s", order);
	
	for(i=0; i<3; i++)
	{
		if(max < num[i])
			max = num[i];
		if(min > num[i])
			min = num[i];
	}
	
	for(i=0; i<3; i++)
	{
		if(num[i] >= min && num[i] <= max)
			mid = num[i];
	}
	
	for(i=0; i<3; i++)
	{
		if(order[i] == 'A')
			printf("%d ", min);
		if(order[i] == 'B')
			printf("%d ", mid);
		if(order[i] == 'C')
			printf("%d ", max);
	}
}
