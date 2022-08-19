#include<stdio.h>
main()
{
	int i = 10 ,dan;

	scanf("%d",&dan);
	printf("***%d´Ü***\n",dan);
	while(i>1){

		i=i-1;
	printf("%d*%d = %d\n",dan,i,i*dan);
	}

}
