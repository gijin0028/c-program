#include<stdio.h>
main()
{
	int i = 1 ;
	int sum = 0;
	while(i<11)
	{
		sum = sum + i;
		i=i+1;
		
	}
	printf("1부터 10까지의 합 : %d",sum);
}
