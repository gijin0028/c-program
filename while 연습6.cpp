#include<stdio.h> 
main()
{
	int i,n,sum = 0;
	int start;
	printf("시작 할 수 입력 :");
	scanf("%d",&i);
	start = i;
	printf("마지막 수 입력 :"); 
		scanf("%d",&n);
		
	while(n>=i)
	{
		sum = i+sum;
		i=i+1;
	}
	printf("%d부터 %d까지의 합은 %d입니다\n",start,n,sum);
	 
}
