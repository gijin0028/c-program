#include<stdio.h> 
main()
{
	int i,n,sum = 0;
	int start;
	printf("���� �� �� �Է� :");
	scanf("%d",&i);
	start = i;
	printf("������ �� �Է� :"); 
		scanf("%d",&n);
		
	while(n>=i)
	{
		sum = i+sum;
		i=i+1;
	}
	printf("%d���� %d������ ���� %d�Դϴ�\n",start,n,sum);
	 
}
